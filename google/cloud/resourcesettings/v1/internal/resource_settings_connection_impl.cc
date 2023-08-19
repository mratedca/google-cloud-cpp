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

#include "google/cloud/resourcesettings/v1/internal/resource_settings_connection_impl.h"
#include "google/cloud/resourcesettings/v1/internal/resource_settings_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcesettings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<resourcesettings_v1::ResourceSettingsServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<resourcesettings_v1::ResourceSettingsServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<resourcesettings_v1::ResourceSettingsServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    resourcesettings_v1::ResourceSettingsServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<resourcesettings_v1::
               ResourceSettingsServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ResourceSettingsServiceConnectionImpl::ResourceSettingsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<resourcesettings_v1_internal::ResourceSettingsServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ResourceSettingsServiceConnection::options())) {}

StreamRange<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceConnectionImpl::ListSettings(
    google::cloud::resourcesettings::v1::ListSettingsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSettings(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::resourcesettings::v1::Setting>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           resourcesettings_v1::ResourceSettingsServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::resourcesettings::v1::ListSettingsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::resourcesettings::v1::ListSettingsRequest const&
                    request) { return stub->ListSettings(context, request); },
            r, function_name);
      },
      [](google::cloud::resourcesettings::v1::ListSettingsResponse r) {
        std::vector<google::cloud::resourcesettings::v1::Setting> result(
            r.settings().size());
        auto& messages = *r.mutable_settings();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceConnectionImpl::GetSetting(
    google::cloud::resourcesettings::v1::GetSettingRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSetting(request),
      [this](grpc::ClientContext& context,
             google::cloud::resourcesettings::v1::GetSettingRequest const&
                 request) { return stub_->GetSetting(context, request); },
      request, __func__);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceConnectionImpl::UpdateSetting(
    google::cloud::resourcesettings::v1::UpdateSettingRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateSetting(request),
      [this](grpc::ClientContext& context,
             google::cloud::resourcesettings::v1::UpdateSettingRequest const&
                 request) { return stub_->UpdateSetting(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1_internal
}  // namespace cloud
}  // namespace google
