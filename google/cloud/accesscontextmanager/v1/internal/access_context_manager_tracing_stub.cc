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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#include "google/cloud/accesscontextmanager/v1/internal/access_context_manager_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace accesscontextmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AccessContextManagerTracingStub::AccessContextManagerTracingStub(
    std::shared_ptr<AccessContextManagerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessPoliciesResponse>
AccessContextManagerTracingStub::ListAccessPolicies(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "ListAccessPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAccessPolicies(context, request));
}

StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
AccessContextManagerTracingStub::GetAccessPolicy(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "GetAccessPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAccessPolicy(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncCreateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "CreateAccessPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateAccessPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncUpdateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "UpdateAccessPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateAccessPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncDeleteAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "DeleteAccessPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteAccessPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessLevelsResponse>
AccessContextManagerTracingStub::ListAccessLevels(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::ListAccessLevelsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "ListAccessLevels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAccessLevels(context, request));
}

StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
AccessContextManagerTracingStub::GetAccessLevel(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "GetAccessLevel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAccessLevel(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncCreateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "CreateAccessLevel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateAccessLevel(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncUpdateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "UpdateAccessLevel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateAccessLevel(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncDeleteAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "DeleteAccessLevel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteAccessLevel(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncReplaceAccessLevels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "ReplaceAccessLevels");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncReplaceAccessLevels(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<
    google::identity::accesscontextmanager::v1::ListServicePerimetersResponse>
AccessContextManagerTracingStub::ListServicePerimeters(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        ListServicePerimetersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "ListServicePerimeters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServicePerimeters(context, request));
}

StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
AccessContextManagerTracingStub::GetServicePerimeter(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        GetServicePerimeterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "GetServicePerimeter");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetServicePerimeter(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncCreateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "CreateServicePerimeter");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateServicePerimeter(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncUpdateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "UpdateServicePerimeter");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateServicePerimeter(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncDeleteServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "DeleteServicePerimeter");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteServicePerimeter(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncReplaceServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "ReplaceServicePerimeters");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncReplaceServicePerimeters(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncCommitServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "CommitServicePerimeters");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCommitServicePerimeters(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::identity::accesscontextmanager::v1::
             ListGcpUserAccessBindingsResponse>
AccessContextManagerTracingStub::ListGcpUserAccessBindings(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        ListGcpUserAccessBindingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "ListGcpUserAccessBindings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGcpUserAccessBindings(context, request));
}

StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
AccessContextManagerTracingStub::GetGcpUserAccessBinding(
    grpc::ClientContext& context,
    google::identity::accesscontextmanager::v1::
        GetGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "GetGcpUserAccessBinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGcpUserAccessBinding(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncCreateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "CreateGcpUserAccessBinding");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateGcpUserAccessBinding(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncUpdateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "UpdateGcpUserAccessBinding");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateGcpUserAccessBinding(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncDeleteGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "DeleteGcpUserAccessBinding");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteGcpUserAccessBinding(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::iam::v1::Policy> AccessContextManagerTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> AccessContextManagerTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AccessContextManagerTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.identity.accesscontextmanager.v1.AccessContextManager",
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AccessContextManagerTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> AccessContextManagerTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AccessContextManagerStub> MakeAccessContextManagerTracingStub(
    std::shared_ptr<AccessContextManagerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AccessContextManagerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager_v1_internal
}  // namespace cloud
}  // namespace google
