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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#include "google/cloud/deploy/v1/cloud_deploy_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace deploy_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudDeployClient::CloudDeployClient(
    std::shared_ptr<CloudDeployConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CloudDeployClient::~CloudDeployClient() = default;

StreamRange<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployClient::ListDeliveryPipelines(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ListDeliveryPipelinesRequest request;
  request.set_parent(parent);
  return connection_->ListDeliveryPipelines(request);
}

StreamRange<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployClient::ListDeliveryPipelines(
    google::cloud::deploy::v1::ListDeliveryPipelinesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDeliveryPipelines(std::move(request));
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployClient::GetDeliveryPipeline(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetDeliveryPipelineRequest request;
  request.set_name(name);
  return connection_->GetDeliveryPipeline(request);
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployClient::GetDeliveryPipeline(
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDeliveryPipeline(request);
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployClient::CreateDeliveryPipeline(
    std::string const& parent,
    google::cloud::deploy::v1::DeliveryPipeline const& delivery_pipeline,
    std::string const& delivery_pipeline_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::CreateDeliveryPipelineRequest request;
  request.set_parent(parent);
  *request.mutable_delivery_pipeline() = delivery_pipeline;
  request.set_delivery_pipeline_id(delivery_pipeline_id);
  return connection_->CreateDeliveryPipeline(request);
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployClient::CreateDeliveryPipeline(
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDeliveryPipeline(request);
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployClient::UpdateDeliveryPipeline(
    google::cloud::deploy::v1::DeliveryPipeline const& delivery_pipeline,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::UpdateDeliveryPipelineRequest request;
  *request.mutable_delivery_pipeline() = delivery_pipeline;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDeliveryPipeline(request);
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployClient::UpdateDeliveryPipeline(
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDeliveryPipeline(request);
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployClient::DeleteDeliveryPipeline(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::DeleteDeliveryPipelineRequest request;
  request.set_name(name);
  return connection_->DeleteDeliveryPipeline(request);
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployClient::DeleteDeliveryPipeline(
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDeliveryPipeline(request);
}

StreamRange<google::cloud::deploy::v1::Target> CloudDeployClient::ListTargets(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ListTargetsRequest request;
  request.set_parent(parent);
  return connection_->ListTargets(request);
}

StreamRange<google::cloud::deploy::v1::Target> CloudDeployClient::ListTargets(
    google::cloud::deploy::v1::ListTargetsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTargets(std::move(request));
}

StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>
CloudDeployClient::RollbackTarget(std::string const& name,
                                  std::string const& target_id,
                                  std::string const& rollout_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::RollbackTargetRequest request;
  request.set_name(name);
  request.set_target_id(target_id);
  request.set_rollout_id(rollout_id);
  return connection_->RollbackTarget(request);
}

StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>
CloudDeployClient::RollbackTarget(
    google::cloud::deploy::v1::RollbackTargetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RollbackTarget(request);
}

StatusOr<google::cloud::deploy::v1::Target> CloudDeployClient::GetTarget(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetTargetRequest request;
  request.set_name(name);
  return connection_->GetTarget(request);
}

StatusOr<google::cloud::deploy::v1::Target> CloudDeployClient::GetTarget(
    google::cloud::deploy::v1::GetTargetRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTarget(request);
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployClient::CreateTarget(std::string const& parent,
                                google::cloud::deploy::v1::Target const& target,
                                std::string const& target_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::CreateTargetRequest request;
  request.set_parent(parent);
  *request.mutable_target() = target;
  request.set_target_id(target_id);
  return connection_->CreateTarget(request);
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployClient::CreateTarget(
    google::cloud::deploy::v1::CreateTargetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTarget(request);
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployClient::UpdateTarget(google::cloud::deploy::v1::Target const& target,
                                google::protobuf::FieldMask const& update_mask,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::UpdateTargetRequest request;
  *request.mutable_target() = target;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTarget(request);
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployClient::UpdateTarget(
    google::cloud::deploy::v1::UpdateTargetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTarget(request);
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployClient::DeleteTarget(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::DeleteTargetRequest request;
  request.set_name(name);
  return connection_->DeleteTarget(request);
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployClient::DeleteTarget(
    google::cloud::deploy::v1::DeleteTargetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTarget(request);
}

StreamRange<google::cloud::deploy::v1::CustomTargetType>
CloudDeployClient::ListCustomTargetTypes(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ListCustomTargetTypesRequest request;
  request.set_parent(parent);
  return connection_->ListCustomTargetTypes(request);
}

StreamRange<google::cloud::deploy::v1::CustomTargetType>
CloudDeployClient::ListCustomTargetTypes(
    google::cloud::deploy::v1::ListCustomTargetTypesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCustomTargetTypes(std::move(request));
}

StatusOr<google::cloud::deploy::v1::CustomTargetType>
CloudDeployClient::GetCustomTargetType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetCustomTargetTypeRequest request;
  request.set_name(name);
  return connection_->GetCustomTargetType(request);
}

StatusOr<google::cloud::deploy::v1::CustomTargetType>
CloudDeployClient::GetCustomTargetType(
    google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCustomTargetType(request);
}

future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
CloudDeployClient::CreateCustomTargetType(
    std::string const& parent,
    google::cloud::deploy::v1::CustomTargetType const& custom_target_type,
    std::string const& custom_target_type_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::CreateCustomTargetTypeRequest request;
  request.set_parent(parent);
  *request.mutable_custom_target_type() = custom_target_type;
  request.set_custom_target_type_id(custom_target_type_id);
  return connection_->CreateCustomTargetType(request);
}

future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
CloudDeployClient::CreateCustomTargetType(
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCustomTargetType(request);
}

future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
CloudDeployClient::UpdateCustomTargetType(
    google::cloud::deploy::v1::CustomTargetType const& custom_target_type,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::UpdateCustomTargetTypeRequest request;
  *request.mutable_custom_target_type() = custom_target_type;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCustomTargetType(request);
}

future<StatusOr<google::cloud::deploy::v1::CustomTargetType>>
CloudDeployClient::UpdateCustomTargetType(
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCustomTargetType(request);
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployClient::DeleteCustomTargetType(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::DeleteCustomTargetTypeRequest request;
  request.set_name(name);
  return connection_->DeleteCustomTargetType(request);
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployClient::DeleteCustomTargetType(
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCustomTargetType(request);
}

StreamRange<google::cloud::deploy::v1::Release> CloudDeployClient::ListReleases(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ListReleasesRequest request;
  request.set_parent(parent);
  return connection_->ListReleases(request);
}

StreamRange<google::cloud::deploy::v1::Release> CloudDeployClient::ListReleases(
    google::cloud::deploy::v1::ListReleasesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListReleases(std::move(request));
}

StatusOr<google::cloud::deploy::v1::Release> CloudDeployClient::GetRelease(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetReleaseRequest request;
  request.set_name(name);
  return connection_->GetRelease(request);
}

StatusOr<google::cloud::deploy::v1::Release> CloudDeployClient::GetRelease(
    google::cloud::deploy::v1::GetReleaseRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRelease(request);
}

future<StatusOr<google::cloud::deploy::v1::Release>>
CloudDeployClient::CreateRelease(
    std::string const& parent,
    google::cloud::deploy::v1::Release const& release,
    std::string const& release_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::CreateReleaseRequest request;
  request.set_parent(parent);
  *request.mutable_release() = release;
  request.set_release_id(release_id);
  return connection_->CreateRelease(request);
}

future<StatusOr<google::cloud::deploy::v1::Release>>
CloudDeployClient::CreateRelease(
    google::cloud::deploy::v1::CreateReleaseRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRelease(request);
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployClient::AbandonRelease(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::AbandonReleaseRequest request;
  request.set_name(name);
  return connection_->AbandonRelease(request);
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployClient::AbandonRelease(
    google::cloud::deploy::v1::AbandonReleaseRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AbandonRelease(request);
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployClient::ApproveRollout(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ApproveRolloutRequest request;
  request.set_name(name);
  return connection_->ApproveRollout(request);
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployClient::ApproveRollout(
    google::cloud::deploy::v1::ApproveRolloutRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ApproveRollout(request);
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
CloudDeployClient::AdvanceRollout(std::string const& name,
                                  std::string const& phase_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::AdvanceRolloutRequest request;
  request.set_name(name);
  request.set_phase_id(phase_id);
  return connection_->AdvanceRollout(request);
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
CloudDeployClient::AdvanceRollout(
    google::cloud::deploy::v1::AdvanceRolloutRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AdvanceRollout(request);
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
CloudDeployClient::CancelRollout(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::CancelRolloutRequest request;
  request.set_name(name);
  return connection_->CancelRollout(request);
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
CloudDeployClient::CancelRollout(
    google::cloud::deploy::v1::CancelRolloutRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelRollout(request);
}

StreamRange<google::cloud::deploy::v1::Rollout> CloudDeployClient::ListRollouts(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ListRolloutsRequest request;
  request.set_parent(parent);
  return connection_->ListRollouts(request);
}

StreamRange<google::cloud::deploy::v1::Rollout> CloudDeployClient::ListRollouts(
    google::cloud::deploy::v1::ListRolloutsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRollouts(std::move(request));
}

StatusOr<google::cloud::deploy::v1::Rollout> CloudDeployClient::GetRollout(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetRolloutRequest request;
  request.set_name(name);
  return connection_->GetRollout(request);
}

StatusOr<google::cloud::deploy::v1::Rollout> CloudDeployClient::GetRollout(
    google::cloud::deploy::v1::GetRolloutRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRollout(request);
}

future<StatusOr<google::cloud::deploy::v1::Rollout>>
CloudDeployClient::CreateRollout(
    std::string const& parent,
    google::cloud::deploy::v1::Rollout const& rollout,
    std::string const& rollout_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::CreateRolloutRequest request;
  request.set_parent(parent);
  *request.mutable_rollout() = rollout;
  request.set_rollout_id(rollout_id);
  return connection_->CreateRollout(request);
}

future<StatusOr<google::cloud::deploy::v1::Rollout>>
CloudDeployClient::CreateRollout(
    google::cloud::deploy::v1::CreateRolloutRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRollout(request);
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
CloudDeployClient::IgnoreJob(std::string const& rollout,
                             std::string const& phase_id,
                             std::string const& job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::IgnoreJobRequest request;
  request.set_rollout(rollout);
  request.set_phase_id(phase_id);
  request.set_job_id(job_id);
  return connection_->IgnoreJob(request);
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
CloudDeployClient::IgnoreJob(
    google::cloud::deploy::v1::IgnoreJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->IgnoreJob(request);
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
CloudDeployClient::RetryJob(std::string const& rollout,
                            std::string const& phase_id,
                            std::string const& job_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::RetryJobRequest request;
  request.set_rollout(rollout);
  request.set_phase_id(phase_id);
  request.set_job_id(job_id);
  return connection_->RetryJob(request);
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
CloudDeployClient::RetryJob(
    google::cloud::deploy::v1::RetryJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RetryJob(request);
}

StreamRange<google::cloud::deploy::v1::JobRun> CloudDeployClient::ListJobRuns(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ListJobRunsRequest request;
  request.set_parent(parent);
  return connection_->ListJobRuns(request);
}

StreamRange<google::cloud::deploy::v1::JobRun> CloudDeployClient::ListJobRuns(
    google::cloud::deploy::v1::ListJobRunsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListJobRuns(std::move(request));
}

StatusOr<google::cloud::deploy::v1::JobRun> CloudDeployClient::GetJobRun(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetJobRunRequest request;
  request.set_name(name);
  return connection_->GetJobRun(request);
}

StatusOr<google::cloud::deploy::v1::JobRun> CloudDeployClient::GetJobRun(
    google::cloud::deploy::v1::GetJobRunRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetJobRun(request);
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
CloudDeployClient::TerminateJobRun(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::TerminateJobRunRequest request;
  request.set_name(name);
  return connection_->TerminateJobRun(request);
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
CloudDeployClient::TerminateJobRun(
    google::cloud::deploy::v1::TerminateJobRunRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TerminateJobRun(request);
}

StatusOr<google::cloud::deploy::v1::Config> CloudDeployClient::GetConfig(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetConfigRequest request;
  request.set_name(name);
  return connection_->GetConfig(request);
}

StatusOr<google::cloud::deploy::v1::Config> CloudDeployClient::GetConfig(
    google::cloud::deploy::v1::GetConfigRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConfig(request);
}

future<StatusOr<google::cloud::deploy::v1::Automation>>
CloudDeployClient::CreateAutomation(
    std::string const& parent,
    google::cloud::deploy::v1::Automation const& automation,
    std::string const& automation_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::CreateAutomationRequest request;
  request.set_parent(parent);
  *request.mutable_automation() = automation;
  request.set_automation_id(automation_id);
  return connection_->CreateAutomation(request);
}

future<StatusOr<google::cloud::deploy::v1::Automation>>
CloudDeployClient::CreateAutomation(
    google::cloud::deploy::v1::CreateAutomationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAutomation(request);
}

future<StatusOr<google::cloud::deploy::v1::Automation>>
CloudDeployClient::UpdateAutomation(
    google::cloud::deploy::v1::Automation const& automation,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::UpdateAutomationRequest request;
  *request.mutable_automation() = automation;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAutomation(request);
}

future<StatusOr<google::cloud::deploy::v1::Automation>>
CloudDeployClient::UpdateAutomation(
    google::cloud::deploy::v1::UpdateAutomationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAutomation(request);
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployClient::DeleteAutomation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::DeleteAutomationRequest request;
  request.set_name(name);
  return connection_->DeleteAutomation(request);
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployClient::DeleteAutomation(
    google::cloud::deploy::v1::DeleteAutomationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAutomation(request);
}

StatusOr<google::cloud::deploy::v1::Automation>
CloudDeployClient::GetAutomation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetAutomationRequest request;
  request.set_name(name);
  return connection_->GetAutomation(request);
}

StatusOr<google::cloud::deploy::v1::Automation>
CloudDeployClient::GetAutomation(
    google::cloud::deploy::v1::GetAutomationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAutomation(request);
}

StreamRange<google::cloud::deploy::v1::Automation>
CloudDeployClient::ListAutomations(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ListAutomationsRequest request;
  request.set_parent(parent);
  return connection_->ListAutomations(request);
}

StreamRange<google::cloud::deploy::v1::Automation>
CloudDeployClient::ListAutomations(
    google::cloud::deploy::v1::ListAutomationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAutomations(std::move(request));
}

StatusOr<google::cloud::deploy::v1::AutomationRun>
CloudDeployClient::GetAutomationRun(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::GetAutomationRunRequest request;
  request.set_name(name);
  return connection_->GetAutomationRun(request);
}

StatusOr<google::cloud::deploy::v1::AutomationRun>
CloudDeployClient::GetAutomationRun(
    google::cloud::deploy::v1::GetAutomationRunRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAutomationRun(request);
}

StreamRange<google::cloud::deploy::v1::AutomationRun>
CloudDeployClient::ListAutomationRuns(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::ListAutomationRunsRequest request;
  request.set_parent(parent);
  return connection_->ListAutomationRuns(request);
}

StreamRange<google::cloud::deploy::v1::AutomationRun>
CloudDeployClient::ListAutomationRuns(
    google::cloud::deploy::v1::ListAutomationRunsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAutomationRuns(std::move(request));
}

StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
CloudDeployClient::CancelAutomationRun(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::deploy::v1::CancelAutomationRunRequest request;
  request.set_name(name);
  return connection_->CancelAutomationRun(request);
}

StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
CloudDeployClient::CancelAutomationRun(
    google::cloud::deploy::v1::CancelAutomationRunRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelAutomationRun(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1
}  // namespace cloud
}  // namespace google
