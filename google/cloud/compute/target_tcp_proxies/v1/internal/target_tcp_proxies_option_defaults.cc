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
// source: google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto

#include "google/cloud/compute/target_tcp_proxies/v1/internal/target_tcp_proxies_option_defaults.h"
#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_connection.h"
#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options TargetTcpProxiesDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_TARGET_TCP_PROXIES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_TARGET_TCP_PROXIES_AUTHORITY",
      "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<
          compute_target_tcp_proxies_v1::TargetTcpProxiesRetryPolicyOption>()) {
    options.set<
        compute_target_tcp_proxies_v1::TargetTcpProxiesRetryPolicyOption>(
        compute_target_tcp_proxies_v1::TargetTcpProxiesLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<compute_target_tcp_proxies_v1::
                       TargetTcpProxiesBackoffPolicyOption>()) {
    options.set<
        compute_target_tcp_proxies_v1::TargetTcpProxiesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_target_tcp_proxies_v1::
                       TargetTcpProxiesPollingPolicyOption>()) {
    options.set<
        compute_target_tcp_proxies_v1::TargetTcpProxiesPollingPolicyOption>(
        GenericPollingPolicy<compute_target_tcp_proxies_v1::
                                 TargetTcpProxiesRetryPolicyOption::Type,
                             compute_target_tcp_proxies_v1::
                                 TargetTcpProxiesBackoffPolicyOption::Type>(
            options
                .get<compute_target_tcp_proxies_v1::
                         TargetTcpProxiesRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<compute_target_tcp_proxies_v1::
                       TargetTcpProxiesConnectionIdempotencyPolicyOption>()) {
    options.set<compute_target_tcp_proxies_v1::
                    TargetTcpProxiesConnectionIdempotencyPolicyOption>(
        compute_target_tcp_proxies_v1::
            MakeDefaultTargetTcpProxiesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google
