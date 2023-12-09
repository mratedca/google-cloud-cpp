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
// source: google/cloud/compute/node_types/v1/node_types.proto

#include "google/cloud/compute/node_types/v1/internal/node_types_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/node_types/v1/node_types.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultNodeTypesRestStub::DefaultNodeTypesRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultNodeTypesRestStub::DefaultNodeTypesRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::NodeTypeAggregatedList>
DefaultNodeTypesRestStub::AggregatedListNodeTypes(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_types::v1::
        AggregatedListNodeTypesRequest const& request) {
  return rest_internal::Get<
      google::cloud::cpp::compute::v1::NodeTypeAggregatedList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "aggregated", "/",
                   "nodeTypes"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("include_all_scopes",
                          request.include_all_scopes() ? "1" : "0"),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0"),
           std::make_pair("service_project_number",
                          request.service_project_number())}));
}

StatusOr<google::cloud::cpp::compute::v1::NodeType>
DefaultNodeTypesRestStub::GetNodeType(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_types::v1::GetNodeTypeRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::NodeType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "nodeTypes", "/", request.node_type()));
}

StatusOr<google::cloud::cpp::compute::v1::NodeTypeList>
DefaultNodeTypesRestStub::ListNodeTypes(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::cpp::compute::node_types::v1::ListNodeTypesRequest const&
        request) {
  return rest_internal::Get<google::cloud::cpp::compute::v1::NodeTypeList>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "zones", "/",
                   request.zone(), "/", "nodeTypes"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("max_results", std::to_string(request.max_results())),
           std::make_pair("order_by", request.order_by()),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("return_partial_success",
                          request.return_partial_success() ? "1" : "0")}));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_types_v1_internal
}  // namespace cloud
}  // namespace google
