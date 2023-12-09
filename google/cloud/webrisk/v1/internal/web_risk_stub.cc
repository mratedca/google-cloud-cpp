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
// source: google/cloud/webrisk/v1/webrisk.proto

#include "google/cloud/webrisk/v1/internal/web_risk_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/webrisk/v1/webrisk.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace webrisk_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WebRiskServiceStub::~WebRiskServiceStub() = default;

StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
DefaultWebRiskServiceStub::ComputeThreatListDiff(
    grpc::ClientContext& context,
    google::cloud::webrisk::v1::ComputeThreatListDiffRequest const& request) {
  google::cloud::webrisk::v1::ComputeThreatListDiffResponse response;
  auto status = grpc_stub_->ComputeThreatListDiff(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::webrisk::v1::SearchUrisResponse>
DefaultWebRiskServiceStub::SearchUris(
    grpc::ClientContext& context,
    google::cloud::webrisk::v1::SearchUrisRequest const& request) {
  google::cloud::webrisk::v1::SearchUrisResponse response;
  auto status = grpc_stub_->SearchUris(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::webrisk::v1::SearchHashesResponse>
DefaultWebRiskServiceStub::SearchHashes(
    grpc::ClientContext& context,
    google::cloud::webrisk::v1::SearchHashesRequest const& request) {
  google::cloud::webrisk::v1::SearchHashesResponse response;
  auto status = grpc_stub_->SearchHashes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::webrisk::v1::Submission>
DefaultWebRiskServiceStub::CreateSubmission(
    grpc::ClientContext& context,
    google::cloud::webrisk::v1::CreateSubmissionRequest const& request) {
  google::cloud::webrisk::v1::Submission response;
  auto status = grpc_stub_->CreateSubmission(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultWebRiskServiceStub::AsyncSubmitUri(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::webrisk::v1::SubmitUriRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::webrisk::v1::SubmitUriRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::webrisk::v1::SubmitUriRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncSubmitUri(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultWebRiskServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultWebRiskServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace webrisk_v1_internal
}  // namespace cloud
}  // namespace google
