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
// source: google/cloud/aiplatform/v1/migration_service.proto

#include "google/cloud/aiplatform/v1/migration_connection.h"
#include "google/cloud/aiplatform/v1/internal/migration_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/migration_option_defaults.h"
#include "google/cloud/aiplatform/v1/internal/migration_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/migration_tracing_connection.h"
#include "google/cloud/aiplatform/v1/migration_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationServiceConnection::~MigrationServiceConnection() = default;

StreamRange<google::cloud::aiplatform::v1::MigratableResource>
MigrationServiceConnection::SearchMigratableResources(
    google::cloud::aiplatform::v1::
        SearchMigratableResourcesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::MigratableResource>>();
}

future<StatusOr<google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>>
MigrationServiceConnection::BatchMigrateResources(
    google::cloud::aiplatform::v1::BatchMigrateResourcesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::BatchMigrateResourcesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<MigrationServiceConnection> MakeMigrationServiceConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 MigrationServicePolicyOptionList>(options,
                                                                   __func__);
  options = aiplatform_v1_internal::MigrationServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = aiplatform_v1_internal::CreateDefaultMigrationServiceStub(
      std::move(auth), options);
  return aiplatform_v1_internal::MakeMigrationServiceTracingConnection(
      std::make_shared<aiplatform_v1_internal::MigrationServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
