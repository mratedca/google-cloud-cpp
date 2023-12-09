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
// source: google/cloud/compute/reservations/v1/reservations.proto

#include "google/cloud/compute/reservations/v1/internal/reservations_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationsRestLogging::ReservationsRestLogging(
    std::shared_ptr<ReservationsRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::ReservationAggregatedList>
ReservationsRestLogging::AggregatedListReservations(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::reservations::v1::
        AggregatedListReservationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 AggregatedListReservationsRequest const& request) {
        return child_->AggregatedListReservations(rest_context, options,
                                                  request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestLogging::AsyncDeleteReservation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::reservations::v1::
        DeleteReservationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 DeleteReservationRequest const& request) {
        return child_->AsyncDeleteReservation(cq, std::move(rest_context),
                                              options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Reservation>
ReservationsRestLogging::GetReservation(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::reservations::v1::GetReservationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 GetReservationRequest const& request) {
        return child_->GetReservation(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::reservations::v1::GetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestLogging::AsyncInsertReservation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::reservations::v1::
        InsertReservationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 InsertReservationRequest const& request) {
        return child_->AsyncInsertReservation(cq, std::move(rest_context),
                                              options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::ReservationList>
ReservationsRestLogging::ListReservations(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::reservations::v1::
        ListReservationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 ListReservationsRequest const& request) {
        return child_->ListReservations(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestLogging::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::reservations::v1::ResizeRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::reservations::v1::ResizeRequest const&
                 request) {
        return child_->AsyncResize(cq, std::move(rest_context), options,
                                   request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ReservationsRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::reservations::v1::SetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ReservationsRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::reservations::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestLogging::AsyncUpdateReservation(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::reservations::v1::
        UpdateReservationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::reservations::v1::
                 UpdateReservationRequest const& request) {
        return child_->AsyncUpdateReservation(cq, std::move(rest_context),
                                              options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ReservationsRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), options,
                                         request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<Status> ReservationsRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_reservations_v1_internal
}  // namespace cloud
}  // namespace google
