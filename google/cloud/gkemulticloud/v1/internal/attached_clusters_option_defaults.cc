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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#include "google/cloud/gkemulticloud/v1/internal/attached_clusters_option_defaults.h"
#include "google/cloud/gkemulticloud/v1/attached_clusters_connection.h"
#include "google/cloud/gkemulticloud/v1/attached_clusters_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options AttachedClustersDefaultOptions(std::string const& location,
                                       Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_ATTACHED_CLUSTERS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_ATTACHED_CLUSTERS_AUTHORITY",
      absl::StrCat(location, "-", "gkemulticloud.googleapis.com"));
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<gkemulticloud_v1::AttachedClustersRetryPolicyOption>()) {
    options.set<gkemulticloud_v1::AttachedClustersRetryPolicyOption>(
        gkemulticloud_v1::AttachedClustersLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<gkemulticloud_v1::AttachedClustersBackoffPolicyOption>()) {
    options.set<gkemulticloud_v1::AttachedClustersBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<gkemulticloud_v1::AttachedClustersPollingPolicyOption>()) {
    options.set<gkemulticloud_v1::AttachedClustersPollingPolicyOption>(
        GenericPollingPolicy<
            gkemulticloud_v1::AttachedClustersRetryPolicyOption::Type,
            gkemulticloud_v1::AttachedClustersBackoffPolicyOption::Type>(
            options.get<gkemulticloud_v1::AttachedClustersRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<gkemulticloud_v1::
                       AttachedClustersConnectionIdempotencyPolicyOption>()) {
    options.set<
        gkemulticloud_v1::AttachedClustersConnectionIdempotencyPolicyOption>(
        gkemulticloud_v1::
            MakeDefaultAttachedClustersConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google
