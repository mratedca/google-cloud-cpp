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
// source: google/cloud/policytroubleshooter/v1/checker.proto

#include "google/cloud/policytroubleshooter/v1/internal/iam_checker_option_defaults.h"
#include "google/cloud/policytroubleshooter/v1/iam_checker_connection.h"
#include "google/cloud/policytroubleshooter/v1/iam_checker_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace policytroubleshooter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options IamCheckerDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_IAM_CHECKER_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_IAM_CHECKER_AUTHORITY",
      "policytroubleshooter.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<policytroubleshooter_v1::IamCheckerRetryPolicyOption>()) {
    options.set<policytroubleshooter_v1::IamCheckerRetryPolicyOption>(
        policytroubleshooter_v1::IamCheckerLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<policytroubleshooter_v1::IamCheckerBackoffPolicyOption>()) {
    options.set<policytroubleshooter_v1::IamCheckerBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<policytroubleshooter_v1::
                       IamCheckerConnectionIdempotencyPolicyOption>()) {
    options.set<
        policytroubleshooter_v1::IamCheckerConnectionIdempotencyPolicyOption>(
        policytroubleshooter_v1::
            MakeDefaultIamCheckerConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_v1_internal
}  // namespace cloud
}  // namespace google
