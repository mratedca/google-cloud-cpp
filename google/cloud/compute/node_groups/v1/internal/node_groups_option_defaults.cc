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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#include "google/cloud/compute/node_groups/v1/internal/node_groups_option_defaults.h"
#include "google/cloud/compute/node_groups/v1/node_groups_connection.h"
#include "google/cloud/compute/node_groups/v1/node_groups_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options NodeGroupsDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_NODE_GROUPS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_NODE_GROUPS_AUTHORITY", "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<compute_node_groups_v1::NodeGroupsRetryPolicyOption>()) {
    options.set<compute_node_groups_v1::NodeGroupsRetryPolicyOption>(
        compute_node_groups_v1::NodeGroupsLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<compute_node_groups_v1::NodeGroupsBackoffPolicyOption>()) {
    options.set<compute_node_groups_v1::NodeGroupsBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<compute_node_groups_v1::NodeGroupsPollingPolicyOption>()) {
    options.set<compute_node_groups_v1::NodeGroupsPollingPolicyOption>(
        GenericPollingPolicy<
            compute_node_groups_v1::NodeGroupsRetryPolicyOption::Type,
            compute_node_groups_v1::NodeGroupsBackoffPolicyOption::Type>(
            options.get<compute_node_groups_v1::NodeGroupsRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<compute_node_groups_v1::
                       NodeGroupsConnectionIdempotencyPolicyOption>()) {
    options.set<
        compute_node_groups_v1::NodeGroupsConnectionIdempotencyPolicyOption>(
        compute_node_groups_v1::
            MakeDefaultNodeGroupsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google
