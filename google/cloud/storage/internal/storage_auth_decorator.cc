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
// source: google/storage/v2/storage.proto

#include "google/cloud/storage/internal/storage_auth_decorator.h"
#include "google/cloud/internal/async_read_write_stream_auth.h"
#include "google/cloud/internal/async_streaming_read_rpc_auth.h"
#include "google/cloud/internal/async_streaming_write_rpc_auth.h"
#include "google/cloud/internal/streaming_write_rpc_impl.h"
#include <google/storage/v2/storage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageAuth::StorageAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<StorageStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

Status StorageAuth::DeleteBucket(
    grpc::ClientContext& context,
    google::storage::v2::DeleteBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBucket(context, request);
}

StatusOr<google::storage::v2::Bucket> StorageAuth::GetBucket(
    grpc::ClientContext& context,
    google::storage::v2::GetBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBucket(context, request);
}

StatusOr<google::storage::v2::Bucket> StorageAuth::CreateBucket(
    grpc::ClientContext& context,
    google::storage::v2::CreateBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBucket(context, request);
}

StatusOr<google::storage::v2::ListBucketsResponse> StorageAuth::ListBuckets(
    grpc::ClientContext& context,
    google::storage::v2::ListBucketsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBuckets(context, request);
}

StatusOr<google::storage::v2::Bucket> StorageAuth::LockBucketRetentionPolicy(
    grpc::ClientContext& context,
    google::storage::v2::LockBucketRetentionPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->LockBucketRetentionPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> StorageAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> StorageAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
StorageAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::storage::v2::Bucket> StorageAuth::UpdateBucket(
    grpc::ClientContext& context,
    google::storage::v2::UpdateBucketRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateBucket(context, request);
}

Status StorageAuth::DeleteNotificationConfig(
    grpc::ClientContext& context,
    google::storage::v2::DeleteNotificationConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteNotificationConfig(context, request);
}

StatusOr<google::storage::v2::NotificationConfig>
StorageAuth::GetNotificationConfig(
    grpc::ClientContext& context,
    google::storage::v2::GetNotificationConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetNotificationConfig(context, request);
}

StatusOr<google::storage::v2::NotificationConfig>
StorageAuth::CreateNotificationConfig(
    grpc::ClientContext& context,
    google::storage::v2::CreateNotificationConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateNotificationConfig(context, request);
}

StatusOr<google::storage::v2::ListNotificationConfigsResponse>
StorageAuth::ListNotificationConfigs(
    grpc::ClientContext& context,
    google::storage::v2::ListNotificationConfigsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListNotificationConfigs(context, request);
}

StatusOr<google::storage::v2::Object> StorageAuth::ComposeObject(
    grpc::ClientContext& context,
    google::storage::v2::ComposeObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ComposeObject(context, request);
}

Status StorageAuth::DeleteObject(
    grpc::ClientContext& context,
    google::storage::v2::DeleteObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteObject(context, request);
}

StatusOr<google::storage::v2::Object> StorageAuth::RestoreObject(
    grpc::ClientContext& context,
    google::storage::v2::RestoreObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RestoreObject(context, request);
}

StatusOr<google::storage::v2::CancelResumableWriteResponse>
StorageAuth::CancelResumableWrite(
    grpc::ClientContext& context,
    google::storage::v2::CancelResumableWriteRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelResumableWrite(context, request);
}

StatusOr<google::storage::v2::Object> StorageAuth::GetObject(
    grpc::ClientContext& context,
    google::storage::v2::GetObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetObject(context, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageAuth::ReadObject(std::shared_ptr<grpc::ClientContext> context,
                        Options const& options,
                        google::storage::v2::ReadObjectRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::storage::v2::ReadObjectResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return std::make_unique<ErrorStream>(std::move(status));
  return child_->ReadObject(std::move(context), options, request);
}

StatusOr<google::storage::v2::Object> StorageAuth::UpdateObject(
    grpc::ClientContext& context,
    google::storage::v2::UpdateObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateObject(context, request);
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageAuth::WriteObject(std::shared_ptr<grpc::ClientContext> context,
                         Options const& options) {
  using ErrorStream = ::google::cloud::internal::StreamingWriteRpcError<
      google::storage::v2::WriteObjectRequest,
      google::storage::v2::WriteObjectResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return std::make_unique<ErrorStream>(std::move(status));
  return child_->WriteObject(std::move(context), options);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::storage::v2::BidiWriteObjectRequest,
    google::storage::v2::BidiWriteObjectResponse>>
StorageAuth::AsyncBidiWriteObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadWriteRpcAuth<
      google::storage::v2::BidiWriteObjectRequest,
      google::storage::v2::BidiWriteObjectResponse>;

  auto& child = child_;
  auto call = [child, cq](std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncBidiWriteObject(cq, std::move(ctx));
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

StatusOr<google::storage::v2::ListObjectsResponse> StorageAuth::ListObjects(
    grpc::ClientContext& context,
    google::storage::v2::ListObjectsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListObjects(context, request);
}

StatusOr<google::storage::v2::RewriteResponse> StorageAuth::RewriteObject(
    grpc::ClientContext& context,
    google::storage::v2::RewriteObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RewriteObject(context, request);
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
StorageAuth::StartResumableWrite(
    grpc::ClientContext& context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartResumableWrite(context, request);
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
StorageAuth::QueryWriteStatus(
    grpc::ClientContext& context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->QueryWriteStatus(context, request);
}

StatusOr<google::storage::v2::ServiceAccount> StorageAuth::GetServiceAccount(
    grpc::ClientContext& context,
    google::storage::v2::GetServiceAccountRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServiceAccount(context, request);
}

StatusOr<google::storage::v2::CreateHmacKeyResponse> StorageAuth::CreateHmacKey(
    grpc::ClientContext& context,
    google::storage::v2::CreateHmacKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateHmacKey(context, request);
}

Status StorageAuth::DeleteHmacKey(
    grpc::ClientContext& context,
    google::storage::v2::DeleteHmacKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteHmacKey(context, request);
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageAuth::GetHmacKey(
    grpc::ClientContext& context,
    google::storage::v2::GetHmacKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetHmacKey(context, request);
}

StatusOr<google::storage::v2::ListHmacKeysResponse> StorageAuth::ListHmacKeys(
    grpc::ClientContext& context,
    google::storage::v2::ListHmacKeysRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListHmacKeys(context, request);
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageAuth::UpdateHmacKey(
    grpc::ClientContext& context,
    google::storage::v2::UpdateHmacKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateHmacKey(context, request);
}

future<StatusOr<google::storage::v2::Object>> StorageAuth::AsyncComposeObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::ComposeObjectRequest const& request) {
  using ReturnType = StatusOr<google::storage::v2::Object>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncComposeObject(cq, *std::move(context), request);
      });
}

future<Status> StorageAuth::AsyncDeleteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::DeleteObjectRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncDeleteObject(cq, *std::move(context), request);
      });
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageAuth::AsyncReadObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::ReadObjectRequest const& request) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadRpcAuth<
      google::storage::v2::ReadObjectResponse>;

  auto& child = child_;
  auto call = [child, cq, request](std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncReadObject(cq, std::move(ctx), request);
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageAuth::AsyncWriteObject(google::cloud::CompletionQueue const& cq,
                              std::shared_ptr<grpc::ClientContext> context) {
  using StreamAuth = google::cloud::internal::AsyncStreamingWriteRpcAuth<
      google::storage::v2::WriteObjectRequest,
      google::storage::v2::WriteObjectResponse>;

  auto& child = child_;
  auto call = [child, cq](std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncWriteObject(cq, std::move(ctx));
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

future<StatusOr<google::storage::v2::RewriteResponse>>
StorageAuth::AsyncRewriteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::RewriteObjectRequest const& request) {
  using ReturnType = StatusOr<google::storage::v2::RewriteResponse>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRewriteObject(cq, *std::move(context), request);
      });
}

future<StatusOr<google::storage::v2::StartResumableWriteResponse>>
StorageAuth::AsyncStartResumableWrite(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  using ReturnType = StatusOr<google::storage::v2::StartResumableWriteResponse>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStartResumableWrite(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::storage::v2::QueryWriteStatusResponse>>
StorageAuth::AsyncQueryWriteStatus(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  using ReturnType = StatusOr<google::storage::v2::QueryWriteStatusResponse>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncQueryWriteStatus(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
