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
// source: google/cloud/config/v1/config.proto

#include "google/cloud/config/v1/config_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace config_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigClient::ConfigClient(std::shared_ptr<ConfigConnection> connection,
                           Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ConfigClient::~ConfigClient() = default;

StreamRange<google::cloud::config::v1::Deployment>
ConfigClient::ListDeployments(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::ListDeploymentsRequest request;
  request.set_parent(parent);
  return connection_->ListDeployments(request);
}

StreamRange<google::cloud::config::v1::Deployment>
ConfigClient::ListDeployments(
    google::cloud::config::v1::ListDeploymentsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDeployments(std::move(request));
}

StatusOr<google::cloud::config::v1::Deployment> ConfigClient::GetDeployment(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::GetDeploymentRequest request;
  request.set_name(name);
  return connection_->GetDeployment(request);
}

StatusOr<google::cloud::config::v1::Deployment> ConfigClient::GetDeployment(
    google::cloud::config::v1::GetDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::CreateDeployment(
    std::string const& parent,
    google::cloud::config::v1::Deployment const& deployment,
    std::string const& deployment_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::CreateDeploymentRequest request;
  request.set_parent(parent);
  *request.mutable_deployment() = deployment;
  request.set_deployment_id(deployment_id);
  return connection_->CreateDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::CreateDeployment(
    google::cloud::config::v1::CreateDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::UpdateDeployment(
    google::cloud::config::v1::Deployment const& deployment,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::UpdateDeploymentRequest request;
  *request.mutable_deployment() = deployment;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::UpdateDeployment(
    google::cloud::config::v1::UpdateDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::DeleteDeployment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::DeleteDeploymentRequest request;
  request.set_name(name);
  return connection_->DeleteDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::DeleteDeployment(
    google::cloud::config::v1::DeleteDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDeployment(request);
}

StreamRange<google::cloud::config::v1::Revision> ConfigClient::ListRevisions(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::ListRevisionsRequest request;
  request.set_parent(parent);
  return connection_->ListRevisions(request);
}

StreamRange<google::cloud::config::v1::Revision> ConfigClient::ListRevisions(
    google::cloud::config::v1::ListRevisionsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRevisions(std::move(request));
}

StatusOr<google::cloud::config::v1::Revision> ConfigClient::GetRevision(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::GetRevisionRequest request;
  request.set_name(name);
  return connection_->GetRevision(request);
}

StatusOr<google::cloud::config::v1::Revision> ConfigClient::GetRevision(
    google::cloud::config::v1::GetRevisionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRevision(request);
}

StatusOr<google::cloud::config::v1::Resource> ConfigClient::GetResource(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::GetResourceRequest request;
  request.set_name(name);
  return connection_->GetResource(request);
}

StatusOr<google::cloud::config::v1::Resource> ConfigClient::GetResource(
    google::cloud::config::v1::GetResourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetResource(request);
}

StreamRange<google::cloud::config::v1::Resource> ConfigClient::ListResources(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::ListResourcesRequest request;
  request.set_parent(parent);
  return connection_->ListResources(request);
}

StreamRange<google::cloud::config::v1::Resource> ConfigClient::ListResources(
    google::cloud::config::v1::ListResourcesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListResources(std::move(request));
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigClient::ExportDeploymentStatefile(
    google::cloud::config::v1::ExportDeploymentStatefileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportDeploymentStatefile(request);
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigClient::ExportRevisionStatefile(
    google::cloud::config::v1::ExportRevisionStatefileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportRevisionStatefile(request);
}

StatusOr<google::cloud::config::v1::Statefile> ConfigClient::ImportStatefile(
    std::string const& parent, std::int64_t lock_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::ImportStatefileRequest request;
  request.set_parent(parent);
  request.set_lock_id(lock_id);
  return connection_->ImportStatefile(request);
}

StatusOr<google::cloud::config::v1::Statefile> ConfigClient::ImportStatefile(
    google::cloud::config::v1::ImportStatefileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportStatefile(request);
}

Status ConfigClient::DeleteStatefile(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::DeleteStatefileRequest request;
  request.set_name(name);
  return connection_->DeleteStatefile(request);
}

Status ConfigClient::DeleteStatefile(
    google::cloud::config::v1::DeleteStatefileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteStatefile(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::LockDeployment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::LockDeploymentRequest request;
  request.set_name(name);
  return connection_->LockDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::LockDeployment(
    google::cloud::config::v1::LockDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LockDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::UnlockDeployment(std::string const& name, std::int64_t lock_id,
                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::UnlockDeploymentRequest request;
  request.set_name(name);
  request.set_lock_id(lock_id);
  return connection_->UnlockDeployment(request);
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigClient::UnlockDeployment(
    google::cloud::config::v1::UnlockDeploymentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UnlockDeployment(request);
}

StatusOr<google::cloud::config::v1::LockInfo> ConfigClient::ExportLockInfo(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::ExportLockInfoRequest request;
  request.set_name(name);
  return connection_->ExportLockInfo(request);
}

StatusOr<google::cloud::config::v1::LockInfo> ConfigClient::ExportLockInfo(
    google::cloud::config::v1::ExportLockInfoRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportLockInfo(request);
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigClient::CreatePreview(std::string const& parent,
                            google::cloud::config::v1::Preview const& preview,
                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::CreatePreviewRequest request;
  request.set_parent(parent);
  *request.mutable_preview() = preview;
  return connection_->CreatePreview(request);
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigClient::CreatePreview(
    google::cloud::config::v1::CreatePreviewRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePreview(request);
}

StatusOr<google::cloud::config::v1::Preview> ConfigClient::GetPreview(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::GetPreviewRequest request;
  request.set_name(name);
  return connection_->GetPreview(request);
}

StatusOr<google::cloud::config::v1::Preview> ConfigClient::GetPreview(
    google::cloud::config::v1::GetPreviewRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPreview(request);
}

StreamRange<google::cloud::config::v1::Preview> ConfigClient::ListPreviews(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::ListPreviewsRequest request;
  request.set_parent(parent);
  return connection_->ListPreviews(request);
}

StreamRange<google::cloud::config::v1::Preview> ConfigClient::ListPreviews(
    google::cloud::config::v1::ListPreviewsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPreviews(std::move(request));
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigClient::DeletePreview(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::config::v1::DeletePreviewRequest request;
  request.set_name(name);
  return connection_->DeletePreview(request);
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigClient::DeletePreview(
    google::cloud::config::v1::DeletePreviewRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePreview(request);
}

StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
ConfigClient::ExportPreviewResult(
    google::cloud::config::v1::ExportPreviewResultRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportPreviewResult(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1
}  // namespace cloud
}  // namespace google
