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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_INTERNAL_NET_APP_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_INTERNAL_NET_APP_LOGGING_DECORATOR_H

#include "google/cloud/netapp/v1/internal/net_app_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace netapp_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetAppLogging : public NetAppStub {
 public:
  ~NetAppLogging() override = default;
  NetAppLogging(std::shared_ptr<NetAppStub> child,
                TracingOptions tracing_options,
                std::set<std::string> const& components);

  StatusOr<google::cloud::netapp::v1::ListStoragePoolsResponse>
  ListStoragePools(grpc::ClientContext& context,
                   google::cloud::netapp::v1::ListStoragePoolsRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateStoragePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::CreateStoragePoolRequest const& request)
      override;

  StatusOr<google::cloud::netapp::v1::StoragePool> GetStoragePool(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::GetStoragePoolRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateStoragePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::UpdateStoragePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteStoragePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::DeleteStoragePoolRequest const& request)
      override;

  StatusOr<google::cloud::netapp::v1::ListVolumesResponse> ListVolumes(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::ListVolumesRequest const& request) override;

  StatusOr<google::cloud::netapp::v1::Volume> GetVolume(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::GetVolumeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateVolume(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::CreateVolumeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateVolume(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::UpdateVolumeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteVolume(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::DeleteVolumeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRevertVolume(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::RevertVolumeRequest const& request) override;

  StatusOr<google::cloud::netapp::v1::ListSnapshotsResponse> ListSnapshots(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::ListSnapshotsRequest const& request) override;

  StatusOr<google::cloud::netapp::v1::Snapshot> GetSnapshot(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::GetSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::CreateSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::DeleteSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::UpdateSnapshotRequest const& request) override;

  StatusOr<google::cloud::netapp::v1::ListActiveDirectoriesResponse>
  ListActiveDirectories(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::ListActiveDirectoriesRequest const& request)
      override;

  StatusOr<google::cloud::netapp::v1::ActiveDirectory> GetActiveDirectory(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::GetActiveDirectoryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateActiveDirectory(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateActiveDirectory(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteActiveDirectory(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request)
      override;

  StatusOr<google::cloud::netapp::v1::ListKmsConfigsResponse> ListKmsConfigs(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::ListKmsConfigsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateKmsConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::CreateKmsConfigRequest const& request)
      override;

  StatusOr<google::cloud::netapp::v1::KmsConfig> GetKmsConfig(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::GetKmsConfigRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateKmsConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::UpdateKmsConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncEncryptVolumes(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::EncryptVolumesRequest const& request) override;

  StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse> VerifyKmsConfig(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::VerifyKmsConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteKmsConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::DeleteKmsConfigRequest const& request)
      override;

  StatusOr<google::cloud::netapp::v1::ListReplicationsResponse>
  ListReplications(grpc::ClientContext& context,
                   google::cloud::netapp::v1::ListReplicationsRequest const&
                       request) override;

  StatusOr<google::cloud::netapp::v1::Replication> GetReplication(
      grpc::ClientContext& context,
      google::cloud::netapp::v1::GetReplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateReplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::CreateReplicationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteReplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::DeleteReplicationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateReplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::UpdateReplicationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopReplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::StopReplicationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResumeReplication(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::ResumeReplicationRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncReverseReplicationDirection(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<NetAppStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // NetAppLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_INTERNAL_NET_APP_LOGGING_DECORATOR_H
