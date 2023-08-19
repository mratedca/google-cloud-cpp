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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/compute/disk_types/v1/disk_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_INTERNAL_DISK_TYPES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_INTERNAL_DISK_TYPES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/disk_types/v1/disk_types_connection.h"
#include "google/cloud/compute/disk_types/v1/disk_types_connection_idempotency_policy.h"
#include "google/cloud/compute/disk_types/v1/disk_types_options.h"
#include "google/cloud/compute/disk_types/v1/internal/disk_types_rest_stub.h"
#include "google/cloud/compute/disk_types/v1/internal/disk_types_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_disk_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DiskTypesRestConnectionImpl
    : public compute_disk_types_v1::DiskTypesConnection {
 public:
  ~DiskTypesRestConnectionImpl() override = default;

  DiskTypesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_disk_types_v1_internal::DiskTypesRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::DiskTypeAggregatedList>
  AggregatedListDiskTypes(
      google::cloud::cpp::compute::disk_types::v1::
          AggregatedListDiskTypesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::DiskType> GetDiskTypes(
      google::cloud::cpp::compute::disk_types::v1::GetDiskTypesRequest const&
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::DiskType> ListDiskTypes(
      google::cloud::cpp::compute::disk_types::v1::ListDiskTypesRequest request)
      override;

 private:
  static std::unique_ptr<compute_disk_types_v1::DiskTypesRetryPolicy>
  retry_policy(Options const& options) {
    return options.get<compute_disk_types_v1::DiskTypesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<compute_disk_types_v1::DiskTypesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_disk_types_v1::DiskTypesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<
            compute_disk_types_v1::DiskTypesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_disk_types_v1_internal::DiskTypesRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disk_types_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_INTERNAL_DISK_TYPES_REST_CONNECTION_IMPL_H
