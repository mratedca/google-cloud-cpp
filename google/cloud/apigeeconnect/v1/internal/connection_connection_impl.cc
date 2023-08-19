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
// source: google/cloud/apigeeconnect/v1/connection.proto

#include "google/cloud/apigeeconnect/v1/internal/connection_connection_impl.h"
#include "google/cloud/apigeeconnect/v1/internal/connection_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeconnect_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<apigeeconnect_v1::ConnectionServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<apigeeconnect_v1::ConnectionServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<apigeeconnect_v1::ConnectionServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<apigeeconnect_v1::ConnectionServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<apigeeconnect_v1::
               ConnectionServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ConnectionServiceConnectionImpl::ConnectionServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<apigeeconnect_v1_internal::ConnectionServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ConnectionServiceConnection::options())) {}

StreamRange<google::cloud::apigeeconnect::v1::Connection>
ConnectionServiceConnectionImpl::ListConnections(
    google::cloud::apigeeconnect::v1::ListConnectionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListConnections(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::apigeeconnect::v1::Connection>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apigeeconnect_v1::ConnectionServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::apigeeconnect::v1::ListConnectionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::apigeeconnect::v1::ListConnectionsRequest const&
                    request) {
              return stub->ListConnections(context, request);
            },
            r, function_name);
      },
      [](google::cloud::apigeeconnect::v1::ListConnectionsResponse r) {
        std::vector<google::cloud::apigeeconnect::v1::Connection> result(
            r.connections().size());
        auto& messages = *r.mutable_connections();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeconnect_v1_internal
}  // namespace cloud
}  // namespace google
