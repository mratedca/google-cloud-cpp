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
// source: google/cloud/aiplatform/v1/index_endpoint_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_ENDPOINT_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_ENDPOINT_CONNECTION_IMPL_H

#include "google/cloud/aiplatform/v1/index_endpoint_connection.h"
#include "google/cloud/aiplatform/v1/index_endpoint_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/index_endpoint_options.h"
#include "google/cloud/aiplatform/v1/internal/index_endpoint_retry_traits.h"
#include "google/cloud/aiplatform/v1/internal/index_endpoint_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IndexEndpointServiceConnectionImpl
    : public aiplatform_v1::IndexEndpointServiceConnection {
 public:
  ~IndexEndpointServiceConnectionImpl() override = default;

  IndexEndpointServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<aiplatform_v1_internal::IndexEndpointServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::aiplatform::v1::IndexEndpoint>>
  CreateIndexEndpoint(
      google::cloud::aiplatform::v1::CreateIndexEndpointRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::IndexEndpoint> GetIndexEndpoint(
      google::cloud::aiplatform::v1::GetIndexEndpointRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::IndexEndpoint> ListIndexEndpoints(
      google::cloud::aiplatform::v1::ListIndexEndpointsRequest request)
      override;

  StatusOr<google::cloud::aiplatform::v1::IndexEndpoint> UpdateIndexEndpoint(
      google::cloud::aiplatform::v1::UpdateIndexEndpointRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteIndexEndpoint(
      google::cloud::aiplatform::v1::DeleteIndexEndpointRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeployIndexResponse>>
  DeployIndex(google::cloud::aiplatform::v1::DeployIndexRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::UndeployIndexResponse>>
  UndeployIndex(google::cloud::aiplatform::v1::UndeployIndexRequest const&
                    request) override;

  future<StatusOr<google::cloud::aiplatform::v1::MutateDeployedIndexResponse>>
  MutateDeployedIndex(
      google::cloud::aiplatform::v1::MutateDeployedIndexRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<aiplatform_v1_internal::IndexEndpointServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_INDEX_ENDPOINT_CONNECTION_IMPL_H
