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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#include "google/cloud/beyondcorp/appgateways/v1/internal/app_gateways_connection_impl.h"
#include "google/cloud/beyondcorp/appgateways/v1/internal/app_gateways_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appgateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<beyondcorp_appgateways_v1::AppGatewaysServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<beyondcorp_appgateways_v1::AppGatewaysServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<beyondcorp_appgateways_v1::AppGatewaysServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    beyondcorp_appgateways_v1::AppGatewaysServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<beyondcorp_appgateways_v1::
               AppGatewaysServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<beyondcorp_appgateways_v1::AppGatewaysServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

AppGatewaysServiceConnectionImpl::AppGatewaysServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<beyondcorp_appgateways_v1_internal::AppGatewaysServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), AppGatewaysServiceConnection::options())) {}

StreamRange<google::cloud::beyondcorp::appgateways::v1::AppGateway>
AppGatewaysServiceConnectionImpl::ListAppGateways(
    google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAppGateways(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::beyondcorp::appgateways::v1::AppGateway>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           beyondcorp_appgateways_v1::AppGatewaysServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::beyondcorp::appgateways::v1::
              ListAppGatewaysRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::beyondcorp::appgateways::v1::
                       ListAppGatewaysRequest const& request) {
              return stub->ListAppGateways(context, request);
            },
            r, function_name);
      },
      [](google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysResponse
             r) {
        std::vector<google::cloud::beyondcorp::appgateways::v1::AppGateway>
            result(r.app_gateways().size());
        auto& messages = *r.mutable_app_gateways();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>
AppGatewaysServiceConnectionImpl::GetAppGateway(
    google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAppGateway(request),
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::appgateways::v1::
                 GetAppGatewayRequest const& request) {
        return stub_->GetAppGateway(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>>
AppGatewaysServiceConnectionImpl::CreateAppGateway(
    google::cloud::beyondcorp::appgateways::v1::CreateAppGatewayRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateAppGateway(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appgateways::v1::AppGateway>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::beyondcorp::appgateways::v1::
                         CreateAppGatewayRequest const& request) {
        return stub->AsyncCreateAppGateway(cq, std::move(context), options,
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
          google::cloud::beyondcorp::appgateways::v1::AppGateway>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<
    google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata>>
AppGatewaysServiceConnectionImpl::DeleteAppGateway(
    google::cloud::beyondcorp::appgateways::v1::DeleteAppGatewayRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteAppGateway(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::beyondcorp::appgateways::v1::
                         DeleteAppGatewayRequest const& request) {
        return stub->AsyncDeleteAppGateway(cq, std::move(context), options,
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
          google::cloud::beyondcorp::appgateways::v1::
              AppGatewayOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appgateways_v1_internal
}  // namespace cloud
}  // namespace google
