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

#include "google/cloud/vpcaccess/v1/internal/vpc_access_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/vpcaccess/v1/vpc_access.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vpcaccess_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VpcAccessServiceStub::~VpcAccessServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultVpcAccessServiceStub::AsyncCreateConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vpcaccess::v1::CreateConnectorRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vpcaccess::v1::CreateConnectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vpcaccess::v1::CreateConnectorRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateConnector(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::vpcaccess::v1::Connector>
DefaultVpcAccessServiceStub::GetConnector(
    grpc::ClientContext& context,
    google::cloud::vpcaccess::v1::GetConnectorRequest const& request) {
  google::cloud::vpcaccess::v1::Connector response;
  auto status = grpc_stub_->GetConnector(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vpcaccess::v1::ListConnectorsResponse>
DefaultVpcAccessServiceStub::ListConnectors(
    grpc::ClientContext& context,
    google::cloud::vpcaccess::v1::ListConnectorsRequest const& request) {
  google::cloud::vpcaccess::v1::ListConnectorsResponse response;
  auto status = grpc_stub_->ListConnectors(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultVpcAccessServiceStub::AsyncDeleteConnector(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vpcaccess::v1::DeleteConnectorRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteConnector(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultVpcAccessServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultVpcAccessServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1_internal
}  // namespace cloud
}  // namespace google
