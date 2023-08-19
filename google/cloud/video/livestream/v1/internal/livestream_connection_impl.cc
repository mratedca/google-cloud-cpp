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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/livestream/v1/internal/livestream_connection_impl.h"
#include "google/cloud/video/livestream/v1/internal/livestream_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_livestream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<video_livestream_v1::LivestreamServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<video_livestream_v1::LivestreamServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<video_livestream_v1::LivestreamServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    video_livestream_v1::LivestreamServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<video_livestream_v1::
               LivestreamServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<video_livestream_v1::LivestreamServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

LivestreamServiceConnectionImpl::LivestreamServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<video_livestream_v1_internal::LivestreamServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), LivestreamServiceConnection::options())) {}

future<StatusOr<google::cloud::video::livestream::v1::Channel>>
LivestreamServiceConnectionImpl::CreateChannel(
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::Channel>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::CreateChannelRequest const&
              request) {
        return stub->AsyncCreateChannel(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::Channel>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateChannel(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::video::livestream::v1::Channel>
LivestreamServiceConnectionImpl::ListChannels(
    google::cloud::video::livestream::v1::ListChannelsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListChannels(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::livestream::v1::Channel>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_livestream_v1::LivestreamServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::video::livestream::v1::ListChannelsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::video::livestream::v1::ListChannelsRequest const&
                    request) { return stub->ListChannels(context, request); },
            r, function_name);
      },
      [](google::cloud::video::livestream::v1::ListChannelsResponse r) {
        std::vector<google::cloud::video::livestream::v1::Channel> result(
            r.channels().size());
        auto& messages = *r.mutable_channels();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceConnectionImpl::GetChannel(
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetChannel(request),
      [this](grpc::ClientContext& context,
             google::cloud::video::livestream::v1::GetChannelRequest const&
                 request) { return stub_->GetChannel(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceConnectionImpl::DeleteChannel(
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::DeleteChannelRequest const&
              request) {
        return stub->AsyncDeleteChannel(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteChannel(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::Channel>>
LivestreamServiceConnectionImpl::UpdateChannel(
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::Channel>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::UpdateChannelRequest const&
              request) {
        return stub->AsyncUpdateChannel(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::Channel>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateChannel(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
LivestreamServiceConnectionImpl::StartChannel(
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::ChannelOperationResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::StartChannelRequest const&
              request) {
        return stub->AsyncStartChannel(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::ChannelOperationResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StartChannel(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
LivestreamServiceConnectionImpl::StopChannel(
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::ChannelOperationResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::StopChannelRequest const&
              request) {
        return stub->AsyncStopChannel(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::ChannelOperationResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StopChannel(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::Input>>
LivestreamServiceConnectionImpl::CreateInput(
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::Input>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::CreateInputRequest const&
              request) {
        return stub->AsyncCreateInput(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::Input>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateInput(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::video::livestream::v1::Input>
LivestreamServiceConnectionImpl::ListInputs(
    google::cloud::video::livestream::v1::ListInputsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInputs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::livestream::v1::Input>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_livestream_v1::LivestreamServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::video::livestream::v1::ListInputsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::video::livestream::v1::ListInputsRequest const&
                    request) { return stub->ListInputs(context, request); },
            r, function_name);
      },
      [](google::cloud::video::livestream::v1::ListInputsResponse r) {
        std::vector<google::cloud::video::livestream::v1::Input> result(
            r.inputs().size());
        auto& messages = *r.mutable_inputs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceConnectionImpl::GetInput(
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInput(request),
      [this](grpc::ClientContext& context,
             google::cloud::video::livestream::v1::GetInputRequest const&
                 request) { return stub_->GetInput(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceConnectionImpl::DeleteInput(
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::DeleteInputRequest const&
              request) {
        return stub->AsyncDeleteInput(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteInput(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::Input>>
LivestreamServiceConnectionImpl::UpdateInput(
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::Input>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::UpdateInputRequest const&
              request) {
        return stub->AsyncUpdateInput(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::Input>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateInput(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceConnectionImpl::CreateEvent(
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateEvent(request),
      [this](grpc::ClientContext& context,
             google::cloud::video::livestream::v1::CreateEventRequest const&
                 request) { return stub_->CreateEvent(context, request); },
      request, __func__);
}

StreamRange<google::cloud::video::livestream::v1::Event>
LivestreamServiceConnectionImpl::ListEvents(
    google::cloud::video::livestream::v1::ListEventsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListEvents(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::livestream::v1::Event>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_livestream_v1::LivestreamServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::video::livestream::v1::ListEventsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::video::livestream::v1::ListEventsRequest const&
                    request) { return stub->ListEvents(context, request); },
            r, function_name);
      },
      [](google::cloud::video::livestream::v1::ListEventsResponse r) {
        std::vector<google::cloud::video::livestream::v1::Event> result(
            r.events().size());
        auto& messages = *r.mutable_events();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceConnectionImpl::GetEvent(
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetEvent(request),
      [this](grpc::ClientContext& context,
             google::cloud::video::livestream::v1::GetEventRequest const&
                 request) { return stub_->GetEvent(context, request); },
      request, __func__);
}

Status LivestreamServiceConnectionImpl::DeleteEvent(
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteEvent(request),
      [this](grpc::ClientContext& context,
             google::cloud::video::livestream::v1::DeleteEventRequest const&
                 request) { return stub_->DeleteEvent(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::Asset>>
LivestreamServiceConnectionImpl::CreateAsset(
    google::cloud::video::livestream::v1::CreateAssetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::Asset>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::CreateAssetRequest const&
              request) {
        return stub->AsyncCreateAsset(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::Asset>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateAsset(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceConnectionImpl::DeleteAsset(
    google::cloud::video::livestream::v1::DeleteAssetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::DeleteAssetRequest const&
              request) {
        return stub->AsyncDeleteAsset(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteAsset(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::video::livestream::v1::Asset>
LivestreamServiceConnectionImpl::GetAsset(
    google::cloud::video::livestream::v1::GetAssetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAsset(request),
      [this](grpc::ClientContext& context,
             google::cloud::video::livestream::v1::GetAssetRequest const&
                 request) { return stub_->GetAsset(context, request); },
      request, __func__);
}

StreamRange<google::cloud::video::livestream::v1::Asset>
LivestreamServiceConnectionImpl::ListAssets(
    google::cloud::video::livestream::v1::ListAssetsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListAssets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::livestream::v1::Asset>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_livestream_v1::LivestreamServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::video::livestream::v1::ListAssetsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::video::livestream::v1::ListAssetsRequest const&
                    request) { return stub->ListAssets(context, request); },
            r, function_name);
      },
      [](google::cloud::video::livestream::v1::ListAssetsResponse r) {
        std::vector<google::cloud::video::livestream::v1::Asset> result(
            r.assets().size());
        auto& messages = *r.mutable_assets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::livestream::v1::Pool>
LivestreamServiceConnectionImpl::GetPool(
    google::cloud::video::livestream::v1::GetPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetPool(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::video::livestream::v1::GetPoolRequest const& request) {
        return stub_->GetPool(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::video::livestream::v1::Pool>>
LivestreamServiceConnectionImpl::UpdatePool(
    google::cloud::video::livestream::v1::UpdatePoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::livestream::v1::Pool>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::video::livestream::v1::UpdatePoolRequest const&
              request) {
        return stub->AsyncUpdatePool(cq, std::move(context), request);
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
          google::cloud::video::livestream::v1::Pool>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdatePool(request),
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1_internal
}  // namespace cloud
}  // namespace google
