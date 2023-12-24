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
// source: google/devtools/cloudtrace/v1/trace.proto

#include "google/cloud/trace/v1/trace_connection.h"
#include "google/cloud/trace/v1/internal/trace_connection_impl.h"
#include "google/cloud/trace/v1/internal/trace_option_defaults.h"
#include "google/cloud/trace/v1/internal/trace_stub_factory.h"
#include "google/cloud/trace/v1/internal/trace_tracing_connection.h"
#include "google/cloud/trace/v1/trace_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace trace_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TraceServiceConnection::~TraceServiceConnection() = default;

StreamRange<google::devtools::cloudtrace::v1::Trace>
TraceServiceConnection::ListTraces(
    google::devtools::cloudtrace::v1::
        ListTracesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::devtools::cloudtrace::v1::Trace>>();
}

StatusOr<google::devtools::cloudtrace::v1::Trace>
TraceServiceConnection::GetTrace(
    google::devtools::cloudtrace::v1::GetTraceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status TraceServiceConnection::PatchTraces(
    google::devtools::cloudtrace::v1::PatchTracesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<TraceServiceConnection> MakeTraceServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 TraceServicePolicyOptionList>(options,
                                                               __func__);
  options = trace_v1_internal::TraceServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = trace_v1_internal::CreateDefaultTraceServiceStub(std::move(auth),
                                                               options);
  return trace_v1_internal::MakeTraceServiceTracingConnection(
      std::make_shared<trace_v1_internal::TraceServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_v1
}  // namespace cloud
}  // namespace google
