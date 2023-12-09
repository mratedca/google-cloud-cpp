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
// source: google/cloud/confidentialcomputing/v1/service.proto

#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/confidentialcomputing/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace confidentialcomputing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfidentialComputingStub::~ConfidentialComputingStub() = default;

StatusOr<google::cloud::confidentialcomputing::v1::Challenge>
DefaultConfidentialComputingStub::CreateChallenge(
    grpc::ClientContext& context,
    google::cloud::confidentialcomputing::v1::CreateChallengeRequest const&
        request) {
  google::cloud::confidentialcomputing::v1::Challenge response;
  auto status = grpc_stub_->CreateChallenge(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::confidentialcomputing::v1::VerifyAttestationResponse>
DefaultConfidentialComputingStub::VerifyAttestation(
    grpc::ClientContext& context,
    google::cloud::confidentialcomputing::v1::VerifyAttestationRequest const&
        request) {
  google::cloud::confidentialcomputing::v1::VerifyAttestationResponse response;
  auto status = grpc_stub_->VerifyAttestation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace confidentialcomputing_v1_internal
}  // namespace cloud
}  // namespace google
