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
// source: google/cloud/bigquery/connection/v1/connection.proto

#include "google/cloud/bigquery/connection/v1/internal/connection_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/connection/v1/connection.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_connection_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectionServiceStub::~ConnectionServiceStub() = default;

StatusOr<google::cloud::bigquery::connection::v1::Connection>
DefaultConnectionServiceStub::CreateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
        request) {
  google::cloud::bigquery::connection::v1::Connection response;
  auto status = grpc_stub_->CreateConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
DefaultConnectionServiceStub::GetConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::GetConnectionRequest const&
        request) {
  google::cloud::bigquery::connection::v1::Connection response;
  auto status = grpc_stub_->GetConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::connection::v1::ListConnectionsResponse>
DefaultConnectionServiceStub::ListConnections(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::ListConnectionsRequest const&
        request) {
  google::cloud::bigquery::connection::v1::ListConnectionsResponse response;
  auto status = grpc_stub_->ListConnections(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::bigquery::connection::v1::Connection>
DefaultConnectionServiceStub::UpdateConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
        request) {
  google::cloud::bigquery::connection::v1::Connection response;
  auto status = grpc_stub_->UpdateConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultConnectionServiceStub::DeleteConnection(
    grpc::ClientContext& context,
    google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteConnection(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::iam::v1::Policy> DefaultConnectionServiceStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultConnectionServiceStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultConnectionServiceStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status = grpc_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_connection_v1_internal
}  // namespace cloud
}  // namespace google
