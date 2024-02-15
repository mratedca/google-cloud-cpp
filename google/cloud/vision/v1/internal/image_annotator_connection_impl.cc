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
// source: google/cloud/vision/v1/image_annotator.proto

#include "google/cloud/vision/v1/internal/image_annotator_connection_impl.h"
#include "google/cloud/vision/v1/internal/image_annotator_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<vision_v1::ImageAnnotatorRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<vision_v1::ImageAnnotatorRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<vision_v1::ImageAnnotatorBackoffPolicyOption>()->clone();
}

std::unique_ptr<vision_v1::ImageAnnotatorConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<vision_v1::ImageAnnotatorConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<vision_v1::ImageAnnotatorPollingPolicyOption>()->clone();
}

}  // namespace

ImageAnnotatorConnectionImpl::ImageAnnotatorConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<vision_v1_internal::ImageAnnotatorStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ImageAnnotatorConnection::options())) {}

StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
ImageAnnotatorConnectionImpl::BatchAnnotateImages(
    google::cloud::vision::v1::BatchAnnotateImagesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchAnnotateImages(request),
      [this](grpc::ClientContext& context,
             google::cloud::vision::v1::BatchAnnotateImagesRequest const&
                 request) {
        return stub_->BatchAnnotateImages(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
ImageAnnotatorConnectionImpl::BatchAnnotateFiles(
    google::cloud::vision::v1::BatchAnnotateFilesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchAnnotateFiles(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::vision::v1::BatchAnnotateFilesRequest const& request) {
        return stub_->BatchAnnotateFiles(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
ImageAnnotatorConnectionImpl::AsyncBatchAnnotateImages(
    google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->AsyncBatchAnnotateImages(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const&
              request) {
        return stub->AsyncAsyncBatchAnnotateImages(cq, std::move(context),
                                                   options, request);
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
          google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
ImageAnnotatorConnectionImpl::AsyncBatchAnnotateFiles(
    google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->AsyncBatchAnnotateFiles(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const&
              request) {
        return stub->AsyncAsyncBatchAnnotateFiles(cq, std::move(context),
                                                  options, request);
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
          google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
