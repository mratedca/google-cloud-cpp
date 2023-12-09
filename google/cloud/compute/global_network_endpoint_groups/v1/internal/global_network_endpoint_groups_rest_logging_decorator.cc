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
// google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups.proto

#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalNetworkEndpointGroupsRestLogging::GlobalNetworkEndpointGroupsRestLogging(
    std::shared_ptr<GlobalNetworkEndpointGroupsRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestLogging::AsyncAttachNetworkEndpoints(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::global_network_endpoint_groups::v1::
                 AttachNetworkEndpointsRequest const& request) {
        return child_->AsyncAttachNetworkEndpoints(cq, std::move(rest_context),
                                                   options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestLogging::AsyncDeleteNetworkEndpointGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::global_network_endpoint_groups::v1::
                 DeleteNetworkEndpointGroupRequest const& request) {
        return child_->AsyncDeleteNetworkEndpointGroup(
            cq, std::move(rest_context), options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestLogging::AsyncDetachNetworkEndpoints(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::global_network_endpoint_groups::v1::
                 DetachNetworkEndpointsRequest const& request) {
        return child_->AsyncDetachNetworkEndpoints(cq, std::move(rest_context),
                                                   options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
GlobalNetworkEndpointGroupsRestLogging::GetNetworkEndpointGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::global_network_endpoint_groups::v1::
                 GetNetworkEndpointGroupRequest const& request) {
        return child_->GetNetworkEndpointGroup(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestLogging::AsyncInsertNetworkEndpointGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::global_network_endpoint_groups::v1::
                 InsertNetworkEndpointGroupRequest const& request) {
        return child_->AsyncInsertNetworkEndpointGroup(
            cq, std::move(rest_context), options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupList>
GlobalNetworkEndpointGroupsRestLogging::ListGlobalNetworkEndpointGroups(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        ListGlobalNetworkEndpointGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::global_network_endpoint_groups::v1::
                 ListGlobalNetworkEndpointGroupsRequest const& request) {
        return child_->ListGlobalNetworkEndpointGroups(rest_context, options,
                                                       request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::cpp::compute::v1::NetworkEndpointGroupsListNetworkEndpoints>
GlobalNetworkEndpointGroupsRestLogging::ListNetworkEndpoints(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::global_network_endpoint_groups::v1::
        ListNetworkEndpointsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::global_network_endpoint_groups::v1::
                 ListNetworkEndpointsRequest const& request) {
        return child_->ListNetworkEndpoints(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalNetworkEndpointGroupsRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::global_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), options,
                                         request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<Status> GlobalNetworkEndpointGroupsRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google
