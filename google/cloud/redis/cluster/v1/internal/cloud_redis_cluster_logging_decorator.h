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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_LOGGING_DECORATOR_H

#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace redis_cluster_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudRedisClusterLogging : public CloudRedisClusterStub {
 public:
  ~CloudRedisClusterLogging() override = default;
  CloudRedisClusterLogging(std::shared_ptr<CloudRedisClusterStub> child,
                           TracingOptions tracing_options,
                           std::set<std::string> const& components);

  StatusOr<google::cloud::redis::cluster::v1::ListClustersResponse>
  ListClusters(grpc::ClientContext& context,
               google::cloud::redis::cluster::v1::ListClustersRequest const&
                   request) override;

  StatusOr<google::cloud::redis::cluster::v1::Cluster> GetCluster(
      grpc::ClientContext& context,
      google::cloud::redis::cluster::v1::GetClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::cluster::v1::UpdateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::cluster::v1::DeleteClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::redis::cluster::v1::CreateClusterRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<CloudRedisClusterStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // CloudRedisClusterLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_CLUSTER_V1_INTERNAL_CLOUD_REDIS_CLUSTER_LOGGING_DECORATOR_H
