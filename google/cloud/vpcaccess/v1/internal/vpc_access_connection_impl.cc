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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#include "google/cloud/vpcaccess/v1/internal/vpc_access_connection_impl.h"
#include "google/cloud/vpcaccess/v1/internal/vpc_access_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace vpcaccess_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<vpcaccess_v1::VpcAccessServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<vpcaccess_v1::VpcAccessServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<vpcaccess_v1::VpcAccessServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<vpcaccess_v1::VpcAccessServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<vpcaccess_v1::VpcAccessServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<vpcaccess_v1::VpcAccessServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

VpcAccessServiceConnectionImpl::VpcAccessServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<vpcaccess_v1_internal::VpcAccessServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      VpcAccessServiceConnection::options())) {}

future<StatusOr<google::cloud::vpcaccess::v1::Connector>>
VpcAccessServiceConnectionImpl::CreateConnector(
    google::cloud::vpcaccess::v1::CreateConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateConnector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::vpcaccess::v1::Connector>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::vpcaccess::v1::CreateConnectorRequest const& request) {
        return stub->AsyncCreateConnector(cq, std::move(context), options,
                                          request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::vpcaccess::v1::Connector>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::vpcaccess::v1::Connector>
VpcAccessServiceConnectionImpl::GetConnector(
    google::cloud::vpcaccess::v1::GetConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConnector(request),
      [this](grpc::ClientContext& context,
             google::cloud::vpcaccess::v1::GetConnectorRequest const& request) {
        return stub_->GetConnector(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::vpcaccess::v1::Connector>
VpcAccessServiceConnectionImpl::ListConnectors(
    google::cloud::vpcaccess::v1::ListConnectorsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListConnectors(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::vpcaccess::v1::Connector>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<vpcaccess_v1::VpcAccessServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::vpcaccess::v1::ListConnectorsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::vpcaccess::v1::ListConnectorsRequest const&
                       request) {
              return stub->ListConnectors(context, request);
            },
            r, function_name);
      },
      [](google::cloud::vpcaccess::v1::ListConnectorsResponse r) {
        std::vector<google::cloud::vpcaccess::v1::Connector> result(
            r.connectors().size());
        auto& messages = *r.mutable_connectors();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>
VpcAccessServiceConnectionImpl::DeleteConnector(
    google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteConnector(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::vpcaccess::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request) {
        return stub->AsyncDeleteConnector(cq, std::move(context), options,
                                          request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::vpcaccess::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1_internal
}  // namespace cloud
}  // namespace google
