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

#include "google/cloud/compute/node_groups/v1/internal/node_groups_rest_connection_impl.h"
#include "google/cloud/compute/node_groups/v1/internal/node_groups_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeGroupsRestConnectionImpl::NodeGroupsRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_node_groups_v1_internal::NodeGroupsRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      NodeGroupsConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestConnectionImpl::AddNodes(
    google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
              request) {
        return stub->AsyncAddNodes(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddNodes(request), polling_policy(*current),
      __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
NodeGroupsRestConnectionImpl::AggregatedListNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::
        AggregatedListNodeGroupsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AggregatedListNodeGroups(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::node_groups::v1::
                 AggregatedListNodeGroupsRequest const& request) {
        return stub_->AggregatedListNodeGroups(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestConnectionImpl::DeleteNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::DeleteNodeGroupsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::node_groups::v1::
                         DeleteNodeGroupsRequest const& request) {
        return stub->AsyncDeleteNodeGroups(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteNodeGroups(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestConnectionImpl::DeleteNodes(
    google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::node_groups::v1::
                         DeleteNodesRequest const& request) {
        return stub->AsyncDeleteNodes(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteNodes(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsRestConnectionImpl::GetNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::GetNodeGroupsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNodeGroups(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::node_groups::v1::
                 GetNodeGroupsRequest const& request) {
        return stub_->GetNodeGroups(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsRestConnectionImpl::GetIamPolicy(
    google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::node_groups::v1::
                 GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestConnectionImpl::InsertNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::InsertNodeGroupsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::node_groups::v1::
                         InsertNodeGroupsRequest const& request) {
        return stub->AsyncInsertNodeGroups(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertNodeGroups(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::NodeGroup>
NodeGroupsRestConnectionImpl::ListNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListNodeGroups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NodeGroup>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_node_groups_v1::NodeGroupsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::node_groups::v1::
              ListNodeGroupsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::node_groups::v1::
                       ListNodeGroupsRequest const& request) {
              return stub->ListNodeGroups(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::NodeGroupList r) {
        std::vector<google::cloud::cpp::compute::v1::NodeGroup> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode>
NodeGroupsRestConnectionImpl::ListNodes(
    google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListNodes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_node_groups_v1::NodeGroupsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::node_groups::v1::ListNodesRequest const&
              r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::node_groups::v1::
                       ListNodesRequest const& request) {
              return stub->ListNodes(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::NodeGroupsListNodes r) {
        std::vector<google::cloud::cpp::compute::v1::NodeGroupNode> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestConnectionImpl::PatchNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::node_groups::v1::
                         PatchNodeGroupsRequest const& request) {
        return stub->AsyncPatchNodeGroups(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PatchNodeGroups(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
NodeGroupsRestConnectionImpl::SetIamPolicy(
    google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::node_groups::v1::
                 SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestConnectionImpl::SetNodeTemplate(
    google::cloud::cpp::compute::node_groups::v1::SetNodeTemplateRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::node_groups::v1::
                         SetNodeTemplateRequest const& request) {
        return stub->AsyncSetNodeTemplate(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetNodeTemplate(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NodeGroupsRestConnectionImpl::SimulateMaintenanceEvent(
    google::cloud::cpp::compute::node_groups::v1::
        SimulateMaintenanceEventRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::node_groups::v1::
                         SimulateMaintenanceEventRequest const& request) {
        return stub->AsyncSimulateMaintenanceEvent(cq, std::move(context),
                                                   request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         GetZoneOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::zone_operations::v1::
                         DeleteZoneOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SimulateMaintenanceEvent(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    GetZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::zone_operations::v1::
                    DeleteZoneOperationsRequest& r) {
        r.set_project(request.project());
        r.set_zone(request.zone());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
NodeGroupsRestConnectionImpl::TestIamPermissions(
    google::cloud::cpp::compute::node_groups::v1::
        TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::node_groups::v1::
                 TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google
