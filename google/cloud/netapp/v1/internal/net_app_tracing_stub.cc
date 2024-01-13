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

#include "google/cloud/netapp/v1/internal/net_app_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace netapp_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NetAppTracingStub::NetAppTracingStub(std::shared_ptr<NetAppStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::netapp::v1::ListStoragePoolsResponse>
NetAppTracingStub::ListStoragePools(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListStoragePoolsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "ListStoragePools");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListStoragePools(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateStoragePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "CreateStoragePool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateStoragePool(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::StoragePool>
NetAppTracingStub::GetStoragePool(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetStoragePoolRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "GetStoragePool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetStoragePool(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateStoragePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "UpdateStoragePool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateStoragePool(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteStoragePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "DeleteStoragePool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteStoragePool(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::ListVolumesResponse>
NetAppTracingStub::ListVolumes(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListVolumesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "ListVolumes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListVolumes(context, request));
}

StatusOr<google::cloud::netapp::v1::Volume> NetAppTracingStub::GetVolume(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetVolumeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "GetVolume");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetVolume(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateVolumeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "CreateVolume");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateVolume(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateVolumeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "UpdateVolume");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateVolume(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteVolumeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "DeleteVolume");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteVolume(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncRevertVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::RevertVolumeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "RevertVolume");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRevertVolume(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::ListSnapshotsResponse>
NetAppTracingStub::ListSnapshots(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListSnapshotsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "ListSnapshots");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSnapshots(context, request));
}

StatusOr<google::cloud::netapp::v1::Snapshot> NetAppTracingStub::GetSnapshot(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "GetSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSnapshot(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "CreateSnapshot");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateSnapshot(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "DeleteSnapshot");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteSnapshot(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateSnapshotRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "UpdateSnapshot");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateSnapshot(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::ListActiveDirectoriesResponse>
NetAppTracingStub::ListActiveDirectories(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListActiveDirectoriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "ListActiveDirectories");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListActiveDirectories(context, request));
}

StatusOr<google::cloud::netapp::v1::ActiveDirectory>
NetAppTracingStub::GetActiveDirectory(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetActiveDirectoryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "GetActiveDirectory");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetActiveDirectory(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "CreateActiveDirectory");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateActiveDirectory(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "UpdateActiveDirectory");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateActiveDirectory(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "DeleteActiveDirectory");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteActiveDirectory(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::ListKmsConfigsResponse>
NetAppTracingStub::ListKmsConfigs(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListKmsConfigsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "ListKmsConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListKmsConfigs(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateKmsConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "CreateKmsConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateKmsConfig(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::KmsConfig> NetAppTracingStub::GetKmsConfig(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetKmsConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "GetKmsConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetKmsConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateKmsConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "UpdateKmsConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateKmsConfig(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncEncryptVolumes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::EncryptVolumesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "EncryptVolumes");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncEncryptVolumes(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse>
NetAppTracingStub::VerifyKmsConfig(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::VerifyKmsConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "VerifyKmsConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->VerifyKmsConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteKmsConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "DeleteKmsConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteKmsConfig(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::ListReplicationsResponse>
NetAppTracingStub::ListReplications(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListReplicationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "ListReplications");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListReplications(context, request));
}

StatusOr<google::cloud::netapp::v1::Replication>
NetAppTracingStub::GetReplication(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetReplicationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "GetReplication");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetReplication(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateReplicationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "CreateReplication");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateReplication(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteReplicationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "DeleteReplication");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteReplication(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateReplicationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "UpdateReplication");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateReplication(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncStopReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::StopReplicationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "StopReplication");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStopReplication(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncResumeReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::ResumeReplicationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "ResumeReplication");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncResumeReplication(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncReverseReplicationDirection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "ReverseReplicationDirection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncReverseReplicationDirection(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateBackupVaultRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "CreateBackupVault");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateBackupVault(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::BackupVault>
NetAppTracingStub::GetBackupVault(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetBackupVaultRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "GetBackupVault");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBackupVault(context, request));
}

StatusOr<google::cloud::netapp::v1::ListBackupVaultsResponse>
NetAppTracingStub::ListBackupVaults(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListBackupVaultsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "ListBackupVaults");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackupVaults(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateBackupVaultRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "UpdateBackupVault");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateBackupVault(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteBackupVaultRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "DeleteBackupVault");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteBackupVault(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateBackupRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "CreateBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateBackup(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::Backup> NetAppTracingStub::GetBackup(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetBackupRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "GetBackup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetBackup(context, request));
}

StatusOr<google::cloud::netapp::v1::ListBackupsResponse>
NetAppTracingStub::ListBackups(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListBackupsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "ListBackups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackups(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteBackupRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "DeleteBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteBackup(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateBackupRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp", "UpdateBackup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateBackup(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncCreateBackupPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateBackupPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "CreateBackupPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateBackupPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::netapp::v1::BackupPolicy>
NetAppTracingStub::GetBackupPolicy(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetBackupPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "GetBackupPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetBackupPolicy(context, request));
}

StatusOr<google::cloud::netapp::v1::ListBackupPoliciesResponse>
NetAppTracingStub::ListBackupPolicies(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListBackupPoliciesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "ListBackupPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListBackupPolicies(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncUpdateBackupPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateBackupPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "UpdateBackupPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateBackupPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncDeleteBackupPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteBackupPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.netapp.v1.NetApp",
                                     "DeleteBackupPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteBackupPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetAppTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> NetAppTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<NetAppStub> MakeNetAppTracingStub(
    std::shared_ptr<NetAppStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<NetAppTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1_internal
}  // namespace cloud
}  // namespace google
