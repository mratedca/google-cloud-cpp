// Copyright 2023 Google LLC
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
// source: google/cloud/compute/health_checks/v1/health_checks.proto

#include "google/cloud/compute/health_checks/v1/internal/health_checks_option_defaults.h"
#include "google/cloud/compute/health_checks/v1/health_checks_connection.h"
#include "google/cloud/compute/health_checks/v1/health_checks_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options HealthChecksDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_HEALTH_CHECKS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_HEALTH_CHECKS_AUTHORITY", "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<compute_health_checks_v1::HealthChecksRetryPolicyOption>()) {
    options.set<compute_health_checks_v1::HealthChecksRetryPolicyOption>(
        compute_health_checks_v1::HealthChecksLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options
           .has<compute_health_checks_v1::HealthChecksBackoffPolicyOption>()) {
    options.set<compute_health_checks_v1::HealthChecksBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options
           .has<compute_health_checks_v1::HealthChecksPollingPolicyOption>()) {
    options.set<compute_health_checks_v1::HealthChecksPollingPolicyOption>(
        GenericPollingPolicy<
            compute_health_checks_v1::HealthChecksRetryPolicyOption::Type,
            compute_health_checks_v1::HealthChecksBackoffPolicyOption::Type>(
            options
                .get<compute_health_checks_v1::HealthChecksRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<compute_health_checks_v1::
                       HealthChecksConnectionIdempotencyPolicyOption>()) {
    options.set<compute_health_checks_v1::
                    HealthChecksConnectionIdempotencyPolicyOption>(
        compute_health_checks_v1::
            MakeDefaultHealthChecksConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_health_checks_v1_internal
}  // namespace cloud
}  // namespace google
