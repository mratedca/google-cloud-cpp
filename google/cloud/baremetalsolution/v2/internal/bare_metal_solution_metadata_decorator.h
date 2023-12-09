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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_INTERNAL_BARE_METAL_SOLUTION_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_INTERNAL_BARE_METAL_SOLUTION_METADATA_DECORATOR_H

#include "google/cloud/baremetalsolution/v2/internal/bare_metal_solution_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace baremetalsolution_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BareMetalSolutionMetadata : public BareMetalSolutionStub {
 public:
  ~BareMetalSolutionMetadata() override = default;
  BareMetalSolutionMetadata(
      std::shared_ptr<BareMetalSolutionStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::baremetalsolution::v2::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListInstancesRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::Instance> RenameInstance(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::RenameInstanceRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::StartInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::StopInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncEnableInteractiveSerialConsole(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::
          EnableInteractiveSerialConsoleRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDisableInteractiveSerialConsole(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::
          DisableInteractiveSerialConsoleRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDetachLun(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::DetachLunRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListSSHKeysResponse>
  ListSSHKeys(grpc::ClientContext& context,
              google::cloud::baremetalsolution::v2::ListSSHKeysRequest const&
                  request) override;

  StatusOr<google::cloud::baremetalsolution::v2::SSHKey> CreateSSHKey(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const& request)
      override;

  Status DeleteSSHKey(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListVolumesResponse>
  ListVolumes(grpc::ClientContext& context,
              google::cloud::baremetalsolution::v2::ListVolumesRequest const&
                  request) override;

  StatusOr<google::cloud::baremetalsolution::v2::Volume> GetVolume(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetVolumeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateVolume(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::Volume> RenameVolume(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::RenameVolumeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncEvictVolume(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResizeVolume(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListNetworksResponse>
  ListNetworks(grpc::ClientContext& context,
               google::cloud::baremetalsolution::v2::ListNetworksRequest const&
                   request) override;

  StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
  ListNetworkUsage(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::Network> GetNetwork(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetNetworkRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateNetwork(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
  CreateVolumeSnapshot(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreVolumeSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
          request) override;

  Status DeleteVolumeSnapshot(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
  GetVolumeSnapshot(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::ListVolumeSnapshotsResponse>
  ListVolumeSnapshots(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::Lun> GetLun(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetLunRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListLunsResponse> ListLuns(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListLunsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncEvictLun(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::EvictLunRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::NfsShare> GetNfsShare(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListNfsSharesResponse>
  ListNfsShares(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListNfsSharesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateNfsShare(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateNfsShare(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::CreateNfsShareRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::NfsShare> RenameNfsShare(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::RenameNfsShareRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNfsShare(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::ListProvisioningQuotasResponse>
  ListProvisioningQuotas(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest const&
          request) override;

  StatusOr<
      google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse>
  SubmitProvisioningConfig(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::
          SubmitProvisioningConfigRequest const& request) override;

  StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
  GetProvisioningConfig(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
  CreateProvisioningConfig(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::
          CreateProvisioningConfigRequest const& request) override;

  StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
  UpdateProvisioningConfig(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::
          UpdateProvisioningConfigRequest const& request) override;

  StatusOr<google::cloud::baremetalsolution::v2::Network> RenameNetwork(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::RenameNetworkRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListOSImagesResponse>
  ListOSImages(grpc::ClientContext& context,
               google::cloud::baremetalsolution::v2::ListOSImagesRequest const&
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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<BareMetalSolutionStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_V2_INTERNAL_BARE_METAL_SOLUTION_METADATA_DECORATOR_H
