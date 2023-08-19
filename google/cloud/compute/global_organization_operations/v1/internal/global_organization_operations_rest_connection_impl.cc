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
// source:
// google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#include "google/cloud/compute/global_organization_operations/v1/internal/global_organization_operations_rest_connection_impl.h"
#include "google/cloud/compute/global_organization_operations/v1/internal/global_organization_operations_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalOrganizationOperationsRestConnectionImpl::
    GlobalOrganizationOperationsRestConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<compute_global_organization_operations_v1_internal::
                            GlobalOrganizationOperationsRestStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          GlobalOrganizationOperationsConnection::options())) {}

Status GlobalOrganizationOperationsRestConnectionImpl::
    DeleteGlobalOrganizationOperations(
        google::cloud::cpp::compute::global_organization_operations::v1::
            DeleteGlobalOrganizationOperationsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteGlobalOrganizationOperations(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::global_organization_operations::v1::
                 DeleteGlobalOrganizationOperationsRequest const& request) {
        return stub_->DeleteGlobalOrganizationOperations(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
GlobalOrganizationOperationsRestConnectionImpl::GetGlobalOrganizationOperations(
    google::cloud::cpp::compute::global_organization_operations::v1::
        GetGlobalOrganizationOperationsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetGlobalOrganizationOperations(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::global_organization_operations::v1::
                 GetGlobalOrganizationOperationsRequest const& request) {
        return stub_->GetGlobalOrganizationOperations(rest_context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::cpp::compute::v1::Operation>
GlobalOrganizationOperationsRestConnectionImpl::
    ListGlobalOrganizationOperations(
        google::cloud::cpp::compute::global_organization_operations::v1::
            ListGlobalOrganizationOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListGlobalOrganizationOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::Operation>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_global_organization_operations_v1::
                                   GlobalOrganizationOperationsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::cpp::compute::global_organization_operations::v1::
              ListGlobalOrganizationOperationsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::global_organization_operations::
                       v1::ListGlobalOrganizationOperationsRequest const&
                           request) {
              return stub->ListGlobalOrganizationOperations(rest_context,
                                                            request);
            },
            r, function_name);
      },
      [](google::cloud::cpp::compute::v1::OperationList r) {
        std::vector<google::cloud::cpp::compute::v1::Operation> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1_internal
}  // namespace cloud
}  // namespace google
