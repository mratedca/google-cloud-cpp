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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/v1/internal/edge_container_connection_impl.h"
#include "google/cloud/edgecontainer/v1/internal/edge_container_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<edgecontainer_v1::EdgeContainerRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<edgecontainer_v1::EdgeContainerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<edgecontainer_v1::EdgeContainerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<edgecontainer_v1::EdgeContainerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<edgecontainer_v1::EdgeContainerConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<edgecontainer_v1::EdgeContainerPollingPolicyOption>()
      ->clone();
}

}  // namespace

EdgeContainerConnectionImpl::EdgeContainerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<edgecontainer_v1_internal::EdgeContainerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      EdgeContainerConnection::options())) {}

StreamRange<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerConnectionImpl::ListClusters(
    google::cloud::edgecontainer::v1::ListClustersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListClusters(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgecontainer::v1::Cluster>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgecontainer_v1::EdgeContainerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgecontainer::v1::ListClustersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgecontainer::v1::ListClustersRequest const&
                       request) {
              return stub->ListClusters(context, request);
            },
            r, function_name);
      },
      [](google::cloud::edgecontainer::v1::ListClustersResponse r) {
        std::vector<google::cloud::edgecontainer::v1::Cluster> result(
            r.clusters().size());
        auto& messages = *r.mutable_clusters();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerConnectionImpl::GetCluster(
    google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetCluster(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
        return stub_->GetCluster(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerConnectionImpl::CreateCluster(
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgecontainer::v1::Cluster>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::edgecontainer::v1::CreateClusterRequest const&
              request) {
        return stub->AsyncCreateCluster(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgecontainer::v1::Cluster>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateCluster(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgecontainer::v1::Cluster>>
EdgeContainerConnectionImpl::UpdateCluster(
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgecontainer::v1::Cluster>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::edgecontainer::v1::UpdateClusterRequest const&
              request) {
        return stub->AsyncUpdateCluster(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgecontainer::v1::Cluster>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateCluster(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerConnectionImpl::DeleteCluster(
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgecontainer::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::edgecontainer::v1::DeleteClusterRequest const&
              request) {
        return stub->AsyncDeleteCluster(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::edgecontainer::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteCluster(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
EdgeContainerConnectionImpl::GenerateAccessToken(
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateAccessToken(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
                 request) {
        return stub_->GenerateAccessToken(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerConnectionImpl::ListNodePools(
    google::cloud::edgecontainer::v1::ListNodePoolsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListNodePools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgecontainer::v1::NodePool>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgecontainer_v1::EdgeContainerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgecontainer::v1::ListNodePoolsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgecontainer::v1::ListNodePoolsRequest const&
                       request) {
              return stub->ListNodePools(context, request);
            },
            r, function_name);
      },
      [](google::cloud::edgecontainer::v1::ListNodePoolsResponse r) {
        std::vector<google::cloud::edgecontainer::v1::NodePool> result(
            r.node_pools().size());
        auto& messages = *r.mutable_node_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerConnectionImpl::GetNodePool(
    google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNodePool(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
        return stub_->GetNodePool(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerConnectionImpl::CreateNodePool(
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgecontainer::v1::NodePool>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::edgecontainer::v1::CreateNodePoolRequest const&
              request) {
        return stub->AsyncCreateNodePool(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgecontainer::v1::NodePool>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateNodePool(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgecontainer::v1::NodePool>>
EdgeContainerConnectionImpl::UpdateNodePool(
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgecontainer::v1::NodePool>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::edgecontainer::v1::UpdateNodePoolRequest const&
              request) {
        return stub->AsyncUpdateNodePool(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgecontainer::v1::NodePool>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateNodePool(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerConnectionImpl::DeleteNodePool(
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgecontainer::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&
              request) {
        return stub->AsyncDeleteNodePool(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::edgecontainer::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteNodePool(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::edgecontainer::v1::Machine>
EdgeContainerConnectionImpl::ListMachines(
    google::cloud::edgecontainer::v1::ListMachinesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListMachines(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgecontainer::v1::Machine>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgecontainer_v1::EdgeContainerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgecontainer::v1::ListMachinesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgecontainer::v1::ListMachinesRequest const&
                       request) {
              return stub->ListMachines(context, request);
            },
            r, function_name);
      },
      [](google::cloud::edgecontainer::v1::ListMachinesResponse r) {
        std::vector<google::cloud::edgecontainer::v1::Machine> result(
            r.machines().size());
        auto& messages = *r.mutable_machines();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
EdgeContainerConnectionImpl::GetMachine(
    google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetMachine(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
        return stub_->GetMachine(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerConnectionImpl::ListVpnConnections(
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListVpnConnections(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::edgecontainer::v1::VpnConnection>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<edgecontainer_v1::EdgeContainerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::edgecontainer::v1::
                       ListVpnConnectionsRequest const& request) {
              return stub->ListVpnConnections(context, request);
            },
            r, function_name);
      },
      [](google::cloud::edgecontainer::v1::ListVpnConnectionsResponse r) {
        std::vector<google::cloud::edgecontainer::v1::VpnConnection> result(
            r.vpn_connections().size());
        auto& messages = *r.mutable_vpn_connections();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerConnectionImpl::GetVpnConnection(
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetVpnConnection(request),
      [this](grpc::ClientContext& context,
             google::cloud::edgecontainer::v1::GetVpnConnectionRequest const&
                 request) { return stub_->GetVpnConnection(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>
EdgeContainerConnectionImpl::CreateVpnConnection(
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgecontainer::v1::VpnConnection>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
              request) {
        return stub->AsyncCreateVpnConnection(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::edgecontainer::v1::VpnConnection>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateVpnConnection(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
EdgeContainerConnectionImpl::DeleteVpnConnection(
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::edgecontainer::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
              request) {
        return stub->AsyncDeleteVpnConnection(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::edgecontainer::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteVpnConnection(request),
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google
