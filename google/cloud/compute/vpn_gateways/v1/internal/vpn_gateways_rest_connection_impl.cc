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
// source: google/cloud/compute/vpn_gateways/v1/vpn_gateways.proto

#include "google/cloud/compute/vpn_gateways/v1/internal/vpn_gateways_rest_connection_impl.h"
#include "google/cloud/compute/vpn_gateways/v1/internal/vpn_gateways_rest_stub_factory.h"
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
namespace compute_vpn_gateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VpnGatewaysRestConnectionImpl::VpnGatewaysRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_vpn_gateways_v1_internal::VpnGatewaysRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      VpnGatewaysConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::VpnGatewayAggregatedList>
VpnGatewaysRestConnectionImpl::AggregatedListVpnGateways(
    google::cloud::cpp::compute::vpn_gateways::v1::
        AggregatedListVpnGatewaysRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AggregatedListVpnGateways(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::vpn_gateways::v1::
                 AggregatedListVpnGatewaysRequest const& request) {
        return stub_->AggregatedListVpnGateways(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysRestConnectionImpl::DeleteVpnGateways(
    google::cloud::cpp::compute::vpn_gateways::v1::
        DeleteVpnGatewaysRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationsRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::vpn_gateways::v1::
                         DeleteVpnGatewaysRequest const& request) {
        return stub->AsyncDeleteVpnGateways(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetRegionOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteRegionOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteVpnGateways(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetRegionOperationsRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteRegionOperationsRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::VpnGateway>
VpnGatewaysRestConnectionImpl::GetVpnGateways(
    google::cloud::cpp::compute::vpn_gateways::v1::GetVpnGatewaysRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetVpnGateways(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::vpn_gateways::v1::
                 GetVpnGatewaysRequest const& request) {
        return stub_->GetVpnGateways(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::VpnGatewaysGetStatusResponse>
VpnGatewaysRestConnectionImpl::GetStatus(
    google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetStatus(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::cloud::cpp::compute::vpn_gateways::v1::GetStatusRequest const&
              request) { return stub_->GetStatus(rest_context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysRestConnectionImpl::InsertVpnGateways(
    google::cloud::cpp::compute::vpn_gateways::v1::
        InsertVpnGatewaysRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationsRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::vpn_gateways::v1::
                         InsertVpnGatewaysRequest const& request) {
        return stub->AsyncInsertVpnGateways(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetRegionOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteRegionOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertVpnGateways(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetRegionOperationsRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteRegionOperationsRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StreamRange<google::cloud::cpp::compute::v1::VpnGateway>
VpnGatewaysRestConnectionImpl::ListVpnGateways(
    google::cloud::cpp::compute::vpn_gateways::v1::ListVpnGatewaysRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListVpnGateways(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::VpnGateway>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_vpn_gateways_v1::VpnGatewaysRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::vpn_gateways::v1::
              ListVpnGatewaysRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::vpn_gateways::v1::
                       ListVpnGatewaysRequest const& request) {
              return stub->ListVpnGateways(rest_context, request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::VpnGatewayList r) {
        std::vector<google::cloud::cpp::compute::v1::VpnGateway> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnGatewaysRestConnectionImpl::SetLabels(
    google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationsRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationsRequest>(
      background_->cq(), request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          google::cloud::cpp::compute::vpn_gateways::v1::SetLabelsRequest const&
              request) {
        return stub->AsyncSetLabels(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetRegionOperationsRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteRegionOperationsRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetLabels(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetRegionOperationsRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteRegionOperationsRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
VpnGatewaysRestConnectionImpl::TestIamPermissions(
    google::cloud::cpp::compute::vpn_gateways::v1::
        TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::vpn_gateways::v1::
                 TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_gateways_v1_internal
}  // namespace cloud
}  // namespace google
