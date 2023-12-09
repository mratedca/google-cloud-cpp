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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_INTERNAL_WEB_RISK_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_INTERNAL_WEB_RISK_AUTH_DECORATOR_H

#include "google/cloud/webrisk/v1/internal/web_risk_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace webrisk_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WebRiskServiceAuth : public WebRiskServiceStub {
 public:
  ~WebRiskServiceAuth() override = default;
  WebRiskServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<WebRiskServiceStub> child);

  StatusOr<google::cloud::webrisk::v1::ComputeThreatListDiffResponse>
  ComputeThreatListDiff(
      grpc::ClientContext& context,
      google::cloud::webrisk::v1::ComputeThreatListDiffRequest const& request)
      override;

  StatusOr<google::cloud::webrisk::v1::SearchUrisResponse> SearchUris(
      grpc::ClientContext& context,
      google::cloud::webrisk::v1::SearchUrisRequest const& request) override;

  StatusOr<google::cloud::webrisk::v1::SearchHashesResponse> SearchHashes(
      grpc::ClientContext& context,
      google::cloud::webrisk::v1::SearchHashesRequest const& request) override;

  StatusOr<google::cloud::webrisk::v1::Submission> CreateSubmission(
      grpc::ClientContext& context,
      google::cloud::webrisk::v1::CreateSubmissionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncSubmitUri(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::webrisk::v1::SubmitUriRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<WebRiskServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace webrisk_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBRISK_V1_INTERNAL_WEB_RISK_AUTH_DECORATOR_H
