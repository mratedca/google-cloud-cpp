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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/featurestore_option_defaults.h"
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

std::unique_ptr<aiplatform_v1::FeaturestoreServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<aiplatform_v1::FeaturestoreServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<aiplatform_v1::FeaturestoreServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<aiplatform_v1::FeaturestoreServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<
          aiplatform_v1::FeaturestoreServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<aiplatform_v1::FeaturestoreServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

FeaturestoreServiceConnectionImpl::FeaturestoreServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::FeaturestoreServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), FeaturestoreServiceConnection::options())) {}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceConnectionImpl::CreateFeaturestore(
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::Featurestore>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::CreateFeaturestoreRequest const&
              request) {
        return stub->AsyncCreateFeaturestore(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::Featurestore>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateFeaturestore(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceConnectionImpl::GetFeaturestore(
    google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetFeaturestore(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetFeaturestoreRequest const&
                 request) { return stub_->GetFeaturestore(context, request); },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceConnectionImpl::ListFeaturestores(
    google::cloud::aiplatform::v1::ListFeaturestoresRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListFeaturestores(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Featurestore>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::FeaturestoreServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListFeaturestoresRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::aiplatform::v1::ListFeaturestoresRequest const&
                    request) {
              return stub->ListFeaturestores(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListFeaturestoresResponse r) {
        std::vector<google::cloud::aiplatform::v1::Featurestore> result(
            r.featurestores().size());
        auto& messages = *r.mutable_featurestores();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceConnectionImpl::UpdateFeaturestore(
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::Featurestore>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const&
              request) {
        return stub->AsyncUpdateFeaturestore(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::Featurestore>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateFeaturestore(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceConnectionImpl::DeleteFeaturestore(
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const&
              request) {
        return stub->AsyncDeleteFeaturestore(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteFeaturestore(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
FeaturestoreServiceConnectionImpl::CreateEntityType(
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::EntityType>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::CreateEntityTypeRequest const&
              request) {
        return stub->AsyncCreateEntityType(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::EntityType>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateEntityType(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceConnectionImpl::GetEntityType(
    google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetEntityType(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
        return stub_->GetEntityType(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceConnectionImpl::ListEntityTypes(
    google::cloud::aiplatform::v1::ListEntityTypesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListEntityTypes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::EntityType>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::FeaturestoreServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListEntityTypesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListEntityTypesRequest const&
                       request) {
              return stub->ListEntityTypes(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListEntityTypesResponse r) {
        std::vector<google::cloud::aiplatform::v1::EntityType> result(
            r.entity_types().size());
        auto& messages = *r.mutable_entity_types();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceConnectionImpl::UpdateEntityType(
    google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateEntityType(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::UpdateEntityTypeRequest const&
                 request) { return stub_->UpdateEntityType(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceConnectionImpl::DeleteEntityType(
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::DeleteEntityTypeRequest const&
              request) {
        return stub->AsyncDeleteEntityType(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteEntityType(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeaturestoreServiceConnectionImpl::CreateFeature(
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::Feature>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
        return stub->AsyncCreateFeature(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::Feature>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateFeature(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
FeaturestoreServiceConnectionImpl::BatchCreateFeatures(
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const&
              request) {
        return stub->AsyncBatchCreateFeatures(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchCreateFeatures(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceConnectionImpl::GetFeature(
    google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetFeature(request),
      [this](grpc::ClientContext& context,
             google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
        return stub_->GetFeature(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceConnectionImpl::ListFeatures(
    google::cloud::aiplatform::v1::ListFeaturesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListFeatures(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Feature>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::FeaturestoreServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::ListFeaturesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::ListFeaturesRequest const&
                       request) {
              return stub->ListFeatures(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListFeaturesResponse r) {
        std::vector<google::cloud::aiplatform::v1::Feature> result(
            r.features().size());
        auto& messages = *r.mutable_features();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceConnectionImpl::UpdateFeature(
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateFeature(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
        return stub_->UpdateFeature(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceConnectionImpl::DeleteFeature(
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
        return stub->AsyncDeleteFeature(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteFeature(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
FeaturestoreServiceConnectionImpl::ImportFeatureValues(
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::ImportFeatureValuesResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::ImportFeatureValuesRequest const&
              request) {
        return stub->AsyncImportFeatureValues(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::ImportFeatureValuesResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportFeatureValues(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
FeaturestoreServiceConnectionImpl::BatchReadFeatureValues(
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
              request) {
        return stub->AsyncBatchReadFeatureValues(cq, std::move(context),
                                                 request);
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
          google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchReadFeatureValues(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
FeaturestoreServiceConnectionImpl::ExportFeatureValues(
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::ExportFeatureValuesResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::ExportFeatureValuesRequest const&
              request) {
        return stub->AsyncExportFeatureValues(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::ExportFeatureValuesResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportFeatureValues(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
FeaturestoreServiceConnectionImpl::DeleteFeatureValues(
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const&
              request) {
        return stub->AsyncDeleteFeatureValues(cq, std::move(context), request);
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
          google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteFeatureValues(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceConnectionImpl::SearchFeatures(
    google::cloud::aiplatform::v1::SearchFeaturesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->SearchFeatures(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Feature>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::FeaturestoreServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::aiplatform::v1::SearchFeaturesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::SearchFeaturesRequest const&
                       request) {
              return stub->SearchFeatures(context, request);
            },
            r, function_name);
      },
      [](google::cloud::aiplatform::v1::SearchFeaturesResponse r) {
        std::vector<google::cloud::aiplatform::v1::Feature> result(
            r.features().size());
        auto& messages = *r.mutable_features();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
