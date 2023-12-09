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

#include "google/cloud/apigateway/v1/internal/api_gateway_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/apigateway/v1/apigateway_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace apigateway_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApiGatewayServiceMetadata::ApiGatewayServiceMetadata(
    std::shared_ptr<ApiGatewayServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::apigateway::v1::ListGatewaysResponse>
ApiGatewayServiceMetadata::ListGateways(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListGatewaysRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListGateways(context, request);
}

StatusOr<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceMetadata::GetGateway(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetGatewayRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGateway(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncCreateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::CreateGatewayRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateGateway(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncUpdateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::UpdateGatewayRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("gateway.name=",
                           internal::UrlEncode(request.gateway().name())));
  return child_->AsyncUpdateGateway(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncDeleteGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::DeleteGatewayRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteGateway(cq, std::move(context), options, request);
}

StatusOr<google::cloud::apigateway::v1::ListApisResponse>
ApiGatewayServiceMetadata::ListApis(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListApisRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListApis(context, request);
}

StatusOr<google::cloud::apigateway::v1::Api> ApiGatewayServiceMetadata::GetApi(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetApiRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetApi(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncCreateApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::CreateApiRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateApi(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncUpdateApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::UpdateApiRequest const& request) {
  SetMetadata(
      *context, options,
      absl::StrCat("api.name=", internal::UrlEncode(request.api().name())));
  return child_->AsyncUpdateApi(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncDeleteApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::DeleteApiRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteApi(cq, std::move(context), options, request);
}

StatusOr<google::cloud::apigateway::v1::ListApiConfigsResponse>
ApiGatewayServiceMetadata::ListApiConfigs(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListApiConfigsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListApiConfigs(context, request);
}

StatusOr<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceMetadata::GetApiConfig(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetApiConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncCreateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::CreateApiConfigRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateApiConfig(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncUpdateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::UpdateApiConfigRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("api_config.name=",
                           internal::UrlEncode(request.api_config().name())));
  return child_->AsyncUpdateApiConfig(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncDeleteApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::DeleteApiConfigRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteApiConfig(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> ApiGatewayServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void ApiGatewayServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ApiGatewayServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_v1_internal
}  // namespace cloud
}  // namespace google
