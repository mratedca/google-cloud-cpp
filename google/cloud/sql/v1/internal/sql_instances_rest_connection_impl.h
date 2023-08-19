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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_INSTANCES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_INSTANCES_REST_CONNECTION_IMPL_H

#include "google/cloud/sql/v1/internal/sql_instances_rest_stub.h"
#include "google/cloud/sql/v1/internal/sql_instances_retry_traits.h"
#include "google/cloud/sql/v1/sql_instances_connection.h"
#include "google/cloud/sql/v1/sql_instances_connection_idempotency_policy.h"
#include "google/cloud/sql/v1/sql_instances_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SqlInstancesServiceRestConnectionImpl
    : public sql_v1::SqlInstancesServiceConnection {
 public:
  ~SqlInstancesServiceRestConnectionImpl() override = default;

  SqlInstancesServiceRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<sql_v1_internal::SqlInstancesServiceRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::sql::v1::Operation> AddServerCa(
      google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Clone(
      google::cloud::sql::v1::SqlInstancesCloneRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlInstancesDeleteRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> DemoteMaster(
      google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Export(
      google::cloud::sql::v1::SqlInstancesExportRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Failover(
      google::cloud::sql::v1::SqlInstancesFailoverRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Reencrypt(
      google::cloud::sql::v1::SqlInstancesReencryptRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::DatabaseInstance> Get(
      google::cloud::sql::v1::SqlInstancesGetRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> Import(
      google::cloud::sql::v1::SqlInstancesImportRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::sql::v1::SqlInstancesInsertRequest const& request)
      override;

  StreamRange<google::cloud::sql::v1::DatabaseInstance> List(
      google::cloud::sql::v1::SqlInstancesListRequest request) override;

  StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
  ListServerCas(google::cloud::sql::v1::SqlInstancesListServerCasRequest const&
                    request) override;

  StatusOr<google::cloud::sql::v1::Operation> Patch(
      google::cloud::sql::v1::SqlInstancesPatchRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> PromoteReplica(
      google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> ResetSslConfig(
      google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Restart(
      google::cloud::sql::v1::SqlInstancesRestartRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> RestoreBackup(
      google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> RotateServerCa(
      google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> StartReplica(
      google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> StopReplica(
      google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> TruncateLog(
      google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Update(
      google::cloud::sql::v1::SqlInstancesUpdateRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::SslCert> CreateEphemeral(
      google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::Operation> RescheduleMaintenance(
      google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
          request) override;

  StatusOr<
      google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
  VerifyExternalSyncSettings(
      google::cloud::sql::v1::
          SqlInstancesVerifyExternalSyncSettingsRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> StartExternalSync(
      google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::Operation> PerformDiskShrink(
      google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>
  GetDiskShrinkConfig(
      google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::Operation> ResetReplicaSize(
      google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
          request) override;

 private:
  static std::unique_ptr<sql_v1::SqlInstancesServiceRetryPolicy> retry_policy(
      Options const& options) {
    return options.get<sql_v1::SqlInstancesServiceRetryPolicyOption>()->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<sql_v1::SqlInstancesServiceBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<sql_v1::SqlInstancesServiceConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<sql_v1::SqlInstancesServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<sql_v1_internal::SqlInstancesServiceRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_INSTANCES_REST_CONNECTION_IMPL_H
