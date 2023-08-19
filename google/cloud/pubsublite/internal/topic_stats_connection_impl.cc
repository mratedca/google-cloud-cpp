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
// source: google/cloud/pubsublite/v1/topic_stats.proto

#include "google/cloud/pubsublite/internal/topic_stats_connection_impl.h"
#include "google/cloud/pubsublite/internal/topic_stats_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<pubsublite::TopicStatsServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<pubsublite::TopicStatsServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<pubsublite::TopicStatsServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<pubsublite::TopicStatsServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<pubsublite::TopicStatsServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

TopicStatsServiceConnectionImpl::TopicStatsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<pubsublite_internal::TopicStatsServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), TopicStatsServiceConnection::options())) {}

StatusOr<google::cloud::pubsublite::v1::ComputeMessageStatsResponse>
TopicStatsServiceConnectionImpl::ComputeMessageStats(
    google::cloud::pubsublite::v1::ComputeMessageStatsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ComputeMessageStats(request),
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ComputeMessageStatsRequest const&
                 request) {
        return stub_->ComputeMessageStats(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::pubsublite::v1::ComputeHeadCursorResponse>
TopicStatsServiceConnectionImpl::ComputeHeadCursor(
    google::cloud::pubsublite::v1::ComputeHeadCursorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ComputeHeadCursor(request),
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ComputeHeadCursorRequest const&
                 request) {
        return stub_->ComputeHeadCursor(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::pubsublite::v1::ComputeTimeCursorResponse>
TopicStatsServiceConnectionImpl::ComputeTimeCursor(
    google::cloud::pubsublite::v1::ComputeTimeCursorRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ComputeTimeCursor(request),
      [this](grpc::ClientContext& context,
             google::cloud::pubsublite::v1::ComputeTimeCursorRequest const&
                 request) {
        return stub_->ComputeTimeCursor(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
