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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/firewall_connection_impl.h"
#include "google/cloud/appengine/v1/internal/firewall_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<appengine_v1::FirewallRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<appengine_v1::FirewallRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<appengine_v1::FirewallBackoffPolicyOption>()->clone();
}

std::unique_ptr<appengine_v1::FirewallConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<appengine_v1::FirewallConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

FirewallConnectionImpl::FirewallConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<appengine_v1_internal::FirewallStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      FirewallConnection::options())) {}

StreamRange<google::appengine::v1::FirewallRule>
FirewallConnectionImpl::ListIngressRules(
    google::appengine::v1::ListIngressRulesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListIngressRules(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::appengine::v1::FirewallRule>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<appengine_v1::FirewallRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::appengine::v1::ListIngressRulesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::appengine::v1::ListIngressRulesRequest const& request) {
              return stub->ListIngressRules(context, request);
            },
            r, function_name);
      },
      [](google::appengine::v1::ListIngressRulesResponse r) {
        std::vector<google::appengine::v1::FirewallRule> result(
            r.ingress_rules().size());
        auto& messages = *r.mutable_ingress_rules();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
FirewallConnectionImpl::BatchUpdateIngressRules(
    google::appengine::v1::BatchUpdateIngressRulesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchUpdateIngressRules(request),
      [this](grpc::ClientContext& context,
             google::appengine::v1::BatchUpdateIngressRulesRequest const&
                 request) {
        return stub_->BatchUpdateIngressRules(context, request);
      },
      request, __func__);
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallConnectionImpl::CreateIngressRule(
    google::appengine::v1::CreateIngressRuleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateIngressRule(request),
      [this](grpc::ClientContext& context,
             google::appengine::v1::CreateIngressRuleRequest const& request) {
        return stub_->CreateIngressRule(context, request);
      },
      request, __func__);
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallConnectionImpl::GetIngressRule(
    google::appengine::v1::GetIngressRuleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIngressRule(request),
      [this](grpc::ClientContext& context,
             google::appengine::v1::GetIngressRuleRequest const& request) {
        return stub_->GetIngressRule(context, request);
      },
      request, __func__);
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallConnectionImpl::UpdateIngressRule(
    google::appengine::v1::UpdateIngressRuleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateIngressRule(request),
      [this](grpc::ClientContext& context,
             google::appengine::v1::UpdateIngressRuleRequest const& request) {
        return stub_->UpdateIngressRule(context, request);
      },
      request, __func__);
}

Status FirewallConnectionImpl::DeleteIngressRule(
    google::appengine::v1::DeleteIngressRuleRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteIngressRule(request),
      [this](grpc::ClientContext& context,
             google::appengine::v1::DeleteIngressRuleRequest const& request) {
        return stub_->DeleteIngressRule(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
