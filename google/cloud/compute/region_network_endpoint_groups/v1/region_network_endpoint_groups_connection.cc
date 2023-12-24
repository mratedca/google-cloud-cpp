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
// google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto

#include "google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups_connection.h"
#include "google/cloud/compute/region_network_endpoint_groups/v1/internal/region_network_endpoint_groups_option_defaults.h"
#include "google/cloud/compute/region_network_endpoint_groups/v1/internal/region_network_endpoint_groups_tracing_connection.h"
#include "google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionNetworkEndpointGroupsConnection::
    ~RegionNetworkEndpointGroupsConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsConnection::AttachNetworkEndpoints(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsConnection::DeleteNetworkEndpointGroup(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsConnection::DetachNetworkEndpoints(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsConnection::GetNetworkEndpointGroup(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsConnection::InsertNetworkEndpointGroup(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsConnection::ListRegionNetworkEndpointGroups(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        ListRegionNetworkEndpointGroupsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>>();
}

StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
RegionNetworkEndpointGroupsConnection::ListNetworkEndpoints(
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        ListNetworkEndpointsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google
