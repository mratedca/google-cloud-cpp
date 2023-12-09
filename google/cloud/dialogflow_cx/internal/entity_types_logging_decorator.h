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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENTITY_TYPES_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENTITY_TYPES_LOGGING_DECORATOR_H

#include "google/cloud/dialogflow_cx/internal/entity_types_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EntityTypesLogging : public EntityTypesStub {
 public:
  ~EntityTypesLogging() override = default;
  EntityTypesLogging(std::shared_ptr<EntityTypesStub> child,
                     TracingOptions tracing_options,
                     std::set<std::string> const& components);

  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> GetEntityType(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> CreateEntityType(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::EntityType> UpdateEntityType(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const& request)
      override;

  Status DeleteEntityType(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::ListEntityTypesResponse>
  ListEntityTypes(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::ListEntityTypesRequest const& request)
      override;

 private:
  std::shared_ptr<EntityTypesStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // EntityTypesLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_ENTITY_TYPES_LOGGING_DECORATOR_H
