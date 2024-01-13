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
// source: google/cloud/optimization/v1/fleet_routing.proto

#include "google/cloud/optimization/v1/internal/fleet_routing_option_defaults.h"
#include "google/cloud/optimization/v1/fleet_routing_connection.h"
#include "google/cloud/optimization/v1/fleet_routing_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace optimization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options FleetRoutingDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_FLEET_ROUTING_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_FLEET_ROUTING_AUTHORITY",
      "cloudoptimization.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<optimization_v1::FleetRoutingRetryPolicyOption>()) {
    options.set<optimization_v1::FleetRoutingRetryPolicyOption>(
        optimization_v1::FleetRoutingLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<optimization_v1::FleetRoutingBackoffPolicyOption>()) {
    options.set<optimization_v1::FleetRoutingBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<optimization_v1::FleetRoutingPollingPolicyOption>()) {
    options.set<optimization_v1::FleetRoutingPollingPolicyOption>(
        GenericPollingPolicy<
            optimization_v1::FleetRoutingRetryPolicyOption::Type,
            optimization_v1::FleetRoutingBackoffPolicyOption::Type>(
            options.get<optimization_v1::FleetRoutingRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          optimization_v1::FleetRoutingConnectionIdempotencyPolicyOption>()) {
    options.set<optimization_v1::FleetRoutingConnectionIdempotencyPolicyOption>(
        optimization_v1::MakeDefaultFleetRoutingConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace optimization_v1_internal
}  // namespace cloud
}  // namespace google
