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
// source: google/cloud/compute/https_health_checks/v1/https_health_checks.proto

#include "google/cloud/compute/https_health_checks/v1/internal/https_health_checks_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_https_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

HttpsHealthChecksTracingConnection::HttpsHealthChecksTracingConnection(
    std::shared_ptr<compute_https_health_checks_v1::HttpsHealthChecksConnection>
        child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksTracingConnection::DeleteHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        DeleteHttpsHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_https_health_checks_v1::HttpsHealthChecksConnection::"
      "DeleteHttpsHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteHttpsHealthCheck(request));
}

StatusOr<google::cloud::cpp::compute::v1::HttpsHealthCheck>
HttpsHealthChecksTracingConnection::GetHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        GetHttpsHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_https_health_checks_v1::HttpsHealthChecksConnection::"
      "GetHttpsHealthCheck");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetHttpsHealthCheck(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksTracingConnection::InsertHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        InsertHttpsHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_https_health_checks_v1::HttpsHealthChecksConnection::"
      "InsertHttpsHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertHttpsHealthCheck(request));
}

StreamRange<google::cloud::cpp::compute::v1::HttpsHealthCheck>
HttpsHealthChecksTracingConnection::ListHttpsHealthChecks(
    google::cloud::cpp::compute::https_health_checks::v1::
        ListHttpsHealthChecksRequest request) {
  auto span = internal::MakeSpan(
      "compute_https_health_checks_v1::HttpsHealthChecksConnection::"
      "ListHttpsHealthChecks");
  internal::OTelScope scope(span);
  auto sr = child_->ListHttpsHealthChecks(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::HttpsHealthCheck>(std::move(span),
                                                         std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksTracingConnection::PatchHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        PatchHttpsHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_https_health_checks_v1::HttpsHealthChecksConnection::"
      "PatchHttpsHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchHttpsHealthCheck(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HttpsHealthChecksTracingConnection::UpdateHttpsHealthCheck(
    google::cloud::cpp::compute::https_health_checks::v1::
        UpdateHttpsHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_https_health_checks_v1::HttpsHealthChecksConnection::"
      "UpdateHttpsHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateHttpsHealthCheck(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_https_health_checks_v1::HttpsHealthChecksConnection>
MakeHttpsHealthChecksTracingConnection(
    std::shared_ptr<compute_https_health_checks_v1::HttpsHealthChecksConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<HttpsHealthChecksTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_https_health_checks_v1_internal
}  // namespace cloud
}  // namespace google
