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
// source: google/cloud/alloydb/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_CONNECTION_IMPL_H

#include "google/cloud/alloydb/v1/alloy_db_admin_connection.h"
#include "google/cloud/alloydb/v1/alloy_db_admin_connection_idempotency_policy.h"
#include "google/cloud/alloydb/v1/alloy_db_admin_options.h"
#include "google/cloud/alloydb/v1/internal/alloy_db_admin_retry_traits.h"
#include "google/cloud/alloydb/v1/internal/alloy_db_admin_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace alloydb_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AlloyDBAdminConnectionImpl : public alloydb_v1::AlloyDBAdminConnection {
 public:
  ~AlloyDBAdminConnectionImpl() override = default;

  AlloyDBAdminConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<alloydb_v1_internal::AlloyDBAdminStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::alloydb::v1::Cluster> ListClusters(
      google::cloud::alloydb::v1::ListClustersRequest request) override;

  StatusOr<google::cloud::alloydb::v1::Cluster> GetCluster(
      google::cloud::alloydb::v1::GetClusterRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::Cluster>> CreateCluster(
      google::cloud::alloydb::v1::CreateClusterRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::Cluster>> UpdateCluster(
      google::cloud::alloydb::v1::UpdateClusterRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>> DeleteCluster(
      google::cloud::alloydb::v1::DeleteClusterRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::Cluster>> PromoteCluster(
      google::cloud::alloydb::v1::PromoteClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::alloydb::v1::Cluster>> RestoreCluster(
      google::cloud::alloydb::v1::RestoreClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::alloydb::v1::Cluster>> CreateSecondaryCluster(
      google::cloud::alloydb::v1::CreateSecondaryClusterRequest const& request)
      override;

  StreamRange<google::cloud::alloydb::v1::Instance> ListInstances(
      google::cloud::alloydb::v1::ListInstancesRequest request) override;

  StatusOr<google::cloud::alloydb::v1::Instance> GetInstance(
      google::cloud::alloydb::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::Instance>> CreateInstance(
      google::cloud::alloydb::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::alloydb::v1::Instance>>
  CreateSecondaryInstance(
      google::cloud::alloydb::v1::CreateSecondaryInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::alloydb::v1::BatchCreateInstancesResponse>>
  BatchCreateInstances(
      google::cloud::alloydb::v1::BatchCreateInstancesRequest const& request)
      override;

  future<StatusOr<google::cloud::alloydb::v1::Instance>> UpdateInstance(
      google::cloud::alloydb::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>>
  DeleteInstance(google::cloud::alloydb::v1::DeleteInstanceRequest const&
                     request) override;

  future<StatusOr<google::cloud::alloydb::v1::Instance>> FailoverInstance(
      google::cloud::alloydb::v1::FailoverInstanceRequest const& request)
      override;

  future<StatusOr<google::cloud::alloydb::v1::Instance>> InjectFault(
      google::cloud::alloydb::v1::InjectFaultRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::Instance>> RestartInstance(
      google::cloud::alloydb::v1::RestartInstanceRequest const& request)
      override;

  StreamRange<google::cloud::alloydb::v1::Backup> ListBackups(
      google::cloud::alloydb::v1::ListBackupsRequest request) override;

  StatusOr<google::cloud::alloydb::v1::Backup> GetBackup(
      google::cloud::alloydb::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::Backup>> CreateBackup(
      google::cloud::alloydb::v1::CreateBackupRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::Backup>> UpdateBackup(
      google::cloud::alloydb::v1::UpdateBackupRequest const& request) override;

  future<StatusOr<google::cloud::alloydb::v1::OperationMetadata>> DeleteBackup(
      google::cloud::alloydb::v1::DeleteBackupRequest const& request) override;

  StreamRange<google::cloud::alloydb::v1::SupportedDatabaseFlag>
  ListSupportedDatabaseFlags(
      google::cloud::alloydb::v1::ListSupportedDatabaseFlagsRequest request)
      override;

  StreamRange<google::cloud::alloydb::v1::User> ListUsers(
      google::cloud::alloydb::v1::ListUsersRequest request) override;

  StatusOr<google::cloud::alloydb::v1::User> GetUser(
      google::cloud::alloydb::v1::GetUserRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::User> CreateUser(
      google::cloud::alloydb::v1::CreateUserRequest const& request) override;

  StatusOr<google::cloud::alloydb::v1::User> UpdateUser(
      google::cloud::alloydb::v1::UpdateUserRequest const& request) override;

  Status DeleteUser(
      google::cloud::alloydb::v1::DeleteUserRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<alloydb_v1_internal::AlloyDBAdminStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace alloydb_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ALLOYDB_V1_INTERNAL_ALLOY_DB_ADMIN_CONNECTION_IMPL_H
