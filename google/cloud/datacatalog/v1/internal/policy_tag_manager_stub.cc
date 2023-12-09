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
// source: google/cloud/datacatalog/v1/policytagmanager.proto

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datacatalog/v1/policytagmanager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PolicyTagManagerStub::~PolicyTagManagerStub() = default;

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
DefaultPolicyTagManagerStub::CreateTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateTaxonomyRequest const& request) {
  google::cloud::datacatalog::v1::Taxonomy response;
  auto status = grpc_stub_->CreateTaxonomy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultPolicyTagManagerStub::DeleteTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteTaxonomyRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTaxonomy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
DefaultPolicyTagManagerStub::UpdateTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateTaxonomyRequest const& request) {
  google::cloud::datacatalog::v1::Taxonomy response;
  auto status = grpc_stub_->UpdateTaxonomy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::ListTaxonomiesResponse>
DefaultPolicyTagManagerStub::ListTaxonomies(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListTaxonomiesRequest const& request) {
  google::cloud::datacatalog::v1::ListTaxonomiesResponse response;
  auto status = grpc_stub_->ListTaxonomies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
DefaultPolicyTagManagerStub::GetTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetTaxonomyRequest const& request) {
  google::cloud::datacatalog::v1::Taxonomy response;
  auto status = grpc_stub_->GetTaxonomy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
DefaultPolicyTagManagerStub::CreatePolicyTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreatePolicyTagRequest const& request) {
  google::cloud::datacatalog::v1::PolicyTag response;
  auto status = grpc_stub_->CreatePolicyTag(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultPolicyTagManagerStub::DeletePolicyTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeletePolicyTagRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeletePolicyTag(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
DefaultPolicyTagManagerStub::UpdatePolicyTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdatePolicyTagRequest const& request) {
  google::cloud::datacatalog::v1::PolicyTag response;
  auto status = grpc_stub_->UpdatePolicyTag(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::ListPolicyTagsResponse>
DefaultPolicyTagManagerStub::ListPolicyTags(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListPolicyTagsRequest const& request) {
  google::cloud::datacatalog::v1::ListPolicyTagsResponse response;
  auto status = grpc_stub_->ListPolicyTags(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::v1::PolicyTag>
DefaultPolicyTagManagerStub::GetPolicyTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetPolicyTagRequest const& request) {
  google::cloud::datacatalog::v1::PolicyTag response;
  auto status = grpc_stub_->GetPolicyTag(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultPolicyTagManagerStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultPolicyTagManagerStub::SetIamPolicy(
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
DefaultPolicyTagManagerStub::TestIamPermissions(
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
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google
