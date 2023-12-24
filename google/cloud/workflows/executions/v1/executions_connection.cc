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
// source: google/cloud/workflows/executions/v1/executions.proto

#include "google/cloud/workflows/executions/v1/executions_connection.h"
#include "google/cloud/workflows/executions/v1/executions_options.h"
#include "google/cloud/workflows/executions/v1/internal/executions_connection_impl.h"
#include "google/cloud/workflows/executions/v1/internal/executions_option_defaults.h"
#include "google/cloud/workflows/executions/v1/internal/executions_stub_factory.h"
#include "google/cloud/workflows/executions/v1/internal/executions_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace workflows_executions_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExecutionsConnection::~ExecutionsConnection() = default;

StreamRange<google::cloud::workflows::executions::v1::Execution>
ExecutionsConnection::ListExecutions(
    google::cloud::workflows::executions::v1::
        ListExecutionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::workflows::executions::v1::Execution>>();
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsConnection::CreateExecution(
    google::cloud::workflows::executions::v1::CreateExecutionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsConnection::GetExecution(
    google::cloud::workflows::executions::v1::GetExecutionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsConnection::CancelExecution(
    google::cloud::workflows::executions::v1::CancelExecutionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ExecutionsConnection> MakeExecutionsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ExecutionsPolicyOptionList>(options, __func__);
  options = workflows_executions_v1_internal::ExecutionsDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = workflows_executions_v1_internal::CreateDefaultExecutionsStub(
      std::move(auth), options);
  return workflows_executions_v1_internal::MakeExecutionsTracingConnection(
      std::make_shared<
          workflows_executions_v1_internal::ExecutionsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_executions_v1
}  // namespace cloud
}  // namespace google
