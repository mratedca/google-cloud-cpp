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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/v1/internal/ekm_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/kms/v1/ekm_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EkmServiceMetadata::EkmServiceMetadata(
    std::shared_ptr<EkmServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::kms::v1::ListEkmConnectionsResponse>
EkmServiceMetadata::ListEkmConnections(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListEkmConnectionsRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEkmConnections(context, request);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceMetadata::GetEkmConnection(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetEkmConnectionRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEkmConnection(context, request);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceMetadata::CreateEkmConnection(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateEkmConnectionRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEkmConnection(context, request);
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceMetadata::UpdateEkmConnection(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateEkmConnectionRequest const& request) {
  SetMetadata(
      context, internal::CurrentOptions(),
      absl::StrCat("ekm_connection.name=",
                   internal::UrlEncode(request.ekm_connection().name())));
  return child_->UpdateEkmConnection(context, request);
}

StatusOr<google::cloud::kms::v1::EkmConfig> EkmServiceMetadata::GetEkmConfig(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetEkmConfigRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEkmConfig(context, request);
}

StatusOr<google::cloud::kms::v1::EkmConfig> EkmServiceMetadata::UpdateEkmConfig(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateEkmConfigRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("ekm_config.name=",
                           internal::UrlEncode(request.ekm_config().name())));
  return child_->UpdateEkmConfig(context, request);
}

StatusOr<google::cloud::kms::v1::VerifyConnectivityResponse>
EkmServiceMetadata::VerifyConnectivity(
    grpc::ClientContext& context,
    google::cloud::kms::v1::VerifyConnectivityRequest const& request) {
  SetMetadata(context, internal::CurrentOptions(),
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->VerifyConnectivity(context, request);
}

void EkmServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void EkmServiceMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google
