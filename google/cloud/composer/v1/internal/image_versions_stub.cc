// Copyright 2022 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/orchestration/airflow/service/v1/image_versions.proto

#include "google/cloud/composer/v1/internal/image_versions_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/orchestration/airflow/service/v1/image_versions.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImageVersionsStub::~ImageVersionsStub() = default;

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListImageVersionsResponse>
DefaultImageVersionsStub::ListImageVersions(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        ListImageVersionsRequest const& request) {
  google::cloud::orchestration::airflow::service::v1::ListImageVersionsResponse
      response;
  auto status = grpc_stub_->ListImageVersions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google
