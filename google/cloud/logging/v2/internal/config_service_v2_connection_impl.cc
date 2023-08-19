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
// source: google/logging/v2/logging_config.proto

#include "google/cloud/logging/v2/internal/config_service_v2_connection_impl.h"
#include "google/cloud/logging/v2/internal/config_service_v2_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<logging_v2::ConfigServiceV2RetryPolicy> retry_policy(
    Options const& options) {
  return options.get<logging_v2::ConfigServiceV2RetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<logging_v2::ConfigServiceV2BackoffPolicyOption>()->clone();
}

std::unique_ptr<logging_v2::ConfigServiceV2ConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<logging_v2::ConfigServiceV2ConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<logging_v2::ConfigServiceV2PollingPolicyOption>()->clone();
}

}  // namespace

ConfigServiceV2ConnectionImpl::ConfigServiceV2ConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<logging_v2_internal::ConfigServiceV2Stub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ConfigServiceV2Connection::options())) {}

StreamRange<google::logging::v2::LogBucket>
ConfigServiceV2ConnectionImpl::ListBuckets(
    google::logging::v2::ListBucketsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListBuckets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::logging::v2::LogBucket>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<logging_v2::ConfigServiceV2RetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::logging::v2::ListBucketsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::logging::v2::ListBucketsRequest const& request) {
              return stub->ListBuckets(context, request);
            },
            r, function_name);
      },
      [](google::logging::v2::ListBucketsResponse r) {
        std::vector<google::logging::v2::LogBucket> result(r.buckets().size());
        auto& messages = *r.mutable_buckets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::logging::v2::LogBucket>
ConfigServiceV2ConnectionImpl::GetBucket(
    google::logging::v2::GetBucketRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetBucket(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::GetBucketRequest const& request) {
        return stub_->GetBucket(context, request);
      },
      request, __func__);
}

future<StatusOr<google::logging::v2::LogBucket>>
ConfigServiceV2ConnectionImpl::CreateBucketAsync(
    google::logging::v2::CreateBucketRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::logging::v2::LogBucket>(
      background_->cq(), request,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::logging::v2::CreateBucketRequest const& request) {
        return stub->AsyncCreateBucketAsync(cq, std::move(context), request);
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
          google::logging::v2::LogBucket>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateBucketAsync(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::logging::v2::LogBucket>>
ConfigServiceV2ConnectionImpl::UpdateBucketAsync(
    google::logging::v2::UpdateBucketRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::logging::v2::LogBucket>(
      background_->cq(), request,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::logging::v2::UpdateBucketRequest const& request) {
        return stub->AsyncUpdateBucketAsync(cq, std::move(context), request);
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
          google::logging::v2::LogBucket>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateBucketAsync(request),
      polling_policy(*current), __func__);
}

StatusOr<google::logging::v2::LogBucket>
ConfigServiceV2ConnectionImpl::CreateBucket(
    google::logging::v2::CreateBucketRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateBucket(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::CreateBucketRequest const& request) {
        return stub_->CreateBucket(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::LogBucket>
ConfigServiceV2ConnectionImpl::UpdateBucket(
    google::logging::v2::UpdateBucketRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateBucket(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::UpdateBucketRequest const& request) {
        return stub_->UpdateBucket(context, request);
      },
      request, __func__);
}

Status ConfigServiceV2ConnectionImpl::DeleteBucket(
    google::logging::v2::DeleteBucketRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteBucket(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::DeleteBucketRequest const& request) {
        return stub_->DeleteBucket(context, request);
      },
      request, __func__);
}

Status ConfigServiceV2ConnectionImpl::UndeleteBucket(
    google::logging::v2::UndeleteBucketRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UndeleteBucket(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::UndeleteBucketRequest const& request) {
        return stub_->UndeleteBucket(context, request);
      },
      request, __func__);
}

StreamRange<google::logging::v2::LogView>
ConfigServiceV2ConnectionImpl::ListViews(
    google::logging::v2::ListViewsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListViews(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::logging::v2::LogView>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<logging_v2::ConfigServiceV2RetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::logging::v2::ListViewsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::logging::v2::ListViewsRequest const& request) {
              return stub->ListViews(context, request);
            },
            r, function_name);
      },
      [](google::logging::v2::ListViewsResponse r) {
        std::vector<google::logging::v2::LogView> result(r.views().size());
        auto& messages = *r.mutable_views();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2ConnectionImpl::GetView(
    google::logging::v2::GetViewRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetView(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::GetViewRequest const& request) {
        return stub_->GetView(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::LogView>
ConfigServiceV2ConnectionImpl::CreateView(
    google::logging::v2::CreateViewRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateView(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::CreateViewRequest const& request) {
        return stub_->CreateView(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::LogView>
ConfigServiceV2ConnectionImpl::UpdateView(
    google::logging::v2::UpdateViewRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateView(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::UpdateViewRequest const& request) {
        return stub_->UpdateView(context, request);
      },
      request, __func__);
}

Status ConfigServiceV2ConnectionImpl::DeleteView(
    google::logging::v2::DeleteViewRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteView(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::DeleteViewRequest const& request) {
        return stub_->DeleteView(context, request);
      },
      request, __func__);
}

StreamRange<google::logging::v2::LogSink>
ConfigServiceV2ConnectionImpl::ListSinks(
    google::logging::v2::ListSinksRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSinks(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::logging::v2::LogSink>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<logging_v2::ConfigServiceV2RetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::logging::v2::ListSinksRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::logging::v2::ListSinksRequest const& request) {
              return stub->ListSinks(context, request);
            },
            r, function_name);
      },
      [](google::logging::v2::ListSinksResponse r) {
        std::vector<google::logging::v2::LogSink> result(r.sinks().size());
        auto& messages = *r.mutable_sinks();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2ConnectionImpl::GetSink(
    google::logging::v2::GetSinkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSink(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::GetSinkRequest const& request) {
        return stub_->GetSink(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::LogSink>
ConfigServiceV2ConnectionImpl::CreateSink(
    google::logging::v2::CreateSinkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateSink(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::CreateSinkRequest const& request) {
        return stub_->CreateSink(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::LogSink>
ConfigServiceV2ConnectionImpl::UpdateSink(
    google::logging::v2::UpdateSinkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateSink(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::UpdateSinkRequest const& request) {
        return stub_->UpdateSink(context, request);
      },
      request, __func__);
}

Status ConfigServiceV2ConnectionImpl::DeleteSink(
    google::logging::v2::DeleteSinkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteSink(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::DeleteSinkRequest const& request) {
        return stub_->DeleteSink(context, request);
      },
      request, __func__);
}

future<StatusOr<google::logging::v2::Link>>
ConfigServiceV2ConnectionImpl::CreateLink(
    google::logging::v2::CreateLinkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::logging::v2::Link>(
      background_->cq(), request,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::logging::v2::CreateLinkRequest const& request) {
        return stub->AsyncCreateLink(cq, std::move(context), request);
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
          google::logging::v2::Link>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateLink(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::logging::v2::LinkMetadata>>
ConfigServiceV2ConnectionImpl::DeleteLink(
    google::logging::v2::DeleteLinkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::logging::v2::LinkMetadata>(
      background_->cq(), request,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::logging::v2::DeleteLinkRequest const& request) {
        return stub->AsyncDeleteLink(cq, std::move(context), request);
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
          google::logging::v2::LinkMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteLink(request),
      polling_policy(*current), __func__);
}

StreamRange<google::logging::v2::Link> ConfigServiceV2ConnectionImpl::ListLinks(
    google::logging::v2::ListLinksRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListLinks(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::logging::v2::Link>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<logging_v2::ConfigServiceV2RetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::logging::v2::ListLinksRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::logging::v2::ListLinksRequest const& request) {
              return stub->ListLinks(context, request);
            },
            r, function_name);
      },
      [](google::logging::v2::ListLinksResponse r) {
        std::vector<google::logging::v2::Link> result(r.links().size());
        auto& messages = *r.mutable_links();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::logging::v2::Link> ConfigServiceV2ConnectionImpl::GetLink(
    google::logging::v2::GetLinkRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLink(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::GetLinkRequest const& request) {
        return stub_->GetLink(context, request);
      },
      request, __func__);
}

StreamRange<google::logging::v2::LogExclusion>
ConfigServiceV2ConnectionImpl::ListExclusions(
    google::logging::v2::ListExclusionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListExclusions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::logging::v2::LogExclusion>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<logging_v2::ConfigServiceV2RetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::logging::v2::ListExclusionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::logging::v2::ListExclusionsRequest const& request) {
              return stub->ListExclusions(context, request);
            },
            r, function_name);
      },
      [](google::logging::v2::ListExclusionsResponse r) {
        std::vector<google::logging::v2::LogExclusion> result(
            r.exclusions().size());
        auto& messages = *r.mutable_exclusions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2ConnectionImpl::GetExclusion(
    google::logging::v2::GetExclusionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetExclusion(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::GetExclusionRequest const& request) {
        return stub_->GetExclusion(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2ConnectionImpl::CreateExclusion(
    google::logging::v2::CreateExclusionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateExclusion(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::CreateExclusionRequest const& request) {
        return stub_->CreateExclusion(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2ConnectionImpl::UpdateExclusion(
    google::logging::v2::UpdateExclusionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateExclusion(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::UpdateExclusionRequest const& request) {
        return stub_->UpdateExclusion(context, request);
      },
      request, __func__);
}

Status ConfigServiceV2ConnectionImpl::DeleteExclusion(
    google::logging::v2::DeleteExclusionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteExclusion(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::DeleteExclusionRequest const& request) {
        return stub_->DeleteExclusion(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2ConnectionImpl::GetCmekSettings(
    google::logging::v2::GetCmekSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetCmekSettings(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::GetCmekSettingsRequest const& request) {
        return stub_->GetCmekSettings(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2ConnectionImpl::UpdateCmekSettings(
    google::logging::v2::UpdateCmekSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateCmekSettings(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::UpdateCmekSettingsRequest const& request) {
        return stub_->UpdateCmekSettings(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::Settings>
ConfigServiceV2ConnectionImpl::GetSettings(
    google::logging::v2::GetSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSettings(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::GetSettingsRequest const& request) {
        return stub_->GetSettings(context, request);
      },
      request, __func__);
}

StatusOr<google::logging::v2::Settings>
ConfigServiceV2ConnectionImpl::UpdateSettings(
    google::logging::v2::UpdateSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateSettings(request),
      [this](grpc::ClientContext& context,
             google::logging::v2::UpdateSettingsRequest const& request) {
        return stub_->UpdateSettings(context, request);
      },
      request, __func__);
}

future<StatusOr<google::logging::v2::CopyLogEntriesResponse>>
ConfigServiceV2ConnectionImpl::CopyLogEntries(
    google::logging::v2::CopyLogEntriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::logging::v2::CopyLogEntriesResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::logging::v2::CopyLogEntriesRequest const& request) {
        return stub->AsyncCopyLogEntries(cq, std::move(context), request);
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
          google::logging::v2::CopyLogEntriesResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CopyLogEntries(request),
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
