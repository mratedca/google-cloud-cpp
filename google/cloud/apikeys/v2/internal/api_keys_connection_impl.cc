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
// source: google/api/apikeys/v2/apikeys.proto

#include "google/cloud/apikeys/v2/internal/api_keys_connection_impl.h"
#include "google/cloud/apikeys/v2/internal/api_keys_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace apikeys_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<apikeys_v2::ApiKeysRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<apikeys_v2::ApiKeysRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<apikeys_v2::ApiKeysBackoffPolicyOption>()->clone();
}

std::unique_ptr<apikeys_v2::ApiKeysConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<apikeys_v2::ApiKeysConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<apikeys_v2::ApiKeysPollingPolicyOption>()->clone();
}

}  // namespace

ApiKeysConnectionImpl::ApiKeysConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<apikeys_v2_internal::ApiKeysStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ApiKeysConnection::options())) {}

future<StatusOr<google::api::apikeys::v2::Key>>
ApiKeysConnectionImpl::CreateKey(
    google::api::apikeys::v2::CreateKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent = idempotency_policy(*current)->CreateKey(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::apikeys::v2::Key>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::api::apikeys::v2::CreateKeyRequest const& request) {
        return stub->AsyncCreateKey(cq, std::move(context), options, request);
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
          google::api::apikeys::v2::Key>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::api::apikeys::v2::Key> ApiKeysConnectionImpl::ListKeys(
    google::api::apikeys::v2::ListKeysRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListKeys(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::apikeys::v2::Key>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<apikeys_v2::ApiKeysRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::api::apikeys::v2::ListKeysRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::api::apikeys::v2::ListKeysRequest const& request) {
              return stub->ListKeys(context, request);
            },
            r, function_name);
      },
      [](google::api::apikeys::v2::ListKeysResponse r) {
        std::vector<google::api::apikeys::v2::Key> result(r.keys().size());
        auto& messages = *r.mutable_keys();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::apikeys::v2::Key> ApiKeysConnectionImpl::GetKey(
    google::api::apikeys::v2::GetKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetKey(request),
      [this](grpc::ClientContext& context,
             google::api::apikeys::v2::GetKeyRequest const& request) {
        return stub_->GetKey(context, request);
      },
      request, __func__);
}

StatusOr<google::api::apikeys::v2::GetKeyStringResponse>
ApiKeysConnectionImpl::GetKeyString(
    google::api::apikeys::v2::GetKeyStringRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetKeyString(request),
      [this](grpc::ClientContext& context,
             google::api::apikeys::v2::GetKeyStringRequest const& request) {
        return stub_->GetKeyString(context, request);
      },
      request, __func__);
}

future<StatusOr<google::api::apikeys::v2::Key>>
ApiKeysConnectionImpl::UpdateKey(
    google::api::apikeys::v2::UpdateKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent = idempotency_policy(*current)->UpdateKey(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::apikeys::v2::Key>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::api::apikeys::v2::UpdateKeyRequest const& request) {
        return stub->AsyncUpdateKey(cq, std::move(context), options, request);
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
          google::api::apikeys::v2::Key>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::api::apikeys::v2::Key>>
ApiKeysConnectionImpl::DeleteKey(
    google::api::apikeys::v2::DeleteKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent = idempotency_policy(*current)->DeleteKey(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::apikeys::v2::Key>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::api::apikeys::v2::DeleteKeyRequest const& request) {
        return stub->AsyncDeleteKey(cq, std::move(context), options, request);
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
          google::api::apikeys::v2::Key>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::api::apikeys::v2::Key>>
ApiKeysConnectionImpl::UndeleteKey(
    google::api::apikeys::v2::UndeleteKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UndeleteKey(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::apikeys::v2::Key>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::api::apikeys::v2::UndeleteKeyRequest const& request) {
        return stub->AsyncUndeleteKey(cq, std::move(context), options, request);
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
          google::api::apikeys::v2::Key>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::api::apikeys::v2::LookupKeyResponse>
ApiKeysConnectionImpl::LookupKey(
    google::api::apikeys::v2::LookupKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->LookupKey(request),
      [this](grpc::ClientContext& context,
             google::api::apikeys::v2::LookupKeyRequest const& request) {
        return stub_->LookupKey(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apikeys_v2_internal
}  // namespace cloud
}  // namespace google
