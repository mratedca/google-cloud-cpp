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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#include "google/cloud/apigateway/v1/internal/api_gateway_connection_impl.h"
#include "google/cloud/apigateway/v1/internal/api_gateway_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigateway_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<apigateway_v1::ApiGatewayServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<apigateway_v1::ApiGatewayServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<apigateway_v1::ApiGatewayServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<apigateway_v1::ApiGatewayServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<apigateway_v1::ApiGatewayServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<apigateway_v1::ApiGatewayServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

ApiGatewayServiceConnectionImpl::ApiGatewayServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<apigateway_v1_internal::ApiGatewayServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ApiGatewayServiceConnection::options())) {}

StreamRange<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceConnectionImpl::ListGateways(
    google::cloud::apigateway::v1::ListGatewaysRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListGateways(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigateway::v1::Gateway>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigateway_v1::ApiGatewayServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigateway::v1::ListGatewaysRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::apigateway::v1::ListGatewaysRequest const&
                       request) {
              return stub->ListGateways(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigateway::v1::ListGatewaysResponse r) {
        std::vector<google::cloud::apigateway::v1::Gateway> result(
            r.gateways().size());
        auto& messages = *r.mutable_gateways();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceConnectionImpl::GetGateway(
    google::cloud::apigateway::v1::GetGatewayRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetGateway(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigateway::v1::GetGatewayRequest const& request) {
        return stub_->GetGateway(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::apigateway::v1::Gateway>>
ApiGatewayServiceConnectionImpl::CreateGateway(
    google::cloud::apigateway::v1::CreateGatewayRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::Gateway>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::CreateGatewayRequest const& request) {
        return stub->AsyncCreateGateway(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::apigateway::v1::Gateway>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateGateway(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::apigateway::v1::Gateway>>
ApiGatewayServiceConnectionImpl::UpdateGateway(
    google::cloud::apigateway::v1::UpdateGatewayRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::Gateway>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::UpdateGatewayRequest const& request) {
        return stub->AsyncUpdateGateway(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::apigateway::v1::Gateway>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateGateway(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnectionImpl::DeleteGateway(
    google::cloud::apigateway::v1::DeleteGatewayRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::DeleteGatewayRequest const& request) {
        return stub->AsyncDeleteGateway(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::apigateway::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteGateway(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::apigateway::v1::Api>
ApiGatewayServiceConnectionImpl::ListApis(
    google::cloud::apigateway::v1::ListApisRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListApis(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigateway::v1::Api>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigateway_v1::ApiGatewayServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigateway::v1::ListApisRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::apigateway::v1::ListApisRequest const& request) {
              return stub->ListApis(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigateway::v1::ListApisResponse r) {
        std::vector<google::cloud::apigateway::v1::Api> result(r.apis().size());
        auto& messages = *r.mutable_apis();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigateway::v1::Api>
ApiGatewayServiceConnectionImpl::GetApi(
    google::cloud::apigateway::v1::GetApiRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetApi(request),
      [this](grpc::ClientContext& context,
             google::cloud::apigateway::v1::GetApiRequest const& request) {
        return stub_->GetApi(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::apigateway::v1::Api>>
ApiGatewayServiceConnectionImpl::CreateApi(
    google::cloud::apigateway::v1::CreateApiRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::Api>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::CreateApiRequest const& request) {
        return stub->AsyncCreateApi(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::apigateway::v1::Api>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateApi(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::apigateway::v1::Api>>
ApiGatewayServiceConnectionImpl::UpdateApi(
    google::cloud::apigateway::v1::UpdateApiRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::Api>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::UpdateApiRequest const& request) {
        return stub->AsyncUpdateApi(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::apigateway::v1::Api>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateApi(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnectionImpl::DeleteApi(
    google::cloud::apigateway::v1::DeleteApiRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::DeleteApiRequest const& request) {
        return stub->AsyncDeleteApi(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::apigateway::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteApi(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceConnectionImpl::ListApiConfigs(
    google::cloud::apigateway::v1::ListApiConfigsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListApiConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigateway::v1::ApiConfig>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigateway_v1::ApiGatewayServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigateway::v1::ListApiConfigsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::apigateway::v1::ListApiConfigsRequest const&
                       request) {
              return stub->ListApiConfigs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigateway::v1::ListApiConfigsResponse r) {
        std::vector<google::cloud::apigateway::v1::ApiConfig> result(
            r.api_configs().size());
        auto& messages = *r.mutable_api_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceConnectionImpl::GetApiConfig(
    google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetApiConfig(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
        return stub_->GetApiConfig(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
ApiGatewayServiceConnectionImpl::CreateApiConfig(
    google::cloud::apigateway::v1::CreateApiConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::ApiConfig>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::CreateApiConfigRequest const&
              request) {
        return stub->AsyncCreateApiConfig(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::apigateway::v1::ApiConfig>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateApiConfig(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::apigateway::v1::ApiConfig>>
ApiGatewayServiceConnectionImpl::UpdateApiConfig(
    google::cloud::apigateway::v1::UpdateApiConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::ApiConfig>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::UpdateApiConfigRequest const&
              request) {
        return stub->AsyncUpdateApiConfig(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::apigateway::v1::ApiConfig>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateApiConfig(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::apigateway::v1::OperationMetadata>>
ApiGatewayServiceConnectionImpl::DeleteApiConfig(
    google::cloud::apigateway::v1::DeleteApiConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::apigateway::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::apigateway::v1::DeleteApiConfigRequest const&
              request) {
        return stub->AsyncDeleteApiConfig(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::apigateway::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteApiConfig(request),
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_v1_internal
}  // namespace cloud
}  // namespace google
