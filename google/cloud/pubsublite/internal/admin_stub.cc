// Copyright 2021 Google LLC
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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/internal/admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/pubsublite/v1/admin.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdminServiceStub::~AdminServiceStub() = default;

StatusOr<google::cloud::pubsublite::v1::Topic>
DefaultAdminServiceStub::CreateTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateTopicRequest const& request) {
  google::cloud::pubsublite::v1::Topic response;
  auto status = grpc_stub_->CreateTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Topic>
DefaultAdminServiceStub::GetTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetTopicRequest const& request) {
  google::cloud::pubsublite::v1::Topic response;
  auto status = grpc_stub_->GetTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
DefaultAdminServiceStub::GetTopicPartitions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  google::cloud::pubsublite::v1::TopicPartitions response;
  auto status = grpc_stub_->GetTopicPartitions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::ListTopicsResponse>
DefaultAdminServiceStub::ListTopics(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListTopicsRequest const& request) {
  google::cloud::pubsublite::v1::ListTopicsResponse response;
  auto status = grpc_stub_->ListTopics(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Topic>
DefaultAdminServiceStub::UpdateTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateTopicRequest const& request) {
  google::cloud::pubsublite::v1::Topic response;
  auto status = grpc_stub_->UpdateTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAdminServiceStub::DeleteTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteTopicRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::pubsublite::v1::ListTopicSubscriptionsResponse>
DefaultAdminServiceStub::ListTopicSubscriptions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest const&
        request) {
  google::cloud::pubsublite::v1::ListTopicSubscriptionsResponse response;
  auto status =
      grpc_stub_->ListTopicSubscriptions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
DefaultAdminServiceStub::CreateSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request) {
  google::cloud::pubsublite::v1::Subscription response;
  auto status = grpc_stub_->CreateSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
DefaultAdminServiceStub::GetSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetSubscriptionRequest const& request) {
  google::cloud::pubsublite::v1::Subscription response;
  auto status = grpc_stub_->GetSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::ListSubscriptionsResponse>
DefaultAdminServiceStub::ListSubscriptions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListSubscriptionsRequest const& request) {
  google::cloud::pubsublite::v1::ListSubscriptionsResponse response;
  auto status = grpc_stub_->ListSubscriptions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
DefaultAdminServiceStub::UpdateSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request) {
  google::cloud::pubsublite::v1::Subscription response;
  auto status = grpc_stub_->UpdateSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAdminServiceStub::DeleteSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultAdminServiceStub::AsyncSeekSubscription(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::pubsublite::v1::SeekSubscriptionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSeekSubscription(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
DefaultAdminServiceStub::CreateReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateReservationRequest const& request) {
  google::cloud::pubsublite::v1::Reservation response;
  auto status = grpc_stub_->CreateReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
DefaultAdminServiceStub::GetReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetReservationRequest const& request) {
  google::cloud::pubsublite::v1::Reservation response;
  auto status = grpc_stub_->GetReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::ListReservationsResponse>
DefaultAdminServiceStub::ListReservations(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListReservationsRequest const& request) {
  google::cloud::pubsublite::v1::ListReservationsResponse response;
  auto status = grpc_stub_->ListReservations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
DefaultAdminServiceStub::UpdateReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateReservationRequest const& request) {
  google::cloud::pubsublite::v1::Reservation response;
  auto status = grpc_stub_->UpdateReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAdminServiceStub::DeleteReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteReservationRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteReservation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::pubsublite::v1::ListReservationTopicsResponse>
DefaultAdminServiceStub::ListReservationTopics(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListReservationTopicsRequest const&
        request) {
  google::cloud::pubsublite::v1::ListReservationTopicsResponse response;
  auto status = grpc_stub_->ListReservationTopics(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::cloud::pubsublite::v1::TopicPartitions>>
DefaultAdminServiceStub::AsyncGetTopicPartitions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::pubsublite::v1::GetTopicPartitionsRequest,
      google::cloud::pubsublite::v1::TopicPartitions>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::pubsublite::v1::GetTopicPartitionsRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncGetTopicPartitions(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAdminServiceStub::AsyncGetOperation(
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

future<Status> DefaultAdminServiceStub::AsyncCancelOperation(
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
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
