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
// source: google/cloud/video/transcoder/v1/services.proto

#include "google/cloud/video/transcoder/v1/internal/transcoder_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/video/transcoder/v1/services.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video_transcoder_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranscoderServiceStub::~TranscoderServiceStub() = default;

StatusOr<google::cloud::video::transcoder::v1::Job>
DefaultTranscoderServiceStub::CreateJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::CreateJobRequest const& request) {
  google::cloud::video::transcoder::v1::Job response;
  auto status = grpc_stub_->CreateJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::transcoder::v1::ListJobsResponse>
DefaultTranscoderServiceStub::ListJobs(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::ListJobsRequest const& request) {
  google::cloud::video::transcoder::v1::ListJobsResponse response;
  auto status = grpc_stub_->ListJobs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::transcoder::v1::Job>
DefaultTranscoderServiceStub::GetJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::GetJobRequest const& request) {
  google::cloud::video::transcoder::v1::Job response;
  auto status = grpc_stub_->GetJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTranscoderServiceStub::DeleteJob(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::DeleteJobRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
DefaultTranscoderServiceStub::CreateJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&
        request) {
  google::cloud::video::transcoder::v1::JobTemplate response;
  auto status = grpc_stub_->CreateJobTemplate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::transcoder::v1::ListJobTemplatesResponse>
DefaultTranscoderServiceStub::ListJobTemplates(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::ListJobTemplatesRequest const&
        request) {
  google::cloud::video::transcoder::v1::ListJobTemplatesResponse response;
  auto status = grpc_stub_->ListJobTemplates(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::video::transcoder::v1::JobTemplate>
DefaultTranscoderServiceStub::GetJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::GetJobTemplateRequest const&
        request) {
  google::cloud::video::transcoder::v1::JobTemplate response;
  auto status = grpc_stub_->GetJobTemplate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTranscoderServiceStub::DeleteJobTemplate(
    grpc::ClientContext& context,
    google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteJobTemplate(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_transcoder_v1_internal
}  // namespace cloud
}  // namespace google
