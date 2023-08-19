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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/storage/v1/internal/bigquery_read_connection_impl.h"
#include "google/cloud/bigquery/storage/v1/internal/bigquery_read_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/resumable_streaming_read_rpc.h"
#include "google/cloud/internal/retry_loop.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_storage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<bigquery_storage_v1::BigQueryReadRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<bigquery_storage_v1::BigQueryReadRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<bigquery_storage_v1::BigQueryReadBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<bigquery_storage_v1::BigQueryReadConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<bigquery_storage_v1::BigQueryReadConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

BigQueryReadConnectionImpl::BigQueryReadConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigquery_storage_v1_internal::BigQueryReadStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      BigQueryReadConnection::options())) {}

StatusOr<google::cloud::bigquery::storage::v1::ReadSession>
BigQueryReadConnectionImpl::CreateReadSession(
    google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateReadSession(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&
              request) { return stub_->CreateReadSession(context, request); },
      request, __func__);
}

StreamRange<google::cloud::bigquery::storage::v1::ReadRowsResponse>
BigQueryReadConnectionImpl::ReadRows(
    google::cloud::bigquery::storage::v1::ReadRowsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto factory =
      [stub =
           stub_](google::cloud::bigquery::storage::v1::ReadRowsRequest const&
                      request) {
        return stub->ReadRows(std::make_shared<grpc::ClientContext>(), request);
      };
  auto resumable = internal::MakeResumableStreamingReadRpc<
      google::cloud::bigquery::storage::v1::ReadRowsResponse,
      google::cloud::bigquery::storage::v1::ReadRowsRequest>(
      retry_policy(*current), backoff_policy(*current),
      [](std::chrono::milliseconds) {}, factory,
      BigQueryReadReadRowsStreamingUpdater, request);
  return internal::MakeStreamRange(
      internal::StreamReader<
          google::cloud::bigquery::storage::v1::ReadRowsResponse>(
          [resumable] { return resumable->Read(); }));
}
StatusOr<google::cloud::bigquery::storage::v1::SplitReadStreamResponse>
BigQueryReadConnectionImpl::SplitReadStream(
    google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SplitReadStream(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&
                 request) { return stub_->SplitReadStream(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1_internal
}  // namespace cloud
}  // namespace google
