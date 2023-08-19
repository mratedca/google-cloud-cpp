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
// source:
// google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_INTERNAL_GLOBAL_ORGANIZATION_OPERATIONS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_INTERNAL_GLOBAL_ORGANIZATION_OPERATIONS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/global_organization_operations/v1/global_organization_operations_connection.h"
#include "google/cloud/compute/global_organization_operations/v1/global_organization_operations_connection_idempotency_policy.h"
#include "google/cloud/compute/global_organization_operations/v1/global_organization_operations_options.h"
#include "google/cloud/compute/global_organization_operations/v1/internal/global_organization_operations_rest_stub.h"
#include "google/cloud/compute/global_organization_operations/v1/internal/global_organization_operations_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalOrganizationOperationsRestConnectionImpl
    : public compute_global_organization_operations_v1::
          GlobalOrganizationOperationsConnection {
 public:
  ~GlobalOrganizationOperationsRestConnectionImpl() override = default;

  GlobalOrganizationOperationsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_global_organization_operations_v1_internal::
                          GlobalOrganizationOperationsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  Status DeleteGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          DeleteGlobalOrganizationOperationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  GetGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          GetGlobalOrganizationOperationsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Operation>
  ListGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          ListGlobalOrganizationOperationsRequest request) override;

 private:
  static std::unique_ptr<compute_global_organization_operations_v1::
                             GlobalOrganizationOperationsRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_global_organization_operations_v1::
                 GlobalOrganizationOperationsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_global_organization_operations_v1::
                 GlobalOrganizationOperationsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_global_organization_operations_v1::
          GlobalOrganizationOperationsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<
            compute_global_organization_operations_v1::
                GlobalOrganizationOperationsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_global_organization_operations_v1_internal::
                      GlobalOrganizationOperationsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_INTERNAL_GLOBAL_ORGANIZATION_OPERATIONS_REST_CONNECTION_IMPL_H
