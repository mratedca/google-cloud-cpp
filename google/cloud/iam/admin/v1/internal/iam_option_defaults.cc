// Copyright 2021 Google LLC
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
// source: google/iam/admin/v1/iam.proto

#include "google/cloud/iam/admin/v1/internal/iam_option_defaults.h"
#include "google/cloud/iam/admin/v1/iam_connection.h"
#include "google/cloud/iam/admin/v1/iam_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options IAMDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_IAM_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_IAM_AUTHORITY", "iam.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<iam_admin_v1::IAMRetryPolicyOption>()) {
    options.set<iam_admin_v1::IAMRetryPolicyOption>(
        iam_admin_v1::IAMLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<iam_admin_v1::IAMBackoffPolicyOption>()) {
    options.set<iam_admin_v1::IAMBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<iam_admin_v1::IAMConnectionIdempotencyPolicyOption>()) {
    options.set<iam_admin_v1::IAMConnectionIdempotencyPolicyOption>(
        iam_admin_v1::MakeDefaultIAMConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_admin_v1_internal
}  // namespace cloud
}  // namespace google
