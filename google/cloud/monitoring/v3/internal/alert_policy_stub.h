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
// source: google/monitoring/v3/alert_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_ALERT_POLICY_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_ALERT_POLICY_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/monitoring/v3/alert_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AlertPolicyServiceStub {
 public:
  virtual ~AlertPolicyServiceStub() = 0;

  virtual StatusOr<google::monitoring::v3::ListAlertPoliciesResponse>
  ListAlertPolicies(
      grpc::ClientContext& context,
      google::monitoring::v3::ListAlertPoliciesRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::AlertPolicy> GetAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::GetAlertPolicyRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::AlertPolicy> CreateAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateAlertPolicyRequest const& request) = 0;

  virtual Status DeleteAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteAlertPolicyRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::AlertPolicy> UpdateAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateAlertPolicyRequest const& request) = 0;
};

class DefaultAlertPolicyServiceStub : public AlertPolicyServiceStub {
 public:
  explicit DefaultAlertPolicyServiceStub(
      std::unique_ptr<google::monitoring::v3::AlertPolicyService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::monitoring::v3::ListAlertPoliciesResponse> ListAlertPolicies(
      grpc::ClientContext& context,
      google::monitoring::v3::ListAlertPoliciesRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> GetAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::GetAlertPolicyRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> CreateAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateAlertPolicyRequest const& request) override;

  Status DeleteAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteAlertPolicyRequest const& request) override;

  StatusOr<google::monitoring::v3::AlertPolicy> UpdateAlertPolicy(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateAlertPolicyRequest const& request) override;

 private:
  std::unique_ptr<google::monitoring::v3::AlertPolicyService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_ALERT_POLICY_STUB_H
