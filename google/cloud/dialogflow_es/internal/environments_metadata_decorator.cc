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
// source: google/cloud/dialogflow/v2/environment.proto

#include "google/cloud/dialogflow_es/internal/environments_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/environment.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsMetadata::EnvironmentsMetadata(
    std::shared_ptr<EnvironmentsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::v2::ListEnvironmentsResponse>
EnvironmentsMetadata::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListEnvironmentsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEnvironments(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsMetadata::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetEnvironmentRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEnvironment(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsMetadata::CreateEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateEnvironmentRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEnvironment(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Environment>
EnvironmentsMetadata::UpdateEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateEnvironmentRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("environment.name=",
                           internal::UrlEncode(request.environment().name())));
  return child_->UpdateEnvironment(context, request);
}

Status EnvironmentsMetadata::DeleteEnvironment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteEnvironmentRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEnvironment(context, request);
}

StatusOr<google::cloud::dialogflow::v2::EnvironmentHistory>
EnvironmentsMetadata::GetEnvironmentHistory(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetEnvironmentHistoryRequest const&
        request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GetEnvironmentHistory(context, request);
}

void EnvironmentsMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void EnvironmentsMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
