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
// source: google/cloud/retail/v2/control_service.proto

#include "google/cloud/retail/v2/control_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ControlServiceClient::ControlServiceClient(
    std::shared_ptr<ControlServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ControlServiceClient::~ControlServiceClient() = default;

StatusOr<google::cloud::retail::v2::Control>
ControlServiceClient::CreateControl(
    std::string const& parent,
    google::cloud::retail::v2::Control const& control,
    std::string const& control_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::CreateControlRequest request;
  request.set_parent(parent);
  *request.mutable_control() = control;
  request.set_control_id(control_id);
  return connection_->CreateControl(request);
}

StatusOr<google::cloud::retail::v2::Control>
ControlServiceClient::CreateControl(
    google::cloud::retail::v2::CreateControlRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateControl(request);
}

Status ControlServiceClient::DeleteControl(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::DeleteControlRequest request;
  request.set_name(name);
  return connection_->DeleteControl(request);
}

Status ControlServiceClient::DeleteControl(
    google::cloud::retail::v2::DeleteControlRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteControl(request);
}

StatusOr<google::cloud::retail::v2::Control>
ControlServiceClient::UpdateControl(
    google::cloud::retail::v2::Control const& control,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::UpdateControlRequest request;
  *request.mutable_control() = control;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateControl(request);
}

StatusOr<google::cloud::retail::v2::Control>
ControlServiceClient::UpdateControl(
    google::cloud::retail::v2::UpdateControlRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateControl(request);
}

StatusOr<google::cloud::retail::v2::Control> ControlServiceClient::GetControl(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::GetControlRequest request;
  request.set_name(name);
  return connection_->GetControl(request);
}

StatusOr<google::cloud::retail::v2::Control> ControlServiceClient::GetControl(
    google::cloud::retail::v2::GetControlRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetControl(request);
}

StreamRange<google::cloud::retail::v2::Control>
ControlServiceClient::ListControls(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::retail::v2::ListControlsRequest request;
  request.set_parent(parent);
  return connection_->ListControls(request);
}

StreamRange<google::cloud::retail::v2::Control>
ControlServiceClient::ListControls(
    google::cloud::retail::v2::ListControlsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListControls(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google
