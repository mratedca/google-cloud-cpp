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
// source: google/cloud/workflows/v1/workflows.proto

#include "google/cloud/workflows/v1/workflows_connection.h"
#include "google/cloud/workflows/v1/internal/workflows_connection_impl.h"
#include "google/cloud/workflows/v1/internal/workflows_option_defaults.h"
#include "google/cloud/workflows/v1/internal/workflows_stub_factory.h"
#include "google/cloud/workflows/v1/internal/workflows_tracing_connection.h"
#include "google/cloud/workflows/v1/workflows_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace workflows_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowsConnection::~WorkflowsConnection() = default;

StreamRange<google::cloud::workflows::v1::Workflow>
WorkflowsConnection::ListWorkflows(
    google::cloud::workflows::v1::
        ListWorkflowsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::workflows::v1::Workflow>>();
}

StatusOr<google::cloud::workflows::v1::Workflow>
WorkflowsConnection::GetWorkflow(
    google::cloud::workflows::v1::GetWorkflowRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsConnection::CreateWorkflow(
    google::cloud::workflows::v1::CreateWorkflowRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::workflows::v1::Workflow>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>
WorkflowsConnection::DeleteWorkflow(
    google::cloud::workflows::v1::DeleteWorkflowRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::workflows::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsConnection::UpdateWorkflow(
    google::cloud::workflows::v1::UpdateWorkflowRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::workflows::v1::Workflow>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<WorkflowsConnection> MakeWorkflowsConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 WorkflowsPolicyOptionList>(options, __func__);
  options = workflows_v1_internal::WorkflowsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = workflows_v1_internal::CreateDefaultWorkflowsStub(std::move(auth),
                                                                options);
  return workflows_v1_internal::MakeWorkflowsTracingConnection(
      std::make_shared<workflows_v1_internal::WorkflowsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_v1
}  // namespace cloud
}  // namespace google
