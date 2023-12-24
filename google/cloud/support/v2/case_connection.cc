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
// source: google/cloud/support/v2/case_service.proto

#include "google/cloud/support/v2/case_connection.h"
#include "google/cloud/support/v2/case_options.h"
#include "google/cloud/support/v2/internal/case_connection_impl.h"
#include "google/cloud/support/v2/internal/case_option_defaults.h"
#include "google/cloud/support/v2/internal/case_stub_factory.h"
#include "google/cloud/support/v2/internal/case_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace support_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CaseServiceConnection::~CaseServiceConnection() = default;

StatusOr<google::cloud::support::v2::Case> CaseServiceConnection::GetCase(
    google::cloud::support::v2::GetCaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::support::v2::Case> CaseServiceConnection::ListCases(
    google::cloud::support::v2::
        ListCasesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::support::v2::Case>>();
}

StreamRange<google::cloud::support::v2::Case>
CaseServiceConnection::SearchCases(
    google::cloud::support::v2::
        SearchCasesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::support::v2::Case>>();
}

StatusOr<google::cloud::support::v2::Case> CaseServiceConnection::CreateCase(
    google::cloud::support::v2::CreateCaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::support::v2::Case> CaseServiceConnection::UpdateCase(
    google::cloud::support::v2::UpdateCaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::support::v2::Case> CaseServiceConnection::EscalateCase(
    google::cloud::support::v2::EscalateCaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::support::v2::Case> CaseServiceConnection::CloseCase(
    google::cloud::support::v2::CloseCaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::support::v2::CaseClassification>
CaseServiceConnection::SearchCaseClassifications(
    google::cloud::support::v2::
        SearchCaseClassificationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::support::v2::CaseClassification>>();
}

std::shared_ptr<CaseServiceConnection> MakeCaseServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CaseServicePolicyOptionList>(options,
                                                              __func__);
  options = support_v2_internal::CaseServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = support_v2_internal::CreateDefaultCaseServiceStub(std::move(auth),
                                                                options);
  return support_v2_internal::MakeCaseServiceTracingConnection(
      std::make_shared<support_v2_internal::CaseServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2
}  // namespace cloud
}  // namespace google
