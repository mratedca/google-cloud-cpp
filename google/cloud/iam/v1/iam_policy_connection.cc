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
// source: google/iam/v1/iam_policy.proto

#include "google/cloud/iam/v1/iam_policy_connection.h"
#include "google/cloud/iam/v1/iam_policy_options.h"
#include "google/cloud/iam/v1/internal/iam_policy_connection_impl.h"
#include "google/cloud/iam/v1/internal/iam_policy_option_defaults.h"
#include "google/cloud/iam/v1/internal/iam_policy_stub_factory.h"
#include "google/cloud/iam/v1/internal/iam_policy_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IAMPolicyConnection::~IAMPolicyConnection() = default;

StatusOr<google::iam::v1::Policy> IAMPolicyConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> IAMPolicyConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IAMPolicyConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<IAMPolicyConnection> MakeIAMPolicyConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 IAMPolicyPolicyOptionList>(options, __func__);
  options = iam_v1_internal::IAMPolicyDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      iam_v1_internal::CreateDefaultIAMPolicyStub(std::move(auth), options);
  return iam_v1_internal::MakeIAMPolicyTracingConnection(
      std::make_shared<iam_v1_internal::IAMPolicyConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v1
}  // namespace cloud
}  // namespace google
