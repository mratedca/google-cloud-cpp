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
// source: google/devtools/cloudtrace/v2/tracing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V2_TRACE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V2_TRACE_CLIENT_H

#include "google/cloud/trace/v2/trace_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace trace_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for collecting and viewing traces and spans within a trace.
///
/// A trace is a collection of spans corresponding to a single
/// operation or a set of operations in an application.
///
/// A span is an individual timed event which forms a node of the trace tree.
/// A single trace can contain spans from multiple services.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class TraceServiceClient {
 public:
  explicit TraceServiceClient(
      std::shared_ptr<TraceServiceConnection> connection, Options opts = {});
  ~TraceServiceClient();

  ///@{
  /// @name Copy and move support
  TraceServiceClient(TraceServiceClient const&) = default;
  TraceServiceClient& operator=(TraceServiceClient const&) = default;
  TraceServiceClient(TraceServiceClient&&) = default;
  TraceServiceClient& operator=(TraceServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TraceServiceClient const& a,
                         TraceServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TraceServiceClient const& a,
                         TraceServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Batch writes new spans to new or existing traces. You cannot update
  /// existing spans.
  ///
  /// @param name  Required. The name of the project where the spans belong. The
  /// format is
  ///  `projects/[PROJECT_ID]`.
  /// @param spans  Required. A list of new spans. The span names must not match
  /// existing
  ///  spans, otherwise the results are undefined.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.devtools.cloudtrace.v2.BatchWriteSpansRequest]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v2/tracing.proto#L67}
  ///
  Status BatchWriteSpans(
      std::string const& name,
      std::vector<google::devtools::cloudtrace::v2::Span> const& spans,
      Options opts = {});

  ///
  /// Batch writes new spans to new or existing traces. You cannot update
  /// existing spans.
  ///
  /// @param request
  /// @googleapis_link{google::devtools::cloudtrace::v2::BatchWriteSpansRequest,google/devtools/cloudtrace/v2/tracing.proto#L67}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.devtools.cloudtrace.v2.BatchWriteSpansRequest]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v2/tracing.proto#L67}
  ///
  Status BatchWriteSpans(
      google::devtools::cloudtrace::v2::BatchWriteSpansRequest const& request,
      Options opts = {});

  ///
  /// Creates a new span.
  ///
  /// @param request
  /// @googleapis_link{google::devtools::cloudtrace::v2::Span,google/devtools/cloudtrace/v2/trace.proto#L41}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::devtools::cloudtrace::v2::Span,google/devtools/cloudtrace/v2/trace.proto#L41}
  ///
  /// [google.devtools.cloudtrace.v2.Span]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v2/trace.proto#L41}
  ///
  StatusOr<google::devtools::cloudtrace::v2::Span> CreateSpan(
      google::devtools::cloudtrace::v2::Span const& request, Options opts = {});

 private:
  std::shared_ptr<TraceServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V2_TRACE_CLIENT_H
