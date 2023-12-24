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
// source: google/cloud/run/v2/revision.proto

#include "google/cloud/run/v2/revisions_connection.h"
#include "google/cloud/run/v2/internal/revisions_connection_impl.h"
#include "google/cloud/run/v2/internal/revisions_option_defaults.h"
#include "google/cloud/run/v2/internal/revisions_stub_factory.h"
#include "google/cloud/run/v2/internal/revisions_tracing_connection.h"
#include "google/cloud/run/v2/revisions_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RevisionsConnection::~RevisionsConnection() = default;

StatusOr<google::cloud::run::v2::Revision> RevisionsConnection::GetRevision(
    google::cloud::run::v2::GetRevisionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::run::v2::Revision>
RevisionsConnection::ListRevisions(
    google::cloud::run::v2::
        ListRevisionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::run::v2::Revision>>();
}

future<StatusOr<google::cloud::run::v2::Revision>>
RevisionsConnection::DeleteRevision(
    google::cloud::run::v2::DeleteRevisionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::run::v2::Revision>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<RevisionsConnection> MakeRevisionsConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 RevisionsPolicyOptionList>(options, __func__);
  options = run_v2_internal::RevisionsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      run_v2_internal::CreateDefaultRevisionsStub(std::move(auth), options);
  return run_v2_internal::MakeRevisionsTracingConnection(
      std::make_shared<run_v2_internal::RevisionsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google
