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
// source: google/cloud/channel/v1/reports_service.proto

#include "google/cloud/channel/v1/internal/cloud_channel_reports_connection_impl.h"
#include "google/cloud/channel/v1/internal/cloud_channel_reports_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<channel_v1::CloudChannelReportsServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<channel_v1::CloudChannelReportsServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<channel_v1::CloudChannelReportsServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    channel_v1::CloudChannelReportsServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<channel_v1::
               CloudChannelReportsServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<channel_v1::CloudChannelReportsServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

CloudChannelReportsServiceConnectionImpl::
    CloudChannelReportsServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<channel_v1_internal::CloudChannelReportsServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          CloudChannelReportsServiceConnection::options())) {}

future<StatusOr<google::cloud::channel::v1::RunReportJobResponse>>
CloudChannelReportsServiceConnectionImpl::RunReportJob(
    google::cloud::channel::v1::RunReportJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RunReportJob(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::channel::v1::RunReportJobResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::channel::v1::RunReportJobRequest const& request) {
        return stub->AsyncRunReportJob(cq, std::move(context), options,
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
          google::cloud::channel::v1::RunReportJobResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::channel::v1::Row>
CloudChannelReportsServiceConnectionImpl::FetchReportResults(
    google::cloud::channel::v1::FetchReportResultsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->FetchReportResults(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::channel::v1::Row>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<channel_v1::CloudChannelReportsServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::channel::v1::FetchReportResultsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::channel::v1::FetchReportResultsRequest const&
                       request) {
              return stub->FetchReportResults(context, request);
            },
            r, function_name);
      },
      [](google::cloud::channel::v1::FetchReportResultsResponse r) {
        std::vector<google::cloud::channel::v1::Row> result(r.rows().size());
        auto& messages = *r.mutable_rows();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::channel::v1::Report>
CloudChannelReportsServiceConnectionImpl::ListReports(
    google::cloud::channel::v1::ListReportsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListReports(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::channel::v1::Report>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<channel_v1::CloudChannelReportsServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::channel::v1::ListReportsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::channel::v1::ListReportsRequest const& request) {
              return stub->ListReports(context, request);
            },
            r, function_name);
      },
      [](google::cloud::channel::v1::ListReportsResponse r) {
        std::vector<google::cloud::channel::v1::Report> result(
            r.reports().size());
        auto& messages = *r.mutable_reports();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
