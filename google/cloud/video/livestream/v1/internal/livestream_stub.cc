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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/livestream/v1/internal/livestream_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/video/livestream/v1/service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video_livestream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LivestreamServiceStub::~LivestreamServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::CreateChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::CreateChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateChannel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
DefaultLivestreamServiceStub::ListChannels(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListChannelsRequest const& request) {
  google::cloud::video::livestream::v1::ListChannelsResponse response;
  auto status = grpc_stub_->ListChannels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::livestream::v1::Channel>
DefaultLivestreamServiceStub::GetChannel(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  google::cloud::video::livestream::v1::Channel response;
  auto status = grpc_stub_->GetChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::DeleteChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::DeleteChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteChannel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::UpdateChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::UpdateChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateChannel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncStartChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::StartChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::StartChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartChannel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncStopChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::StopChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::StopChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopChannel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncCreateInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::CreateInputRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::CreateInputRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInput(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::video::livestream::v1::ListInputsResponse>
DefaultLivestreamServiceStub::ListInputs(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListInputsRequest const& request) {
  google::cloud::video::livestream::v1::ListInputsResponse response;
  auto status = grpc_stub_->ListInputs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::livestream::v1::Input>
DefaultLivestreamServiceStub::GetInput(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  google::cloud::video::livestream::v1::Input response;
  auto status = grpc_stub_->GetInput(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncDeleteInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::DeleteInputRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::DeleteInputRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteInput(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncUpdateInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::UpdateInputRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::UpdateInputRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInput(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::video::livestream::v1::Event>
DefaultLivestreamServiceStub::CreateEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  google::cloud::video::livestream::v1::Event response;
  auto status = grpc_stub_->CreateEvent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::livestream::v1::ListEventsResponse>
DefaultLivestreamServiceStub::ListEvents(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListEventsRequest const& request) {
  google::cloud::video::livestream::v1::ListEventsResponse response;
  auto status = grpc_stub_->ListEvents(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::livestream::v1::Event>
DefaultLivestreamServiceStub::GetEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  google::cloud::video::livestream::v1::Event response;
  auto status = grpc_stub_->GetEvent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultLivestreamServiceStub::DeleteEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteEvent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::CreateAssetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::CreateAssetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::CreateAssetRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAsset(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::DeleteAssetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::DeleteAssetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::DeleteAssetRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAsset(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::video::livestream::v1::Asset>
DefaultLivestreamServiceStub::GetAsset(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetAssetRequest const& request) {
  google::cloud::video::livestream::v1::Asset response;
  auto status = grpc_stub_->GetAsset(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::livestream::v1::ListAssetsResponse>
DefaultLivestreamServiceStub::ListAssets(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListAssetsRequest const& request) {
  google::cloud::video::livestream::v1::ListAssetsResponse response;
  auto status = grpc_stub_->ListAssets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::livestream::v1::Pool>
DefaultLivestreamServiceStub::GetPool(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetPoolRequest const& request) {
  google::cloud::video::livestream::v1::Pool response;
  auto status = grpc_stub_->GetPool(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncUpdatePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::video::livestream::v1::UpdatePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::video::livestream::v1::UpdatePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::video::livestream::v1::UpdatePoolRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdatePool(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultLivestreamServiceStub::AsyncGetOperation(
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

future<Status> DefaultLivestreamServiceStub::AsyncCancelOperation(
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
}  // namespace video_livestream_v1_internal
}  // namespace cloud
}  // namespace google
