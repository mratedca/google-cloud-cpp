// Copyright 2023 Google LLC
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
// source: google/cloud/netapp/v1/cloud_netapp_service.proto

#include "google/cloud/netapp/v1/internal/net_app_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/netapp/v1/cloud_netapp_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace netapp_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetAppStub::~NetAppStub() = default;

StatusOr<google::cloud::netapp::v1::ListStoragePoolsResponse>
DefaultNetAppStub::ListStoragePools(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListStoragePoolsRequest const& request) {
  google::cloud::netapp::v1::ListStoragePoolsResponse response;
  auto status = grpc_stub_->ListStoragePools(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncCreateStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::CreateStoragePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::CreateStoragePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::CreateStoragePoolRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateStoragePool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::netapp::v1::StoragePool>
DefaultNetAppStub::GetStoragePool(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetStoragePoolRequest const& request) {
  google::cloud::netapp::v1::StoragePool response;
  auto status = grpc_stub_->GetStoragePool(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncUpdateStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::UpdateStoragePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::UpdateStoragePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::UpdateStoragePoolRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateStoragePool(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncDeleteStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::DeleteStoragePoolRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::DeleteStoragePoolRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::DeleteStoragePoolRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteStoragePool(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::netapp::v1::ListVolumesResponse>
DefaultNetAppStub::ListVolumes(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListVolumesRequest const& request) {
  google::cloud::netapp::v1::ListVolumesResponse response;
  auto status = grpc_stub_->ListVolumes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::netapp::v1::Volume> DefaultNetAppStub::GetVolume(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetVolumeRequest const& request) {
  google::cloud::netapp::v1::Volume response;
  auto status = grpc_stub_->GetVolume(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncCreateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::CreateVolumeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::CreateVolumeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::CreateVolumeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateVolume(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::UpdateVolumeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::UpdateVolumeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::UpdateVolumeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateVolume(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncDeleteVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::DeleteVolumeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::DeleteVolumeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::DeleteVolumeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteVolume(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncRevertVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::RevertVolumeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::RevertVolumeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::RevertVolumeRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRevertVolume(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::netapp::v1::ListSnapshotsResponse>
DefaultNetAppStub::ListSnapshots(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListSnapshotsRequest const& request) {
  google::cloud::netapp::v1::ListSnapshotsResponse response;
  auto status = grpc_stub_->ListSnapshots(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::netapp::v1::Snapshot> DefaultNetAppStub::GetSnapshot(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetSnapshotRequest const& request) {
  google::cloud::netapp::v1::Snapshot response;
  auto status = grpc_stub_->GetSnapshot(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncCreateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::CreateSnapshotRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::CreateSnapshotRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::CreateSnapshotRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateSnapshot(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncDeleteSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::DeleteSnapshotRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::DeleteSnapshotRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::DeleteSnapshotRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSnapshot(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncUpdateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::UpdateSnapshotRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::UpdateSnapshotRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::UpdateSnapshotRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateSnapshot(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::netapp::v1::ListActiveDirectoriesResponse>
DefaultNetAppStub::ListActiveDirectories(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListActiveDirectoriesRequest const& request) {
  google::cloud::netapp::v1::ListActiveDirectoriesResponse response;
  auto status = grpc_stub_->ListActiveDirectories(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::netapp::v1::ActiveDirectory>
DefaultNetAppStub::GetActiveDirectory(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetActiveDirectoryRequest const& request) {
  google::cloud::netapp::v1::ActiveDirectory response;
  auto status = grpc_stub_->GetActiveDirectory(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncCreateActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::CreateActiveDirectoryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::CreateActiveDirectoryRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateActiveDirectory(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncUpdateActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::UpdateActiveDirectoryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::UpdateActiveDirectoryRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateActiveDirectory(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncDeleteActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::DeleteActiveDirectoryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::DeleteActiveDirectoryRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteActiveDirectory(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::netapp::v1::ListKmsConfigsResponse>
DefaultNetAppStub::ListKmsConfigs(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListKmsConfigsRequest const& request) {
  google::cloud::netapp::v1::ListKmsConfigsResponse response;
  auto status = grpc_stub_->ListKmsConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncCreateKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::CreateKmsConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::CreateKmsConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::CreateKmsConfigRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateKmsConfig(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::netapp::v1::KmsConfig> DefaultNetAppStub::GetKmsConfig(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetKmsConfigRequest const& request) {
  google::cloud::netapp::v1::KmsConfig response;
  auto status = grpc_stub_->GetKmsConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncUpdateKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::UpdateKmsConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::UpdateKmsConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::UpdateKmsConfigRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateKmsConfig(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncEncryptVolumes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::EncryptVolumesRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::EncryptVolumesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::EncryptVolumesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEncryptVolumes(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse>
DefaultNetAppStub::VerifyKmsConfig(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::VerifyKmsConfigRequest const& request) {
  google::cloud::netapp::v1::VerifyKmsConfigResponse response;
  auto status = grpc_stub_->VerifyKmsConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncDeleteKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::DeleteKmsConfigRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::DeleteKmsConfigRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::DeleteKmsConfigRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteKmsConfig(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::netapp::v1::ListReplicationsResponse>
DefaultNetAppStub::ListReplications(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListReplicationsRequest const& request) {
  google::cloud::netapp::v1::ListReplicationsResponse response;
  auto status = grpc_stub_->ListReplications(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::netapp::v1::Replication>
DefaultNetAppStub::GetReplication(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetReplicationRequest const& request) {
  google::cloud::netapp::v1::Replication response;
  auto status = grpc_stub_->GetReplication(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncCreateReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::CreateReplicationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::CreateReplicationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::CreateReplicationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateReplication(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncDeleteReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::DeleteReplicationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::DeleteReplicationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::DeleteReplicationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteReplication(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncUpdateReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::UpdateReplicationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::UpdateReplicationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::UpdateReplicationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateReplication(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncStopReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::StopReplicationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::StopReplicationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::StopReplicationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopReplication(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncResumeReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::ResumeReplicationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::ResumeReplicationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::netapp::v1::ResumeReplicationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResumeReplication(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncReverseReplicationDirection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::netapp::v1::ReverseReplicationDirectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReverseReplicationDirection(context, request,
                                                            cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultNetAppStub::AsyncGetOperation(
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

future<Status> DefaultNetAppStub::AsyncCancelOperation(
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
}  // namespace netapp_v1_internal
}  // namespace cloud
}  // namespace google
