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
// source: google/cloud/compute/firewall_policies/v1/firewall_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_INTERNAL_FIREWALL_POLICIES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_INTERNAL_FIREWALL_POLICIES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/firewall_policies/v1/firewall_policies.pb.h>
#include <google/cloud/compute/global_organization_operations/v1/global_organization_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewall_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FirewallPoliciesRestStub {
 public:
  virtual ~FirewallPoliciesRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddAssociation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          AddAssociationRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncCloneRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          CloneRulesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteFirewallPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          DeleteFirewallPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
  GetFirewallPolicy(google::cloud::rest_internal::RestContext& rest_context,
                    Options const& options,
                    google::cloud::cpp::compute::firewall_policies::v1::
                        GetFirewallPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
  GetAssociation(google::cloud::rest_internal::RestContext& rest_context,
                 Options const& options,
                 google::cloud::cpp::compute::firewall_policies::v1::
                     GetAssociationRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule> GetRule(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertFirewallPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          InsertFirewallPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyList>
  ListFirewallPolicies(google::cloud::rest_internal::RestContext& rest_context,
                       Options const& options,
                       google::cloud::cpp::compute::firewall_policies::v1::
                           ListFirewallPoliciesRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::cpp::compute::v1::FirewallPoliciesListAssociationsResponse>
  ListAssociations(google::cloud::rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::firewall_policies::v1::
                       ListAssociationsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncMove(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchFirewallPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          PatchFirewallPolicyRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          PatchRuleRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveAssociation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          RemoveAssociationRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          RemoveRuleRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::firewall_policies::v1::
                         TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_organization_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_organization_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultFirewallPoliciesRestStub : public FirewallPoliciesRestStub {
 public:
  ~DefaultFirewallPoliciesRestStub() override = default;

  explicit DefaultFirewallPoliciesRestStub(Options options);
  DefaultFirewallPoliciesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddAssociation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          AddAssociationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::AddRuleRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncCloneRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          CloneRulesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteFirewallPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          DeleteFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy> GetFirewallPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          GetFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
  GetAssociation(google::cloud::rest_internal::RestContext& rest_context,
                 Options const& options,
                 google::cloud::cpp::compute::firewall_policies::v1::
                     GetAssociationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          GetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule> GetRule(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::GetRuleRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertFirewallPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          InsertFirewallPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyList>
  ListFirewallPolicies(google::cloud::rest_internal::RestContext& rest_context,
                       Options const& options,
                       google::cloud::cpp::compute::firewall_policies::v1::
                           ListFirewallPoliciesRequest const& request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::FirewallPoliciesListAssociationsResponse>
  ListAssociations(google::cloud::rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::firewall_policies::v1::
                       ListAssociationsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncMove(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::MoveRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchFirewallPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          PatchFirewallPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          PatchRuleRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveAssociation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          RemoveAssociationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncRemoveRule(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          RemoveRuleRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::firewall_policies::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::firewall_policies::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_organization_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::global_organization_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewall_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FIREWALL_POLICIES_V1_INTERNAL_FIREWALL_POLICIES_REST_STUB_H
