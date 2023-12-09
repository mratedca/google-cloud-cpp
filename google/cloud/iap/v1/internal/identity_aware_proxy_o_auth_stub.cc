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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/v1/internal/identity_aware_proxy_o_auth_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/iap/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iap_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IdentityAwareProxyOAuthServiceStub::~IdentityAwareProxyOAuthServiceStub() =
    default;

StatusOr<google::cloud::iap::v1::ListBrandsResponse>
DefaultIdentityAwareProxyOAuthServiceStub::ListBrands(
    grpc::ClientContext& context,
    google::cloud::iap::v1::ListBrandsRequest const& request) {
  google::cloud::iap::v1::ListBrandsResponse response;
  auto status = grpc_stub_->ListBrands(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::iap::v1::Brand>
DefaultIdentityAwareProxyOAuthServiceStub::CreateBrand(
    grpc::ClientContext& context,
    google::cloud::iap::v1::CreateBrandRequest const& request) {
  google::cloud::iap::v1::Brand response;
  auto status = grpc_stub_->CreateBrand(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::iap::v1::Brand>
DefaultIdentityAwareProxyOAuthServiceStub::GetBrand(
    grpc::ClientContext& context,
    google::cloud::iap::v1::GetBrandRequest const& request) {
  google::cloud::iap::v1::Brand response;
  auto status = grpc_stub_->GetBrand(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
DefaultIdentityAwareProxyOAuthServiceStub::CreateIdentityAwareProxyClient(
    grpc::ClientContext& context,
    google::cloud::iap::v1::CreateIdentityAwareProxyClientRequest const&
        request) {
  google::cloud::iap::v1::IdentityAwareProxyClient response;
  auto status =
      grpc_stub_->CreateIdentityAwareProxyClient(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::iap::v1::ListIdentityAwareProxyClientsResponse>
DefaultIdentityAwareProxyOAuthServiceStub::ListIdentityAwareProxyClients(
    grpc::ClientContext& context,
    google::cloud::iap::v1::ListIdentityAwareProxyClientsRequest const&
        request) {
  google::cloud::iap::v1::ListIdentityAwareProxyClientsResponse response;
  auto status =
      grpc_stub_->ListIdentityAwareProxyClients(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
DefaultIdentityAwareProxyOAuthServiceStub::GetIdentityAwareProxyClient(
    grpc::ClientContext& context,
    google::cloud::iap::v1::GetIdentityAwareProxyClientRequest const& request) {
  google::cloud::iap::v1::IdentityAwareProxyClient response;
  auto status =
      grpc_stub_->GetIdentityAwareProxyClient(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
DefaultIdentityAwareProxyOAuthServiceStub::ResetIdentityAwareProxyClientSecret(
    grpc::ClientContext& context,
    google::cloud::iap::v1::ResetIdentityAwareProxyClientSecretRequest const&
        request) {
  google::cloud::iap::v1::IdentityAwareProxyClient response;
  auto status = grpc_stub_->ResetIdentityAwareProxyClientSecret(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status
DefaultIdentityAwareProxyOAuthServiceStub::DeleteIdentityAwareProxyClient(
    grpc::ClientContext& context,
    google::cloud::iap::v1::DeleteIdentityAwareProxyClientRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteIdentityAwareProxyClient(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1_internal
}  // namespace cloud
}  // namespace google
