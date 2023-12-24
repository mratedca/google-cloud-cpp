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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/v1/identity_aware_proxy_admin_connection.h"
#include "google/cloud/iap/v1/identity_aware_proxy_admin_options.h"
#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_connection_impl.h"
#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_option_defaults.h"
#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_stub_factory.h"
#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IdentityAwareProxyAdminServiceConnection::
    ~IdentityAwareProxyAdminServiceConnection() = default;

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IdentityAwareProxyAdminServiceConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceConnection::GetIapSettings(
    google::cloud::iap::v1::GetIapSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceConnection::UpdateIapSettings(
    google::cloud::iap::v1::UpdateIapSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceConnection::ListTunnelDestGroups(
    google::cloud::iap::v1::
        ListTunnelDestGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::iap::v1::TunnelDestGroup>>();
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceConnection::CreateTunnelDestGroup(
    google::cloud::iap::v1::CreateTunnelDestGroupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceConnection::GetTunnelDestGroup(
    google::cloud::iap::v1::GetTunnelDestGroupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status IdentityAwareProxyAdminServiceConnection::DeleteTunnelDestGroup(
    google::cloud::iap::v1::DeleteTunnelDestGroupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceConnection::UpdateTunnelDestGroup(
    google::cloud::iap::v1::UpdateTunnelDestGroupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<IdentityAwareProxyAdminServiceConnection>
MakeIdentityAwareProxyAdminServiceConnection(Options options) {
  internal::CheckExpectedOptions<
      CommonOptionList, GrpcOptionList, UnifiedCredentialsOptionList,
      IdentityAwareProxyAdminServicePolicyOptionList>(options, __func__);
  options = iap_v1_internal::IdentityAwareProxyAdminServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = iap_v1_internal::CreateDefaultIdentityAwareProxyAdminServiceStub(
      std::move(auth), options);
  return iap_v1_internal::MakeIdentityAwareProxyAdminServiceTracingConnection(
      std::make_shared<
          iap_v1_internal::IdentityAwareProxyAdminServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1
}  // namespace cloud
}  // namespace google
