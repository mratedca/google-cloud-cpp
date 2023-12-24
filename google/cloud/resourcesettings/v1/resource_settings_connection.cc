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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#include "google/cloud/resourcesettings/v1/resource_settings_connection.h"
#include "google/cloud/resourcesettings/v1/internal/resource_settings_connection_impl.h"
#include "google/cloud/resourcesettings/v1/internal/resource_settings_option_defaults.h"
#include "google/cloud/resourcesettings/v1/internal/resource_settings_stub_factory.h"
#include "google/cloud/resourcesettings/v1/internal/resource_settings_tracing_connection.h"
#include "google/cloud/resourcesettings/v1/resource_settings_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcesettings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ResourceSettingsServiceConnection::~ResourceSettingsServiceConnection() =
    default;

StreamRange<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceConnection::ListSettings(
    google::cloud::resourcesettings::v1::
        ListSettingsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::resourcesettings::v1::Setting>>();
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceConnection::GetSetting(
    google::cloud::resourcesettings::v1::GetSettingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceConnection::UpdateSetting(
    google::cloud::resourcesettings::v1::UpdateSettingRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ResourceSettingsServiceConnection>
MakeResourceSettingsServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ResourceSettingsServicePolicyOptionList>(
      options, __func__);
  options = resourcesettings_v1_internal::ResourceSettingsServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      resourcesettings_v1_internal::CreateDefaultResourceSettingsServiceStub(
          std::move(auth), options);
  return resourcesettings_v1_internal::
      MakeResourceSettingsServiceTracingConnection(
          std::make_shared<resourcesettings_v1_internal::
                               ResourceSettingsServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1
}  // namespace cloud
}  // namespace google
