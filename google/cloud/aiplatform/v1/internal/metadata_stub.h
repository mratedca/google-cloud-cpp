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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_METADATA_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_METADATA_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/metadata_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetadataServiceStub {
 public:
  virtual ~MetadataServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateMetadataStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateMetadataStoreRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::MetadataStore>
  GetMetadataStore(grpc::ClientContext& context,
                   google::cloud::aiplatform::v1::GetMetadataStoreRequest const&
                       request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListMetadataStoresResponse>
  ListMetadataStores(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListMetadataStoresRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteMetadataStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Artifact> CreateArtifact(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateArtifactRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Artifact> GetArtifact(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetArtifactRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListArtifactsResponse>
  ListArtifacts(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListArtifactsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Artifact> UpdateArtifact(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateArtifactRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteArtifact(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncPurgeArtifacts(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Context> CreateContext(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateContextRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Context> GetContext(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetContextRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListContextsResponse>
  ListContexts(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListContextsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Context> UpdateContext(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateContextRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteContext(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteContextRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncPurgeContexts(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::PurgeContextsRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
  AddContextArtifactsAndExecutions(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          AddContextArtifactsAndExecutionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
  AddContextChildren(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::AddContextChildrenRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
  RemoveContextChildren(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryContextLineageSubgraph(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Execution> CreateExecution(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateExecutionRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Execution> GetExecution(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetExecutionRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListExecutionsResponse>
  ListExecutions(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListExecutionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Execution> UpdateExecution(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateExecutionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteExecutionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncPurgeExecutions(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
  AddExecutionEvents(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::AddExecutionEventsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryExecutionInputsAndOutputs(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          QueryExecutionInputsAndOutputsRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
  CreateMetadataSchema(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
  GetMetadataSchema(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetMetadataSchemaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListMetadataSchemasResponse>
  ListMetadataSchemas(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListMetadataSchemasRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryArtifactLineageSubgraph(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultMetadataServiceStub : public MetadataServiceStub {
 public:
  DefaultMetadataServiceStub(
      std::unique_ptr<
          google::cloud::aiplatform::v1::MetadataService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMetadataStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::MetadataStore> GetMetadataStore(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListMetadataStoresResponse>
  ListMetadataStores(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListMetadataStoresRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteMetadataStore(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Artifact> CreateArtifact(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateArtifactRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Artifact> GetArtifact(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetArtifactRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListArtifactsResponse> ListArtifacts(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListArtifactsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Artifact> UpdateArtifact(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateArtifactRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteArtifact(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteArtifactRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncPurgeArtifacts(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Context> CreateContext(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateContextRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Context> GetContext(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetContextRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListContextsResponse> ListContexts(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListContextsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Context> UpdateContext(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateContextRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteContext(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteContextRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncPurgeContexts(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::PurgeContextsRequest const& request)
      override;

  StatusOr<
      google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
  AddContextArtifactsAndExecutions(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          AddContextArtifactsAndExecutionsRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
  AddContextChildren(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::AddContextChildrenRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
  RemoveContextChildren(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryContextLineageSubgraph(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::Execution> CreateExecution(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateExecutionRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Execution> GetExecution(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetExecutionRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListExecutionsResponse>
  ListExecutions(grpc::ClientContext& context,
                 google::cloud::aiplatform::v1::ListExecutionsRequest const&
                     request) override;

  StatusOr<google::cloud::aiplatform::v1::Execution> UpdateExecution(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::UpdateExecutionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteExecutionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncPurgeExecutions(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
  AddExecutionEvents(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryExecutionInputsAndOutputs(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::
          QueryExecutionInputsAndOutputsRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::MetadataSchema> CreateMetadataSchema(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::MetadataSchema> GetMetadataSchema(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListMetadataSchemasResponse>
  ListMetadataSchemas(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::ListMetadataSchemasRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
  QueryArtifactLineageSubgraph(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::aiplatform::v1::MetadataService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_METADATA_STUB_H
