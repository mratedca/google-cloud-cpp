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
// source: google/cloud/networksecurity/v1/network_security.proto

#include "google/cloud/networksecurity/v1/internal/network_security_connection_impl.h"
#include "google/cloud/networksecurity/v1/internal/network_security_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<networksecurity_v1::NetworkSecurityRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<networksecurity_v1::NetworkSecurityRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<networksecurity_v1::NetworkSecurityBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<networksecurity_v1::NetworkSecurityConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<networksecurity_v1::
               NetworkSecurityConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<networksecurity_v1::NetworkSecurityPollingPolicyOption>()
      ->clone();
}

}  // namespace

NetworkSecurityConnectionImpl::NetworkSecurityConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<networksecurity_v1_internal::NetworkSecurityStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      NetworkSecurityConnection::options())) {}

StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityConnectionImpl::ListAuthorizationPolicies(
    google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListAuthorizationPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networksecurity_v1::NetworkSecurityRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networksecurity::v1::
              ListAuthorizationPoliciesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::networksecurity::v1::
                       ListAuthorizationPoliciesRequest const& request) {
              return stub->ListAuthorizationPolicies(context, request);
            },
            r, function_name);
      },
      [](google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse
             r) {
        std::vector<google::cloud::networksecurity::v1::AuthorizationPolicy>
            result(r.authorization_policies().size());
        auto& messages = *r.mutable_authorization_policies();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
NetworkSecurityConnectionImpl::GetAuthorizationPolicy(
    google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetAuthorizationPolicy(request),
      [this](grpc::ClientContext& context,
             google::cloud::networksecurity::v1::
                 GetAuthorizationPolicyRequest const& request) {
        return stub_->GetAuthorizationPolicy(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityConnectionImpl::CreateAuthorizationPolicy(
    google::cloud::networksecurity::v1::CreateAuthorizationPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateAuthorizationPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::AuthorizationPolicy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         CreateAuthorizationPolicyRequest const& request) {
        return stub->AsyncCreateAuthorizationPolicy(cq, std::move(context),
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
          google::cloud::networksecurity::v1::AuthorizationPolicy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
NetworkSecurityConnectionImpl::UpdateAuthorizationPolicy(
    google::cloud::networksecurity::v1::UpdateAuthorizationPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateAuthorizationPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::AuthorizationPolicy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         UpdateAuthorizationPolicyRequest const& request) {
        return stub->AsyncUpdateAuthorizationPolicy(cq, std::move(context),
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
          google::cloud::networksecurity::v1::AuthorizationPolicy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnectionImpl::DeleteAuthorizationPolicy(
    google::cloud::networksecurity::v1::DeleteAuthorizationPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteAuthorizationPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         DeleteAuthorizationPolicyRequest const& request) {
        return stub->AsyncDeleteAuthorizationPolicy(cq, std::move(context),
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
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::networksecurity::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityConnectionImpl::ListServerTlsPolicies(
    google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListServerTlsPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networksecurity_v1::NetworkSecurityRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networksecurity::v1::
              ListServerTlsPoliciesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::networksecurity::v1::
                       ListServerTlsPoliciesRequest const& request) {
              return stub->ListServerTlsPolicies(context, request);
            },
            r, function_name);
      },
      [](google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse r) {
        std::vector<google::cloud::networksecurity::v1::ServerTlsPolicy> result(
            r.server_tls_policies().size());
        auto& messages = *r.mutable_server_tls_policies();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
NetworkSecurityConnectionImpl::GetServerTlsPolicy(
    google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetServerTlsPolicy(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
              request) { return stub_->GetServerTlsPolicy(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityConnectionImpl::CreateServerTlsPolicy(
    google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateServerTlsPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::ServerTlsPolicy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         CreateServerTlsPolicyRequest const& request) {
        return stub->AsyncCreateServerTlsPolicy(cq, std::move(context), options,
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
          google::cloud::networksecurity::v1::ServerTlsPolicy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
NetworkSecurityConnectionImpl::UpdateServerTlsPolicy(
    google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateServerTlsPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::ServerTlsPolicy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         UpdateServerTlsPolicyRequest const& request) {
        return stub->AsyncUpdateServerTlsPolicy(cq, std::move(context), options,
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
          google::cloud::networksecurity::v1::ServerTlsPolicy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnectionImpl::DeleteServerTlsPolicy(
    google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteServerTlsPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         DeleteServerTlsPolicyRequest const& request) {
        return stub->AsyncDeleteServerTlsPolicy(cq, std::move(context), options,
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
          google::cloud::networksecurity::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityConnectionImpl::ListClientTlsPolicies(
    google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListClientTlsPolicies(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networksecurity_v1::NetworkSecurityRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networksecurity::v1::
              ListClientTlsPoliciesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::networksecurity::v1::
                       ListClientTlsPoliciesRequest const& request) {
              return stub->ListClientTlsPolicies(context, request);
            },
            r, function_name);
      },
      [](google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse r) {
        std::vector<google::cloud::networksecurity::v1::ClientTlsPolicy> result(
            r.client_tls_policies().size());
        auto& messages = *r.mutable_client_tls_policies();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
NetworkSecurityConnectionImpl::GetClientTlsPolicy(
    google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetClientTlsPolicy(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
              request) { return stub_->GetClientTlsPolicy(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityConnectionImpl::CreateClientTlsPolicy(
    google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateClientTlsPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::ClientTlsPolicy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         CreateClientTlsPolicyRequest const& request) {
        return stub->AsyncCreateClientTlsPolicy(cq, std::move(context), options,
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
          google::cloud::networksecurity::v1::ClientTlsPolicy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
NetworkSecurityConnectionImpl::UpdateClientTlsPolicy(
    google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateClientTlsPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::ClientTlsPolicy>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         UpdateClientTlsPolicyRequest const& request) {
        return stub->AsyncUpdateClientTlsPolicy(cq, std::move(context), options,
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
          google::cloud::networksecurity::v1::ClientTlsPolicy>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
NetworkSecurityConnectionImpl::DeleteClientTlsPolicy(
    google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteClientTlsPolicy(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networksecurity::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::networksecurity::v1::
                         DeleteClientTlsPolicyRequest const& request) {
        return stub->AsyncDeleteClientTlsPolicy(cq, std::move(context), options,
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
          google::cloud::networksecurity::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google
