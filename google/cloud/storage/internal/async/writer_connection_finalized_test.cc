// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/async/writer_connection_finalized.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::google::cloud::testing_util::StatusIs;
using ::testing::IsEmpty;
using ::testing::VariantWith;

auto MakeTestObject() {
  return storage::ObjectMetadata{}
      .set_size(2048)
      .set_bucket("test-bucket")
      .set_name("test-object")
      .set_self_link(
          "https://test-only.p.googleapis.com/storage/v1/b/test-bucket/o/"
          "test-object")
      .set_media_link(
          "https://test-only.p.googleapis.com/download/storage/v1/b/"
          "test-bucket/o/test-object?generation=0&alt=media")
      .set_id("test-bucket/test-object/0")
      .set_kind("storage#object");
}

TEST(AsyncWriterConnectionFinalized, Basic) {
  auto expected = MakeTestObject();
  AsyncWriterConnectionFinalized tested("test-upload-id", expected);

  EXPECT_EQ(tested.UploadId(), "test-upload-id");
  EXPECT_THAT(tested.PersistedState(),
              VariantWith<storage::ObjectMetadata>(expected));

  EXPECT_THAT(tested.Write({}).get(),
              StatusIs(StatusCode::kFailedPrecondition));
  EXPECT_THAT(tested.Finalize({}).get(),
              StatusIs(StatusCode::kFailedPrecondition));
  EXPECT_THAT(tested.Flush({}).get(),
              StatusIs(StatusCode::kFailedPrecondition));
  EXPECT_THAT(tested.Query().get(), StatusIs(StatusCode::kFailedPrecondition));
  EXPECT_THAT(tested.GetRequestMetadata().headers, IsEmpty());
  EXPECT_THAT(tested.GetRequestMetadata().trailers, IsEmpty());
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
