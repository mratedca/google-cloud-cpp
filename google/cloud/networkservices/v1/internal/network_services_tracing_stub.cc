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
// source: google/cloud/networkservices/v1/network_services.proto

#include "google/cloud/networkservices/v1/internal/network_services_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace networkservices_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

NetworkServicesTracingStub::NetworkServicesTracingStub(
    std::shared_ptr<NetworkServicesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::networkservices::v1::ListEndpointPoliciesResponse>
NetworkServicesTracingStub::ListEndpointPolicies(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListEndpointPoliciesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networkservices.v1.NetworkServices",
                             "ListEndpointPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEndpointPolicies(context, request));
}

StatusOr<google::cloud::networkservices::v1::EndpointPolicy>
NetworkServicesTracingStub::GetEndpointPolicy(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetEndpointPolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "GetEndpointPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEndpointPolicy(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncCreateEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::CreateEndpointPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networkservices.v1.NetworkServices",
                             "CreateEndpointPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateEndpointPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncUpdateEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::UpdateEndpointPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networkservices.v1.NetworkServices",
                             "UpdateEndpointPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateEndpointPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncDeleteEndpointPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::DeleteEndpointPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networkservices.v1.NetworkServices",
                             "DeleteEndpointPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteEndpointPolicy(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::networkservices::v1::ListGatewaysResponse>
NetworkServicesTracingStub::ListGateways(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListGatewaysRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "ListGateways");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGateways(context, request));
}

StatusOr<google::cloud::networkservices::v1::Gateway>
NetworkServicesTracingStub::GetGateway(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "GetGateway");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGateway(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncCreateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::CreateGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "CreateGateway");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateGateway(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncUpdateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::UpdateGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "UpdateGateway");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateGateway(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncDeleteGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::DeleteGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "DeleteGateway");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteGateway(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::networkservices::v1::ListGrpcRoutesResponse>
NetworkServicesTracingStub::ListGrpcRoutes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListGrpcRoutesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "ListGrpcRoutes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGrpcRoutes(context, request));
}

StatusOr<google::cloud::networkservices::v1::GrpcRoute>
NetworkServicesTracingStub::GetGrpcRoute(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetGrpcRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "GetGrpcRoute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGrpcRoute(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncCreateGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::CreateGrpcRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "CreateGrpcRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateGrpcRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncUpdateGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::UpdateGrpcRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "UpdateGrpcRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateGrpcRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncDeleteGrpcRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::DeleteGrpcRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "DeleteGrpcRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteGrpcRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::networkservices::v1::ListHttpRoutesResponse>
NetworkServicesTracingStub::ListHttpRoutes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListHttpRoutesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "ListHttpRoutes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListHttpRoutes(context, request));
}

StatusOr<google::cloud::networkservices::v1::HttpRoute>
NetworkServicesTracingStub::GetHttpRoute(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetHttpRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "GetHttpRoute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetHttpRoute(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncCreateHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::CreateHttpRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "CreateHttpRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateHttpRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncUpdateHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::UpdateHttpRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "UpdateHttpRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateHttpRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncDeleteHttpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::DeleteHttpRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "DeleteHttpRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteHttpRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::networkservices::v1::ListTcpRoutesResponse>
NetworkServicesTracingStub::ListTcpRoutes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListTcpRoutesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "ListTcpRoutes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTcpRoutes(context, request));
}

StatusOr<google::cloud::networkservices::v1::TcpRoute>
NetworkServicesTracingStub::GetTcpRoute(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetTcpRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "GetTcpRoute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTcpRoute(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncCreateTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::CreateTcpRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "CreateTcpRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateTcpRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncUpdateTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::UpdateTcpRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "UpdateTcpRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateTcpRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncDeleteTcpRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::DeleteTcpRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "DeleteTcpRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteTcpRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::networkservices::v1::ListTlsRoutesResponse>
NetworkServicesTracingStub::ListTlsRoutes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListTlsRoutesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "ListTlsRoutes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTlsRoutes(context, request));
}

StatusOr<google::cloud::networkservices::v1::TlsRoute>
NetworkServicesTracingStub::GetTlsRoute(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetTlsRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "GetTlsRoute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTlsRoute(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncCreateTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::CreateTlsRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "CreateTlsRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateTlsRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncUpdateTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::UpdateTlsRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "UpdateTlsRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateTlsRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncDeleteTlsRoute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::DeleteTlsRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "DeleteTlsRoute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteTlsRoute(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::networkservices::v1::ListServiceBindingsResponse>
NetworkServicesTracingStub::ListServiceBindings(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListServiceBindingsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "ListServiceBindings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServiceBindings(context, request));
}

StatusOr<google::cloud::networkservices::v1::ServiceBinding>
NetworkServicesTracingStub::GetServiceBinding(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetServiceBindingRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "GetServiceBinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetServiceBinding(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncCreateServiceBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::CreateServiceBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networkservices.v1.NetworkServices",
                             "CreateServiceBinding");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateServiceBinding(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncDeleteServiceBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::DeleteServiceBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.networkservices.v1.NetworkServices",
                             "DeleteServiceBinding");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteServiceBinding(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::networkservices::v1::ListMeshesResponse>
NetworkServicesTracingStub::ListMeshes(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::ListMeshesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "ListMeshes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListMeshes(context, request));
}

StatusOr<google::cloud::networkservices::v1::Mesh>
NetworkServicesTracingStub::GetMesh(
    grpc::ClientContext& context,
    google::cloud::networkservices::v1::GetMeshRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "GetMesh");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetMesh(context, request));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncCreateMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::CreateMeshRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "CreateMesh");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateMesh(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncUpdateMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::UpdateMeshRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "UpdateMesh");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateMesh(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncDeleteMesh(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::networkservices::v1::DeleteMeshRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkservices.v1.NetworkServices", "DeleteMesh");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteMesh(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
NetworkServicesTracingStub::AsyncGetOperation(
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

future<Status> NetworkServicesTracingStub::AsyncCancelOperation(
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

std::shared_ptr<NetworkServicesStub> MakeNetworkServicesTracingStub(
    std::shared_ptr<NetworkServicesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<NetworkServicesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkservices_v1_internal
}  // namespace cloud
}  // namespace google
