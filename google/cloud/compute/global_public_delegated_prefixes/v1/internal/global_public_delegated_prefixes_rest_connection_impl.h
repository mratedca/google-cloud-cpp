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
// google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_GLOBAL_PUBLIC_DELEGATED_PREFIXES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_GLOBAL_PUBLIC_DELEGATED_PREFIXES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes_connection.h"
#include "google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes_connection_idempotency_policy.h"
#include "google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes_options.h"
#include "google/cloud/compute/global_public_delegated_prefixes/v1/internal/global_public_delegated_prefixes_rest_stub.h"
#include "google/cloud/compute/global_public_delegated_prefixes/v1/internal/global_public_delegated_prefixes_retry_traits.h"
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
namespace compute_global_public_delegated_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalPublicDelegatedPrefixesRestConnectionImpl
    : public compute_global_public_delegated_prefixes_v1::
          GlobalPublicDelegatedPrefixesConnection {
 public:
  ~GlobalPublicDelegatedPrefixesRestConnectionImpl() override = default;

  GlobalPublicDelegatedPrefixesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_global_public_delegated_prefixes_v1_internal::
                          GlobalPublicDelegatedPrefixesRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          DeleteGlobalPublicDelegatedPrefixesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          GetGlobalPublicDelegatedPrefixesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          InsertGlobalPublicDelegatedPrefixesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          ListGlobalPublicDelegatedPrefixesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          PatchGlobalPublicDelegatedPrefixesRequest const& request) override;

 private:
  static std::unique_ptr<compute_global_public_delegated_prefixes_v1::
                             GlobalPublicDelegatedPrefixesRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_global_public_delegated_prefixes_v1::
                 GlobalPublicDelegatedPrefixesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<compute_global_public_delegated_prefixes_v1::
                 GlobalPublicDelegatedPrefixesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_global_public_delegated_prefixes_v1::
          GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<
            compute_global_public_delegated_prefixes_v1::
                GlobalPublicDelegatedPrefixesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<compute_global_public_delegated_prefixes_v1::
                 GlobalPublicDelegatedPrefixesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_global_public_delegated_prefixes_v1_internal::
                      GlobalPublicDelegatedPrefixesRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_public_delegated_prefixes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_GLOBAL_PUBLIC_DELEGATED_PREFIXES_REST_CONNECTION_IMPL_H
