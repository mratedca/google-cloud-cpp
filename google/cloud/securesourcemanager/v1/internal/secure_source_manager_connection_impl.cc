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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_connection_impl.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace securesourcemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<securesourcemanager_v1::SecureSourceManagerRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<securesourcemanager_v1::SecureSourceManagerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<securesourcemanager_v1::SecureSourceManagerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    securesourcemanager_v1::SecureSourceManagerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<securesourcemanager_v1::
               SecureSourceManagerConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<securesourcemanager_v1::SecureSourceManagerPollingPolicyOption>()
      ->clone();
}

}  // namespace

SecureSourceManagerConnectionImpl::SecureSourceManagerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<securesourcemanager_v1_internal::SecureSourceManagerStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), SecureSourceManagerConnection::options())) {}

StreamRange<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerConnectionImpl::ListInstances(
    google::cloud::securesourcemanager::v1::ListInstancesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInstances(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::securesourcemanager::v1::Instance>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           securesourcemanager_v1::SecureSourceManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::securesourcemanager::v1::ListInstancesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::securesourcemanager::v1::
                       ListInstancesRequest const& request) {
              return stub->ListInstances(context, request);
            },
            r, function_name);
      },
      [](google::cloud::securesourcemanager::v1::ListInstancesResponse r) {
        std::vector<google::cloud::securesourcemanager::v1::Instance> result(
            r.instances().size());
        auto& messages = *r.mutable_instances();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerConnectionImpl::GetInstance(
    google::cloud::securesourcemanager::v1::GetInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInstance(request),
      [this](grpc::ClientContext& context,
             google::cloud::securesourcemanager::v1::GetInstanceRequest const&
                 request) { return stub_->GetInstance(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::securesourcemanager::v1::Instance>>
SecureSourceManagerConnectionImpl::CreateInstance(
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::securesourcemanager::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
              request) {
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
          google::cloud::securesourcemanager::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnectionImpl::DeleteInstance(
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::securesourcemanager::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
              request) {
        return stub->AsyncDeleteInstance(cq, std::move(context), options,
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::securesourcemanager::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerConnectionImpl::ListRepositories(
    google::cloud::securesourcemanager::v1::ListRepositoriesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRepositories(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::securesourcemanager::v1::Repository>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           securesourcemanager_v1::SecureSourceManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::securesourcemanager::v1::ListRepositoriesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::securesourcemanager::v1::
                       ListRepositoriesRequest const& request) {
              return stub->ListRepositories(context, request);
            },
            r, function_name);
      },
      [](google::cloud::securesourcemanager::v1::ListRepositoriesResponse r) {
        std::vector<google::cloud::securesourcemanager::v1::Repository> result(
            r.repositories().size());
        auto& messages = *r.mutable_repositories();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerConnectionImpl::GetRepository(
    google::cloud::securesourcemanager::v1::GetRepositoryRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRepository(request),
      [this](grpc::ClientContext& context,
             google::cloud::securesourcemanager::v1::GetRepositoryRequest const&
                 request) { return stub_->GetRepository(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::securesourcemanager::v1::Repository>>
SecureSourceManagerConnectionImpl::CreateRepository(
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateRepository(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::securesourcemanager::v1::Repository>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
              request) {
        return stub->AsyncCreateRepository(cq, std::move(context), options,
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
          google::cloud::securesourcemanager::v1::Repository>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnectionImpl::DeleteRepository(
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteRepository(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::securesourcemanager::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
              request) {
        return stub->AsyncDeleteRepository(cq, std::move(context), options,
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::securesourcemanager::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerConnectionImpl::GetIamPolicyRepo(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicyRepo(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicyRepo(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerConnectionImpl::SetIamPolicyRepo(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicyRepo(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicyRepo(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerConnectionImpl::TestIamPermissionsRepo(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissionsRepo(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissionsRepo(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1_internal
}  // namespace cloud
}  // namespace google
