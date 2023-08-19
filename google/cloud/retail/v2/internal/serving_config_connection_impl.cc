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
// source: google/cloud/retail/v2/serving_config_service.proto

#include "google/cloud/retail/v2/internal/serving_config_connection_impl.h"
#include "google/cloud/retail/v2/internal/serving_config_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<retail_v2::ServingConfigServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<retail_v2::ServingConfigServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<retail_v2::ServingConfigServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<retail_v2::ServingConfigServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<retail_v2::ServingConfigServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ServingConfigServiceConnectionImpl::ServingConfigServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<retail_v2_internal::ServingConfigServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ServingConfigServiceConnection::options())) {}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceConnectionImpl::CreateServingConfig(
    google::cloud::retail::v2::CreateServingConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateServingConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::CreateServingConfigRequest const&
                 request) {
        return stub_->CreateServingConfig(context, request);
      },
      request, __func__);
}

Status ServingConfigServiceConnectionImpl::DeleteServingConfig(
    google::cloud::retail::v2::DeleteServingConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteServingConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::DeleteServingConfigRequest const&
                 request) {
        return stub_->DeleteServingConfig(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceConnectionImpl::UpdateServingConfig(
    google::cloud::retail::v2::UpdateServingConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateServingConfig(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::UpdateServingConfigRequest const&
                 request) {
        return stub_->UpdateServingConfig(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceConnectionImpl::GetServingConfig(
    google::cloud::retail::v2::GetServingConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetServingConfig(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::retail::v2::GetServingConfigRequest const& request) {
        return stub_->GetServingConfig(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceConnectionImpl::ListServingConfigs(
    google::cloud::retail::v2::ListServingConfigsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListServingConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::retail::v2::ServingConfig>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<retail_v2::ServingConfigServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::retail::v2::ListServingConfigsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::retail::v2::ListServingConfigsRequest const&
                       request) {
              return stub->ListServingConfigs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::retail::v2::ListServingConfigsResponse r) {
        std::vector<google::cloud::retail::v2::ServingConfig> result(
            r.serving_configs().size());
        auto& messages = *r.mutable_serving_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceConnectionImpl::AddControl(
    google::cloud::retail::v2::AddControlRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AddControl(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::AddControlRequest const& request) {
        return stub_->AddControl(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::retail::v2::ServingConfig>
ServingConfigServiceConnectionImpl::RemoveControl(
    google::cloud::retail::v2::RemoveControlRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RemoveControl(request),
      [this](grpc::ClientContext& context,
             google::cloud::retail::v2::RemoveControlRequest const& request) {
        return stub_->RemoveControl(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
