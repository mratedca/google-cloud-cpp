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
// source: google/cloud/compute/licenses/v1/licenses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_INTERNAL_LICENSES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_INTERNAL_LICENSES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/licenses/v1/internal/licenses_rest_stub.h"
#include "google/cloud/compute/licenses/v1/internal/licenses_retry_traits.h"
#include "google/cloud/compute/licenses/v1/licenses_connection.h"
#include "google/cloud/compute/licenses/v1/licenses_connection_idempotency_policy.h"
#include "google/cloud/compute/licenses/v1/licenses_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_licenses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LicensesRestConnectionImpl
    : public compute_licenses_v1::LicensesConnection {
 public:
  ~LicensesRestConnectionImpl() override = default;

  LicensesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_licenses_v1_internal::LicensesRestStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteLicenses(
      google::cloud::cpp::compute::licenses::v1::DeleteLicensesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::License> GetLicenses(
      google::cloud::cpp::compute::licenses::v1::GetLicensesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertLicenses(
      google::cloud::cpp::compute::licenses::v1::InsertLicensesRequest const&
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::License> ListLicenses(
      google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::licenses::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  static std::unique_ptr<compute_licenses_v1::LicensesRetryPolicy> retry_policy(
      Options const& options) {
    return options.get<compute_licenses_v1::LicensesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<compute_licenses_v1::LicensesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_licenses_v1::LicensesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_licenses_v1::LicensesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options.get<compute_licenses_v1::LicensesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_licenses_v1_internal::LicensesRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_INTERNAL_LICENSES_REST_CONNECTION_IMPL_H
