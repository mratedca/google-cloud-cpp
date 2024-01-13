// Copyright 2024 Google LLC
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
// source: google/api/cloudquotas/v1/cloudquotas.proto

#include "google/cloud/cloudquotas/v1/internal/cloud_quotas_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/api/cloudquotas/v1/cloudquotas.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudquotas_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudQuotasLogging::CloudQuotasLogging(std::shared_ptr<CloudQuotasStub> child,
                                       TracingOptions tracing_options,
                                       std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::api::cloudquotas::v1::ListQuotaInfosResponse>
CloudQuotasLogging::ListQuotaInfos(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::ListQuotaInfosRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::api::cloudquotas::v1::ListQuotaInfosRequest const& request) {
        return child_->ListQuotaInfos(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::cloudquotas::v1::QuotaInfo>
CloudQuotasLogging::GetQuotaInfo(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::GetQuotaInfoRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::cloudquotas::v1::GetQuotaInfoRequest const& request) {
        return child_->GetQuotaInfo(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::cloudquotas::v1::ListQuotaPreferencesResponse>
CloudQuotasLogging::ListQuotaPreferences(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::ListQuotaPreferencesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::cloudquotas::v1::ListQuotaPreferencesRequest const&
                 request) {
        return child_->ListQuotaPreferences(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasLogging::GetQuotaPreference(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::GetQuotaPreferenceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::cloudquotas::v1::GetQuotaPreferenceRequest const&
                 request) {
        return child_->GetQuotaPreference(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasLogging::CreateQuotaPreference(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const&
                 request) {
        return child_->CreateQuotaPreference(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasLogging::UpdateQuotaPreference(
    grpc::ClientContext& context,
    google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const&
                 request) {
        return child_->UpdateQuotaPreference(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudquotas_v1_internal
}  // namespace cloud
}  // namespace google
