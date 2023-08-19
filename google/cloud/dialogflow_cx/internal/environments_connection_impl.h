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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENVIRONMENTS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENVIRONMENTS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_cx/environments_connection.h"
#include "google/cloud/dialogflow_cx/environments_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_cx/environments_options.h"
#include "google/cloud/dialogflow_cx/internal/environments_retry_traits.h"
#include "google/cloud/dialogflow_cx/internal/environments_stub.h"
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
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EnvironmentsConnectionImpl
    : public dialogflow_cx::EnvironmentsConnection {
 public:
  ~EnvironmentsConnectionImpl() override = default;

  EnvironmentsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_cx_internal::EnvironmentsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::cx::v3::Environment> ListEnvironments(
      google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Environment> GetEnvironment(
      google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const& request)
      override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::Environment>>
  CreateEnvironment(
      google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
          request) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::Environment>>
  UpdateEnvironment(
      google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
          request) override;

  Status DeleteEnvironment(
      google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
          request) override;

  StreamRange<google::cloud::dialogflow::cx::v3::Environment>
  LookupEnvironmentHistory(
      google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryRequest
          request) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::RunContinuousTestResponse>>
  RunContinuousTest(
      google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
          request) override;

  StreamRange<google::cloud::dialogflow::cx::v3::ContinuousTestResult>
  ListContinuousTestResults(
      google::cloud::dialogflow::cx::v3::ListContinuousTestResultsRequest
          request) override;

  future<StatusOr<google::cloud::dialogflow::cx::v3::DeployFlowResponse>>
  DeployFlow(google::cloud::dialogflow::cx::v3::DeployFlowRequest const&
                 request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_cx_internal::EnvironmentsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENVIRONMENTS_CONNECTION_IMPL_H
