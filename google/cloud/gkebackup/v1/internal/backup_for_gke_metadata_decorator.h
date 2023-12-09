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
// source: google/cloud/gkebackup/v1/gkebackup.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_METADATA_DECORATOR_H

#include "google/cloud/gkebackup/v1/internal/backup_for_gke_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace gkebackup_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BackupForGKEMetadata : public BackupForGKEStub {
 public:
  ~BackupForGKEMetadata() override = default;
  BackupForGKEMetadata(std::shared_ptr<BackupForGKEStub> child,
                       std::multimap<std::string, std::string> fixed_metadata,
                       std::string api_client_header = "");

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackupPlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListBackupPlansResponse>
  ListBackupPlans(grpc::ClientContext& context,
                  google::cloud::gkebackup::v1::ListBackupPlansRequest const&
                      request) override;

  StatusOr<google::cloud::gkebackup::v1::BackupPlan> GetBackupPlan(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::GetBackupPlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackupPlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackupPlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::CreateBackupRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::ListBackupsRequest const& request) override;

  StatusOr<google::cloud::gkebackup::v1::Backup> GetBackup(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::UpdateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::DeleteBackupRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListVolumeBackupsResponse>
  ListVolumeBackups(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::ListVolumeBackupsRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::VolumeBackup> GetVolumeBackup(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::GetVolumeBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRestorePlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListRestorePlansResponse>
  ListRestorePlans(grpc::ClientContext& context,
                   google::cloud::gkebackup::v1::ListRestorePlansRequest const&
                       request) override;

  StatusOr<google::cloud::gkebackup::v1::RestorePlan> GetRestorePlan(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::GetRestorePlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRestorePlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRestorePlan(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::CreateRestoreRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListRestoresResponse> ListRestores(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::ListRestoresRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::Restore> GetRestore(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::GetRestoreRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::UpdateRestoreRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRestore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::gkebackup::v1::DeleteRestoreRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::ListVolumeRestoresResponse>
  ListVolumeRestores(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::ListVolumeRestoresRequest const& request)
      override;

  StatusOr<google::cloud::gkebackup::v1::VolumeRestore> GetVolumeRestore(
      grpc::ClientContext& context,
      google::cloud::gkebackup::v1::GetVolumeRestoreRequest const& request)
      override;

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

  std::shared_ptr<BackupForGKEStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkebackup_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEBACKUP_V1_INTERNAL_BACKUP_FOR_GKE_METADATA_DECORATOR_H
