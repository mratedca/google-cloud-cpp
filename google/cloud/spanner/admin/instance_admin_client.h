// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto
#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CLIENT_H

#include "google/cloud/spanner/admin/instance_admin_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

/**
 * Cloud Spanner Instance Admin API
 *
 * The Cloud Spanner Instance Admin API can be used to create, delete,
 * modify and list instances. Instances are dedicated Cloud Spanner serving
 * and storage resources to be used by Cloud Spanner databases.
 *
 * Each instance has a "configuration", which dictates where the
 * serving resources for the Cloud Spanner instance are located (e.g.,
 * US-central, Europe). Configurations are created by Google based on
 * resource availability.
 *
 * Cloud Spanner billing is based on the instances that exist and their
 * sizes. After an instance exists, there are no additional
 * per-database or per-operation charges for use of the instance
 * (though there may be additional network bandwidth charges).
 * Instances offer isolation: problems with databases in one instance
 * will not affect other instances. However, within an instance
 * databases can affect each other. For example, if one database in an
 * instance receives a lot of requests and consumes most of the
 * instance resources, fewer resources are available for other
 * databases in that instance, and their performance may suffer.
 */
class InstanceAdminClient {
 public:
  explicit InstanceAdminClient(
      std::shared_ptr<InstanceAdminConnection> connection);
  ~InstanceAdminClient();

  //@{
  // @name Copy and move support
  InstanceAdminClient(InstanceAdminClient const&) = default;
  InstanceAdminClient& operator=(InstanceAdminClient const&) = default;
  InstanceAdminClient(InstanceAdminClient&&) = default;
  InstanceAdminClient& operator=(InstanceAdminClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(InstanceAdminClient const& a,
                         InstanceAdminClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(InstanceAdminClient const& a,
                         InstanceAdminClient const& b) {
    return !(a == b);
  }
  //@}

  /**
   * Lists the supported instance configurations for a given project.
   *
   * @param parent  Required. The name of the project for which a list of
   * supported instance configurations is requested. Values are of the form
   *  `projects/<project>`.
   */
  StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
  ListInstanceConfigs(std::string const& parent);

  /**
   * Gets information about a particular instance configuration.
   *
   * @param name  Required. The name of the requested instance configuration.
   * Values are of the form `projects/<project>/instanceConfigs/<config>`.
   * @return
   * [google::spanner::admin::instance::v1::InstanceConfig](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L304)
   */
  StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
  GetInstanceConfig(std::string const& name);

  /**
   * Lists all instances in the given project.
   *
   * @param parent  Required. The name of the project for which a list of
   * instances is requested. Values are of the form `projects/<project>`.
   */
  StreamRange<google::spanner::admin::instance::v1::Instance> ListInstances(
      std::string const& parent);

  /**
   * Gets information about a particular instance.
   *
   * @param name  Required. The name of the requested instance. Values are of
   * the form `projects/<project>/instances/<instance>`.
   * @return
   * [google::spanner::admin::instance::v1::Instance](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L328)
   */
  StatusOr<google::spanner::admin::instance::v1::Instance> GetInstance(
      std::string const& name);

  /**
   * Creates an instance and begins preparing it to begin serving. The
   * returned [long-running operation][google.longrunning.Operation]
   * can be used to track the progress of preparing the new
   * instance. The instance name is assigned by the caller. If the
   * named instance already exists, `CreateInstance` returns
   * `ALREADY_EXISTS`.
   *
   * Immediately upon completion of this request:
   *
   *   * The instance is readable via the API, with all requested attributes
   *     but no allocated resources. Its state is `CREATING`.
   *
   * Until completion of the returned operation:
   *
   *   * Cancelling the operation renders the instance immediately unreadable
   *     via the API.
   *   * The instance can be deleted.
   *   * All other attempts to modify the instance are rejected.
   *
   * Upon completion of the returned operation:
   *
   *   * Billing for all successfully-allocated resources begins (some types
   *     may have lower than the requested levels).
   *   * Databases can be created in the instance.
   *   * The instance's allocated resource levels are readable via the API.
   *   * The instance's state becomes `READY`.
   *
   * The returned [long-running operation][google.longrunning.Operation] will
   * have a name of the format `<instance_name>/operations/<operation_id>` and
   * can be used to track creation of the instance.  The
   * [metadata][google.longrunning.Operation.metadata] field type is
   * [CreateInstanceMetadata][google.spanner.admin.instance.v1.CreateInstanceMetadata].
   * The [response][google.longrunning.Operation.response] field type is
   * [Instance][google.spanner.admin.instance.v1.Instance], if successful.
   *
   * @param parent  Required. The name of the project in which to create the
   * instance. Values are of the form `projects/<project>`.
   * @param instance_id  Required. The ID of the instance to create.  Valid
   * identifiers are of the form `[a-z][-a-z0-9]*[a-z0-9]` and must be between 2
   * and 64 characters in length.
   * @param instance  Required. The instance to create.  The name may be
   * omitted, but if specified must be `<parent>/instances/<instance_id>`.
   * @return
   * [google::spanner::admin::instance::v1::Instance](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L328)
   */
  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  CreateInstance(
      std::string const& parent, std::string const& instance_id,
      google::spanner::admin::instance::v1::Instance const& instance);

  /**
   * Updates an instance, and begins allocating or releasing resources
   * as requested. The returned [long-running
   * operation][google.longrunning.Operation] can be used to track the
   * progress of updating the instance. If the named instance does not
   * exist, returns `NOT_FOUND`.
   *
   * Immediately upon completion of this request:
   *
   *   * For resource types for which a decrease in the instance's allocation
   *     has been requested, billing is based on the newly-requested level.
   *
   * Until completion of the returned operation:
   *
   *   * Cancelling the operation sets its metadata's
   *     [cancel_time][google.spanner.admin.instance.v1.UpdateInstanceMetadata.cancel_time],
   * and begins restoring resources to their pre-request values. The operation
   *     is guaranteed to succeed at undoing all resource changes,
   *     after which point it terminates with a `CANCELLED` status.
   *   * All other attempts to modify the instance are rejected.
   *   * Reading the instance via the API continues to give the pre-request
   *     resource levels.
   *
   * Upon completion of the returned operation:
   *
   *   * Billing begins for all successfully-allocated resources (some types
   *     may have lower than the requested levels).
   *   * All newly-reserved resources are available for serving the instance's
   *     tables.
   *   * The instance's new resource levels are readable via the API.
   *
   * The returned [long-running operation][google.longrunning.Operation] will
   * have a name of the format `<instance_name>/operations/<operation_id>` and
   * can be used to track the instance modification.  The
   * [metadata][google.longrunning.Operation.metadata] field type is
   * [UpdateInstanceMetadata][google.spanner.admin.instance.v1.UpdateInstanceMetadata].
   * The [response][google.longrunning.Operation.response] field type is
   * [Instance][google.spanner.admin.instance.v1.Instance], if successful.
   *
   * Authorization requires `spanner.instances.update` permission on
   * resource [name][google.spanner.admin.instance.v1.Instance.name].
   *
   * @param instance  Required. The instance to update, which must always
   * include the instance name.  Otherwise, only fields mentioned in
   * [field_mask][google.spanner.admin.instance.v1.UpdateInstanceRequest.field_mask]
   * need be included.
   * @param field_mask  Required. A mask specifying which fields in
   * [Instance][google.spanner.admin.instance.v1.Instance] should be updated.
   *  The field mask must always be specified; this prevents any future fields
   * in [Instance][google.spanner.admin.instance.v1.Instance] from being erased
   * accidentally by clients that do not know about them.
   * @return
   * [google::spanner::admin::instance::v1::Instance](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L328)
   */
  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  UpdateInstance(google::spanner::admin::instance::v1::Instance const& instance,
                 google::protobuf::FieldMask const& field_mask);

  /**
   * Deletes an instance.
   *
   * Immediately upon completion of the request:
   *
   *   * Billing ceases for all of the instance's reserved resources.
   *
   * Soon afterward:
   *
   *   * The instance and *all of its databases* immediately and
   *     irrevocably disappear from the API. All data in the databases
   *     is permanently deleted.
   *
   * @param name  Required. The name of the instance to be deleted. Values are
   * of the form `projects/<project>/instances/<instance>`
   */
  Status DeleteInstance(std::string const& name);

  /**
   * Sets the access control policy on an instance resource. Replaces any
   * existing policy.
   *
   * Authorization requires `spanner.instances.setIamPolicy` on
   * [resource][google.iam.v1.SetIamPolicyRequest.resource].
   *
   * @param resource  REQUIRED: The resource for which the policy is being
   * specified. See the operation documentation for the appropriate value for
   * this field.
   * @param policy  REQUIRED: The complete policy to be applied to the
   * `resource`. The size of the policy is limited to a few 10s of KB. An empty
   * policy is a valid policy but certain Cloud Platform services (such as
   * Projects) might reject them.
   * @return
   * [google::iam::v1::Policy](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/policy.proto#L88)
   */
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      std::string const& resource, google::iam::v1::Policy const& policy);

  /**
   * Gets the access control policy for an instance resource. Returns an empty
   * policy if an instance exists but does not have a policy set.
   *
   * Authorization requires `spanner.instances.getIamPolicy` on
   * [resource][google.iam.v1.GetIamPolicyRequest.resource].
   *
   * @param resource  REQUIRED: The resource for which the policy is being
   * requested. See the operation documentation for the appropriate value for
   * this field.
   * @return
   * [google::iam::v1::Policy](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/policy.proto#L88)
   */
  StatusOr<google::iam::v1::Policy> GetIamPolicy(std::string const& resource);

  /**
   * Returns permissions that the caller has on the specified instance resource.
   *
   * Attempting this RPC on a non-existent Cloud Spanner instance resource will
   * result in a NOT_FOUND error if the user has `spanner.instances.list`
   * permission on the containing Google Cloud Project. Otherwise returns an
   * empty set of permissions.
   *
   * @param resource  REQUIRED: The resource for which the policy detail is
   * being requested. See the operation documentation for the appropriate value
   * for this field.
   * @param permissions  The set of permissions to check for the `resource`.
   * Permissions with wildcards (such as '*' or 'storage.*') are not allowed.
   * For more information see [IAM
   * Overview](https://cloud.google.com/iam/docs/overview#permissions).
   * @return
   * [google::iam::v1::TestIamPermissionsResponse](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/iam_policy.proto#L141)
   */
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      std::string const& resource, std::vector<std::string> const& permissions);

  /**
   * Lists the supported instance configurations for a given project.
   *
   * @param request
   * [google::spanner::admin::instance::v1::ListInstanceConfigsRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L415)
   */
  StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
  ListInstanceConfigs(
      google::spanner::admin::instance::v1::ListInstanceConfigsRequest request);

  /**
   * Gets information about a particular instance configuration.
   *
   * @param request
   * [google::spanner::admin::instance::v1::GetInstanceConfigRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L449)
   * @return
   * [google::spanner::admin::instance::v1::InstanceConfig](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L304)
   */
  StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
  GetInstanceConfig(
      google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
          request);

  /**
   * Lists all instances in the given project.
   *
   * @param request
   * [google::spanner::admin::instance::v1::ListInstancesRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L499)
   */
  StreamRange<google::spanner::admin::instance::v1::Instance> ListInstances(
      google::spanner::admin::instance::v1::ListInstancesRequest request);

  /**
   * Gets information about a particular instance.
   *
   * @param request
   * [google::spanner::admin::instance::v1::GetInstanceRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L461)
   * @return
   * [google::spanner::admin::instance::v1::Instance](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L328)
   */
  StatusOr<google::spanner::admin::instance::v1::Instance> GetInstance(
      google::spanner::admin::instance::v1::GetInstanceRequest const& request);

  /**
   * Creates an instance and begins preparing it to begin serving. The
   * returned [long-running operation][google.longrunning.Operation]
   * can be used to track the progress of preparing the new
   * instance. The instance name is assigned by the caller. If the
   * named instance already exists, `CreateInstance` returns
   * `ALREADY_EXISTS`.
   *
   * Immediately upon completion of this request:
   *
   *   * The instance is readable via the API, with all requested attributes
   *     but no allocated resources. Its state is `CREATING`.
   *
   * Until completion of the returned operation:
   *
   *   * Cancelling the operation renders the instance immediately unreadable
   *     via the API.
   *   * The instance can be deleted.
   *   * All other attempts to modify the instance are rejected.
   *
   * Upon completion of the returned operation:
   *
   *   * Billing for all successfully-allocated resources begins (some types
   *     may have lower than the requested levels).
   *   * Databases can be created in the instance.
   *   * The instance's allocated resource levels are readable via the API.
   *   * The instance's state becomes `READY`.
   *
   * The returned [long-running operation][google.longrunning.Operation] will
   * have a name of the format `<instance_name>/operations/<operation_id>` and
   * can be used to track creation of the instance.  The
   * [metadata][google.longrunning.Operation.metadata] field type is
   * [CreateInstanceMetadata][google.spanner.admin.instance.v1.CreateInstanceMetadata].
   * The [response][google.longrunning.Operation.response] field type is
   * [Instance][google.spanner.admin.instance.v1.Instance], if successful.
   *
   * @param request
   * [google::spanner::admin::instance::v1::CreateInstanceRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L478)
   * @return
   * [google::spanner::admin::instance::v1::Instance](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L328)
   */
  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  CreateInstance(
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request);

  /**
   * Updates an instance, and begins allocating or releasing resources
   * as requested. The returned [long-running
   * operation][google.longrunning.Operation] can be used to track the
   * progress of updating the instance. If the named instance does not
   * exist, returns `NOT_FOUND`.
   *
   * Immediately upon completion of this request:
   *
   *   * For resource types for which a decrease in the instance's allocation
   *     has been requested, billing is based on the newly-requested level.
   *
   * Until completion of the returned operation:
   *
   *   * Cancelling the operation sets its metadata's
   *     [cancel_time][google.spanner.admin.instance.v1.UpdateInstanceMetadata.cancel_time],
   * and begins restoring resources to their pre-request values. The operation
   *     is guaranteed to succeed at undoing all resource changes,
   *     after which point it terminates with a `CANCELLED` status.
   *   * All other attempts to modify the instance are rejected.
   *   * Reading the instance via the API continues to give the pre-request
   *     resource levels.
   *
   * Upon completion of the returned operation:
   *
   *   * Billing begins for all successfully-allocated resources (some types
   *     may have lower than the requested levels).
   *   * All newly-reserved resources are available for serving the instance's
   *     tables.
   *   * The instance's new resource levels are readable via the API.
   *
   * The returned [long-running operation][google.longrunning.Operation] will
   * have a name of the format `<instance_name>/operations/<operation_id>` and
   * can be used to track the instance modification.  The
   * [metadata][google.longrunning.Operation.metadata] field type is
   * [UpdateInstanceMetadata][google.spanner.admin.instance.v1.UpdateInstanceMetadata].
   * The [response][google.longrunning.Operation.response] field type is
   * [Instance][google.spanner.admin.instance.v1.Instance], if successful.
   *
   * Authorization requires `spanner.instances.update` permission on
   * resource [name][google.spanner.admin.instance.v1.Instance.name].
   *
   * @param request
   * [google::spanner::admin::instance::v1::UpdateInstanceRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L552)
   * @return
   * [google::spanner::admin::instance::v1::Instance](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L328)
   */
  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  UpdateInstance(
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request);

  /**
   * Deletes an instance.
   *
   * Immediately upon completion of the request:
   *
   *   * Billing ceases for all of the instance's reserved resources.
   *
   * Soon afterward:
   *
   *   * The instance and *all of its databases* immediately and
   *     irrevocably disappear from the API. All data in the databases
   *     is permanently deleted.
   *
   * @param request
   * [google::spanner::admin::instance::v1::DeleteInstanceRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/spanner/admin/instance/v1/spanner_instance_admin.proto#L565)
   */
  Status DeleteInstance(
      google::spanner::admin::instance::v1::DeleteInstanceRequest const&
          request);

  /**
   * Sets the access control policy on an instance resource. Replaces any
   * existing policy.
   *
   * Authorization requires `spanner.instances.setIamPolicy` on
   * [resource][google.iam.v1.SetIamPolicyRequest.resource].
   *
   * @param request
   * [google::iam::v1::SetIamPolicyRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/iam_policy.proto#L98)
   * @return
   * [google::iam::v1::Policy](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/policy.proto#L88)
   */
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  /**
   * Gets the access control policy for an instance resource. Returns an empty
   * policy if an instance exists but does not have a policy set.
   *
   * Authorization requires `spanner.instances.getIamPolicy` on
   * [resource][google.iam.v1.GetIamPolicyRequest.resource].
   *
   * @param request
   * [google::iam::v1::GetIamPolicyRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/iam_policy.proto#L113)
   * @return
   * [google::iam::v1::Policy](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/policy.proto#L88)
   */
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  /**
   * Returns permissions that the caller has on the specified instance resource.
   *
   * Attempting this RPC on a non-existent Cloud Spanner instance resource will
   * result in a NOT_FOUND error if the user has `spanner.instances.list`
   * permission on the containing Google Cloud Project. Otherwise returns an
   * empty set of permissions.
   *
   * @param request
   * [google::iam::v1::TestIamPermissionsRequest](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/iam_policy.proto#L126)
   * @return
   * [google::iam::v1::TestIamPermissionsResponse](https://github.com/googleapis/googleapis/blob/ed739492993c4a99629b6430affdd6c0fb59d435/google/iam/v1/iam_policy.proto#L141)
   */
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

 private:
  std::shared_ptr<InstanceAdminConnection> connection_;
};

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INSTANCE_ADMIN_CLIENT_H
