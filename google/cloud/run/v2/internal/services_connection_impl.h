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
// source: google/cloud/run/v2/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_SERVICES_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_SERVICES_CONNECTION_IMPL_H

#include "google/cloud/run/v2/internal/services_retry_traits.h"
#include "google/cloud/run/v2/internal/services_stub.h"
#include "google/cloud/run/v2/services_connection.h"
#include "google/cloud/run/v2/services_connection_idempotency_policy.h"
#include "google/cloud/run/v2/services_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServicesConnectionImpl : public run_v2::ServicesConnection {
 public:
  ~ServicesConnectionImpl() override = default;

  ServicesConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<run_v2_internal::ServicesStub> stub, Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::run::v2::Service>> CreateService(
      google::cloud::run::v2::CreateServiceRequest const& request) override;

  StatusOr<google::cloud::run::v2::Service> GetService(
      google::cloud::run::v2::GetServiceRequest const& request) override;

  StreamRange<google::cloud::run::v2::Service> ListServices(
      google::cloud::run::v2::ListServicesRequest request) override;

  future<StatusOr<google::cloud::run::v2::Service>> UpdateService(
      google::cloud::run::v2::UpdateServiceRequest const& request) override;

  future<StatusOr<google::cloud::run::v2::Service>> DeleteService(
      google::cloud::run::v2::DeleteServiceRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<run_v2_internal::ServicesStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_SERVICES_CONNECTION_IMPL_H
