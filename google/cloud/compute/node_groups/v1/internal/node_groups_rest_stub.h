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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/node_groups/v1/node_groups.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NodeGroupsRestStub {
 public:
  virtual ~NodeGroupsRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddNodes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
  AggregatedListNodeGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          AggregatedListNodeGroupsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNodeGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          DeleteNodeGroupRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNodes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeGroup> GetNodeGroup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNodeGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          InsertNodeGroupRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeGroupList>
  ListNodeGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeGroupsListNodes>
  ListNodes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::ListNodesRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchNodeGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
          request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetNodeTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          SetNodeTemplateRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSimulateMaintenanceEvent(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          SimulateMaintenanceEventRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::node_groups::v1::
                         TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::zone_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultNodeGroupsRestStub : public NodeGroupsRestStub {
 public:
  ~DefaultNodeGroupsRestStub() override = default;

  explicit DefaultNodeGroupsRestStub(Options options);
  DefaultNodeGroupsRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddNodes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
  AggregatedListNodeGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          AggregatedListNodeGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNodeGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          DeleteNodeGroupRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteNodes(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroup> GetNodeGroup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNodeGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          InsertNodeGroupRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroupList> ListNodeGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeGroupsListNodes> ListNodes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::ListNodesRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchNodeGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetNodeTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          SetNodeTemplateRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSimulateMaintenanceEvent(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::node_groups::v1::
          SimulateMaintenanceEventRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::compute::node_groups::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::zone_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      Options const& options,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_INTERNAL_NODE_GROUPS_REST_STUB_H
