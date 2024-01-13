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
// source: google/cloud/talent/v4/completion_service.proto

#include "google/cloud/talent/v4/internal/completion_option_defaults.h"
#include "google/cloud/talent/v4/completion_connection.h"
#include "google/cloud/talent/v4/completion_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CompletionDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_COMPLETION_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_COMPLETION_AUTHORITY", "jobs.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<talent_v4::CompletionRetryPolicyOption>()) {
    options.set<talent_v4::CompletionRetryPolicyOption>(
        talent_v4::CompletionLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<talent_v4::CompletionBackoffPolicyOption>()) {
    options.set<talent_v4::CompletionBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<talent_v4::CompletionConnectionIdempotencyPolicyOption>()) {
    options.set<talent_v4::CompletionConnectionIdempotencyPolicyOption>(
        talent_v4::MakeDefaultCompletionConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
