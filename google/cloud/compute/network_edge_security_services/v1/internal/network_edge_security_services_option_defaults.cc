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
// source:
// google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto

#include "google/cloud/compute/network_edge_security_services/v1/internal/network_edge_security_services_option_defaults.h"
#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_connection.h"
#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_edge_security_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options NetworkEdgeSecurityServicesDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_NETWORK_EDGE_SECURITY_SERVICES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_NETWORK_EDGE_SECURITY_SERVICES_AUTHORITY",
      "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<compute_network_edge_security_services_v1::
                       NetworkEdgeSecurityServicesRetryPolicyOption>()) {
    options.set<compute_network_edge_security_services_v1::
                    NetworkEdgeSecurityServicesRetryPolicyOption>(
        compute_network_edge_security_services_v1::
            NetworkEdgeSecurityServicesLimitedTimeRetryPolicy(
                std::chrono::minutes(30))
                .clone());
  }
  if (!options.has<compute_network_edge_security_services_v1::
                       NetworkEdgeSecurityServicesBackoffPolicyOption>()) {
    options.set<compute_network_edge_security_services_v1::
                    NetworkEdgeSecurityServicesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_network_edge_security_services_v1::
                       NetworkEdgeSecurityServicesPollingPolicyOption>()) {
    options.set<compute_network_edge_security_services_v1::
                    NetworkEdgeSecurityServicesPollingPolicyOption>(
        GenericPollingPolicy<
            compute_network_edge_security_services_v1::
                NetworkEdgeSecurityServicesRetryPolicyOption::Type,
            compute_network_edge_security_services_v1::
                NetworkEdgeSecurityServicesBackoffPolicyOption::Type>(
            options
                .get<compute_network_edge_security_services_v1::
                         NetworkEdgeSecurityServicesRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          compute_network_edge_security_services_v1::
              NetworkEdgeSecurityServicesConnectionIdempotencyPolicyOption>()) {
    options.set<
        compute_network_edge_security_services_v1::
            NetworkEdgeSecurityServicesConnectionIdempotencyPolicyOption>(
        compute_network_edge_security_services_v1::
            MakeDefaultNetworkEdgeSecurityServicesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_edge_security_services_v1_internal
}  // namespace cloud
}  // namespace google
