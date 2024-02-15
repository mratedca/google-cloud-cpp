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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#include "google/cloud/aiplatform/v1/internal/metadata_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/metadata_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<aiplatform_v1::MetadataServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<aiplatform_v1::MetadataServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<aiplatform_v1::MetadataServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<aiplatform_v1::MetadataServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<aiplatform_v1::MetadataServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<aiplatform_v1::MetadataServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

MetadataServiceConnectionImpl::MetadataServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::MetadataServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      MetadataServiceConnection::options())) {}

future<StatusOr<google::cloud::aiplatform::v1::MetadataStore>>
MetadataServiceConnectionImpl::CreateMetadataStore(
    google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateMetadataStore(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::MetadataStore>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::CreateMetadataStoreRequest const&
              request) {
        return stub->AsyncCreateMetadataStore(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::MetadataStore>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::MetadataStore>
MetadataServiceConnectionImpl::GetMetadataStore(
    google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetMetadataStore(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetMetadataStoreRequest const&
                 request) { return stub_->GetMetadataStore(context, request); },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::MetadataStore>
MetadataServiceConnectionImpl::ListMetadataStores(
    google::cloud::aiplatform::v1::ListMetadataStoresRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListMetadataStores(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::MetadataStore>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::MetadataServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListMetadataStoresRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::aiplatform::v1::ListMetadataStoresRequest const&
                    request) {
              return stub->ListMetadataStores(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListMetadataStoresResponse r) {
        std::vector<google::cloud::aiplatform::v1::MetadataStore> result(
            r.metadata_stores().size());
        auto& messages = *r.mutable_metadata_stores();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<
    google::cloud::aiplatform::v1::DeleteMetadataStoreOperationMetadata>>
MetadataServiceConnectionImpl::DeleteMetadataStore(
    google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteMetadataStore(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteMetadataStoreOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const&
              request) {
        return stub->AsyncDeleteMetadataStore(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::DeleteMetadataStoreOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceConnectionImpl::CreateArtifact(
    google::cloud::aiplatform::v1::CreateArtifactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateArtifact(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::CreateArtifactRequest const& request) {
        return stub_->CreateArtifact(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceConnectionImpl::GetArtifact(
    google::cloud::aiplatform::v1::GetArtifactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetArtifact(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetArtifactRequest const& request) {
        return stub_->GetArtifact(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Artifact>
MetadataServiceConnectionImpl::ListArtifacts(
    google::cloud::aiplatform::v1::ListArtifactsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListArtifacts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Artifact>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::MetadataServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListArtifactsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListArtifactsRequest const&
                       request) {
              return stub->ListArtifacts(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListArtifactsResponse r) {
        std::vector<google::cloud::aiplatform::v1::Artifact> result(
            r.artifacts().size());
        auto& messages = *r.mutable_artifacts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceConnectionImpl::UpdateArtifact(
    google::cloud::aiplatform::v1::UpdateArtifactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateArtifact(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::UpdateArtifactRequest const& request) {
        return stub_->UpdateArtifact(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
MetadataServiceConnectionImpl::DeleteArtifact(
    google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteArtifact(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) {
        return stub->AsyncDeleteArtifact(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::PurgeArtifactsResponse>>
MetadataServiceConnectionImpl::PurgeArtifacts(
    google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeArtifacts(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::PurgeArtifactsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) {
        return stub->AsyncPurgeArtifacts(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::PurgeArtifactsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceConnectionImpl::CreateContext(
    google::cloud::aiplatform::v1::CreateContextRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateContext(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::CreateContextRequest const& request) {
        return stub_->CreateContext(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceConnectionImpl::GetContext(
    google::cloud::aiplatform::v1::GetContextRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetContext(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetContextRequest const& request) {
        return stub_->GetContext(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Context>
MetadataServiceConnectionImpl::ListContexts(
    google::cloud::aiplatform::v1::ListContextsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListContexts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Context>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::MetadataServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListContextsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListContextsRequest const&
                       request) {
              return stub->ListContexts(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListContextsResponse r) {
        std::vector<google::cloud::aiplatform::v1::Context> result(
            r.contexts().size());
        auto& messages = *r.mutable_contexts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceConnectionImpl::UpdateContext(
    google::cloud::aiplatform::v1::UpdateContextRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateContext(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::UpdateContextRequest const& request) {
        return stub_->UpdateContext(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
MetadataServiceConnectionImpl::DeleteContext(
    google::cloud::aiplatform::v1::DeleteContextRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteContext(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteContextRequest const& request) {
        return stub->AsyncDeleteContext(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::PurgeContextsResponse>>
MetadataServiceConnectionImpl::PurgeContexts(
    google::cloud::aiplatform::v1::PurgeContextsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeContexts(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::PurgeContextsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::PurgeContextsRequest const& request) {
        return stub->AsyncPurgeContexts(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::PurgeContextsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<
    google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
MetadataServiceConnectionImpl::AddContextArtifactsAndExecutions(
    google::cloud::aiplatform::v1::
        AddContextArtifactsAndExecutionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddContextArtifactsAndExecutions(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 AddContextArtifactsAndExecutionsRequest const& request) {
        return stub_->AddContextArtifactsAndExecutions(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
MetadataServiceConnectionImpl::AddContextChildren(
    google::cloud::aiplatform::v1::AddContextChildrenRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddContextChildren(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::AddContextChildrenRequest const&
                 request) {
        return stub_->AddContextChildren(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
MetadataServiceConnectionImpl::RemoveContextChildren(
    google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RemoveContextChildren(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
                 request) {
        return stub_->RemoveContextChildren(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceConnectionImpl::QueryContextLineageSubgraph(
    google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->QueryContextLineageSubgraph(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 QueryContextLineageSubgraphRequest const& request) {
        return stub_->QueryContextLineageSubgraph(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceConnectionImpl::CreateExecution(
    google::cloud::aiplatform::v1::CreateExecutionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateExecution(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CreateExecutionRequest const&
                 request) { return stub_->CreateExecution(context, request); },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceConnectionImpl::GetExecution(
    google::cloud::aiplatform::v1::GetExecutionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetExecution(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::GetExecutionRequest const& request) {
        return stub_->GetExecution(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Execution>
MetadataServiceConnectionImpl::ListExecutions(
    google::cloud::aiplatform::v1::ListExecutionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListExecutions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Execution>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::MetadataServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListExecutionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListExecutionsRequest const&
                       request) {
              return stub->ListExecutions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListExecutionsResponse r) {
        std::vector<google::cloud::aiplatform::v1::Execution> result(
            r.executions().size());
        auto& messages = *r.mutable_executions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceConnectionImpl::UpdateExecution(
    google::cloud::aiplatform::v1::UpdateExecutionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateExecution(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::UpdateExecutionRequest const&
                 request) { return stub_->UpdateExecution(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
MetadataServiceConnectionImpl::DeleteExecution(
    google::cloud::aiplatform::v1::DeleteExecutionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteExecution(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteExecutionRequest const&
              request) {
        return stub->AsyncDeleteExecution(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::PurgeExecutionsResponse>>
MetadataServiceConnectionImpl::PurgeExecutions(
    google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeExecutions(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::PurgeExecutionsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::PurgeExecutionsRequest const&
              request) {
        return stub->AsyncPurgeExecutions(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::PurgeExecutionsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
MetadataServiceConnectionImpl::AddExecutionEvents(
    google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddExecutionEvents(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::AddExecutionEventsRequest const&
                 request) {
        return stub_->AddExecutionEvents(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceConnectionImpl::QueryExecutionInputsAndOutputs(
    google::cloud::aiplatform::v1::QueryExecutionInputsAndOutputsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->QueryExecutionInputsAndOutputs(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 QueryExecutionInputsAndOutputsRequest const& request) {
        return stub_->QueryExecutionInputsAndOutputs(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceConnectionImpl::CreateMetadataSchema(
    google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateMetadataSchema(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const&
                 request) {
        return stub_->CreateMetadataSchema(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceConnectionImpl::GetMetadataSchema(
    google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetMetadataSchema(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetMetadataSchemaRequest const&
                 request) {
        return stub_->GetMetadataSchema(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceConnectionImpl::ListMetadataSchemas(
    google::cloud::aiplatform::v1::ListMetadataSchemasRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListMetadataSchemas(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::MetadataSchema>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::MetadataServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListMetadataSchemasRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::aiplatform::v1::ListMetadataSchemasRequest const&
                    request) {
              return stub->ListMetadataSchemas(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListMetadataSchemasResponse r) {
        std::vector<google::cloud::aiplatform::v1::MetadataSchema> result(
            r.metadata_schemas().size());
        auto& messages = *r.mutable_metadata_schemas();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceConnectionImpl::QueryArtifactLineageSubgraph(
    google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->QueryArtifactLineageSubgraph(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::
                 QueryArtifactLineageSubgraphRequest const& request) {
        return stub_->QueryArtifactLineageSubgraph(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
