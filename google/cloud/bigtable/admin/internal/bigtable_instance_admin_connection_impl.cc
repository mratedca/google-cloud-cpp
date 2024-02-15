// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_connection_impl.h"
#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<bigtable_admin::BigtableInstanceAdminRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<bigtable_admin::BigtableInstanceAdminRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<bigtable_admin::BigtableInstanceAdminBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    bigtable_admin::BigtableInstanceAdminConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<bigtable_admin::
               BigtableInstanceAdminConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<bigtable_admin::BigtableInstanceAdminPollingPolicyOption>()
      ->clone();
}

}  // namespace

BigtableInstanceAdminConnectionImpl::BigtableInstanceAdminConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigtable_admin_internal::BigtableInstanceAdminStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), BigtableInstanceAdminConnection::options())) {}

future<StatusOr<google::bigtable::admin::v2::Instance>>
BigtableInstanceAdminConnectionImpl::CreateInstance(
    google::bigtable::admin::v2::CreateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::bigtable::admin::v2::CreateInstanceRequest const& request) {
        return stub->AsyncCreateInstance(cq, std::move(context), options,
                                         request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::bigtable::admin::v2::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminConnectionImpl::GetInstance(
    google::bigtable::admin::v2::GetInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInstance(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GetInstanceRequest const& request) {
        return stub_->GetInstance(context, request);
      },
      request, __func__);
}

StatusOr<google::bigtable::admin::v2::ListInstancesResponse>
BigtableInstanceAdminConnectionImpl::ListInstances(
    google::bigtable::admin::v2::ListInstancesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ListInstances(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::ListInstancesRequest const& request) {
        return stub_->ListInstances(context, request);
      },
      request, __func__);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminConnectionImpl::UpdateInstance(
    google::bigtable::admin::v2::Instance const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateInstance(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::Instance const& request) {
        return stub_->UpdateInstance(context, request);
      },
      request, __func__);
}

future<StatusOr<google::bigtable::admin::v2::Instance>>
BigtableInstanceAdminConnectionImpl::PartialUpdateInstance(
    google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PartialUpdateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::bigtable::admin::v2::PartialUpdateInstanceRequest const&
              request) {
        return stub->AsyncPartialUpdateInstance(cq, std::move(context), options,
                                                request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::bigtable::admin::v2::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

Status BigtableInstanceAdminConnectionImpl::DeleteInstance(
    google::bigtable::admin::v2::DeleteInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteInstance(request),
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::DeleteInstanceRequest const& request) {
        return stub_->DeleteInstance(context, request);
      },
      request, __func__);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminConnectionImpl::CreateCluster(
    google::bigtable::admin::v2::CreateClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateCluster(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::Cluster>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::bigtable::admin::v2::CreateClusterRequest const& request) {
        return stub->AsyncCreateCluster(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::bigtable::admin::v2::Cluster>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::bigtable::admin::v2::Cluster>
BigtableInstanceAdminConnectionImpl::GetCluster(
    google::bigtable::admin::v2::GetClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetCluster(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GetClusterRequest const& request) {
        return stub_->GetCluster(context, request);
      },
      request, __func__);
}

StatusOr<google::bigtable::admin::v2::ListClustersResponse>
BigtableInstanceAdminConnectionImpl::ListClusters(
    google::bigtable::admin::v2::ListClustersRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ListClusters(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::ListClustersRequest const& request) {
        return stub_->ListClusters(context, request);
      },
      request, __func__);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminConnectionImpl::UpdateCluster(
    google::bigtable::admin::v2::Cluster const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateCluster(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::Cluster>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::bigtable::admin::v2::Cluster const& request) {
        return stub->AsyncUpdateCluster(cq, std::move(context), options,
                                        request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::bigtable::admin::v2::Cluster>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminConnectionImpl::PartialUpdateCluster(
    google::bigtable::admin::v2::PartialUpdateClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PartialUpdateCluster(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::Cluster>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::bigtable::admin::v2::PartialUpdateClusterRequest const&
              request) {
        return stub->AsyncPartialUpdateCluster(cq, std::move(context), options,
                                               request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::bigtable::admin::v2::Cluster>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

Status BigtableInstanceAdminConnectionImpl::DeleteCluster(
    google::bigtable::admin::v2::DeleteClusterRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteCluster(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::DeleteClusterRequest const& request) {
        return stub_->DeleteCluster(context, request);
      },
      request, __func__);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminConnectionImpl::CreateAppProfile(
    google::bigtable::admin::v2::CreateAppProfileRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAppProfile(request),
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::CreateAppProfileRequest const& request) {
        return stub_->CreateAppProfile(context, request);
      },
      request, __func__);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminConnectionImpl::GetAppProfile(
    google::bigtable::admin::v2::GetAppProfileRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAppProfile(request),
      [this](grpc::ClientContext& context,
             google::bigtable::admin::v2::GetAppProfileRequest const& request) {
        return stub_->GetAppProfile(context, request);
      },
      request, __func__);
}

StreamRange<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminConnectionImpl::ListAppProfiles(
    google::bigtable::admin::v2::ListAppProfilesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAppProfiles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::bigtable::admin::v2::AppProfile>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<bigtable_admin::BigtableInstanceAdminRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::bigtable::admin::v2::ListAppProfilesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::bigtable::admin::v2::ListAppProfilesRequest const&
                       request) {
              return stub->ListAppProfiles(context, request);
            },
            r, function_name);
      },
      [](google::bigtable::admin::v2::ListAppProfilesResponse r) {
        std::vector<google::bigtable::admin::v2::AppProfile> result(
            r.app_profiles().size());
        auto& messages = *r.mutable_app_profiles();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::bigtable::admin::v2::AppProfile>>
BigtableInstanceAdminConnectionImpl::UpdateAppProfile(
    google::bigtable::admin::v2::UpdateAppProfileRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateAppProfile(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::bigtable::admin::v2::AppProfile>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::bigtable::admin::v2::UpdateAppProfileRequest const& request) {
        return stub->AsyncUpdateAppProfile(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::bigtable::admin::v2::AppProfile>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

Status BigtableInstanceAdminConnectionImpl::DeleteAppProfile(
    google::bigtable::admin::v2::DeleteAppProfileRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAppProfile(request),
      [this](
          grpc::ClientContext& context,
          google::bigtable::admin::v2::DeleteAppProfileRequest const& request) {
        return stub_->DeleteAppProfile(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy>
BigtableInstanceAdminConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy>
BigtableInstanceAdminConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableInstanceAdminConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

StreamRange<google::bigtable::admin::v2::HotTablet>
BigtableInstanceAdminConnectionImpl::ListHotTablets(
    google::bigtable::admin::v2::ListHotTabletsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListHotTablets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::bigtable::admin::v2::HotTablet>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<bigtable_admin::BigtableInstanceAdminRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::bigtable::admin::v2::ListHotTabletsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::bigtable::admin::v2::ListHotTabletsRequest const&
                       request) {
              return stub->ListHotTablets(context, request);
            },
            r, function_name);
      },
      [](google::bigtable::admin::v2::ListHotTabletsResponse r) {
        std::vector<google::bigtable::admin::v2::HotTablet> result(
            r.hot_tablets().size());
        auto& messages = *r.mutable_hot_tablets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
