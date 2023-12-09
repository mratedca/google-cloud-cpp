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
// source: google/bigtable/v2/bigtable.proto

#include "google/cloud/bigtable/internal/bigtable_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/routing_matcher.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/bigtable/v2/bigtable.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableMetadata::BigtableMetadata(
    std::shared_ptr<BigtableStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableMetadata::ReadRows(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::v2::ReadRowsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::ReadRowsRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::ReadRowsRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, options);
  } else {
    SetMetadata(*context, options, absl::StrJoin(params, "&"));
  }
  return child_->ReadRows(std::move(context), options, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableMetadata::SampleRowKeys(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::SampleRowKeysRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::SampleRowKeysRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, options);
  } else {
    SetMetadata(*context, options, absl::StrJoin(params, "&"));
  }
  return child_->SampleRowKeys(std::move(context), options, request);
}

StatusOr<google::bigtable::v2::MutateRowResponse> BigtableMetadata::MutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::MutateRowRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::MutateRowRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::MutateRowRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(context, internal::CurrentOptions());
  } else {
    SetMetadata(context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->MutateRow(context, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableMetadata::MutateRows(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::bigtable::v2::MutateRowsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::MutateRowsRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::MutateRowsRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, options);
  } else {
    SetMetadata(*context, options, absl::StrJoin(params, "&"));
  }
  return child_->MutateRows(std::move(context), options, request);
}

StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>
BigtableMetadata::CheckAndMutateRow(
    grpc::ClientContext& context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::CheckAndMutateRowRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::CheckAndMutateRowRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(context, internal::CurrentOptions());
  } else {
    SetMetadata(context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->CheckAndMutateRow(context, request);
}

StatusOr<google::bigtable::v2::PingAndWarmResponse>
BigtableMetadata::PingAndWarm(
    grpc::ClientContext& context,
    google::bigtable::v2::PingAndWarmRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::PingAndWarmRequest>{
        "name=",
        {
            {[](google::bigtable::v2::PingAndWarmRequest const& request)
                 -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(context, internal::CurrentOptions());
  } else {
    SetMetadata(context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->PingAndWarm(context, request);
}

StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>
BigtableMetadata::ReadModifyWriteRow(
    grpc::ClientContext& context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::ReadModifyWriteRowRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::ReadModifyWriteRowRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(context, internal::CurrentOptions());
  } else {
    SetMetadata(context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->ReadModifyWriteRow(context, request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::ReadRowsResponse>>
BigtableMetadata::AsyncReadRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadRowsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::ReadRowsRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::ReadRowsRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, internal::CurrentOptions());
  } else {
    SetMetadata(*context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->AsyncReadRows(cq, std::move(context), request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::SampleRowKeysResponse>>
BigtableMetadata::AsyncSampleRowKeys(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::SampleRowKeysRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::SampleRowKeysRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::SampleRowKeysRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, internal::CurrentOptions());
  } else {
    SetMetadata(*context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->AsyncSampleRowKeys(cq, std::move(context), request);
}

future<StatusOr<google::bigtable::v2::MutateRowResponse>>
BigtableMetadata::AsyncMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::MutateRowRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::MutateRowRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, internal::CurrentOptions());
  } else {
    SetMetadata(*context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->AsyncMutateRow(cq, std::move(context), request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::bigtable::v2::MutateRowsResponse>>
BigtableMetadata::AsyncMutateRows(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::MutateRowsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::MutateRowsRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::MutateRowsRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, internal::CurrentOptions());
  } else {
    SetMetadata(*context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->AsyncMutateRows(cq, std::move(context), request);
}

future<StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>>
BigtableMetadata::AsyncCheckAndMutateRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::CheckAndMutateRowRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::CheckAndMutateRowRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::CheckAndMutateRowRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, internal::CurrentOptions());
  } else {
    SetMetadata(*context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->AsyncCheckAndMutateRow(cq, std::move(context), request);
}

future<StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>>
BigtableMetadata::AsyncReadModifyWriteRow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::v2::ReadModifyWriteRowRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  static auto* table_name_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::bigtable::v2::ReadModifyWriteRowRequest>{
        "table_name=",
        {
            {[](google::bigtable::v2::ReadModifyWriteRowRequest const& request)
                 -> std::string const& { return request.table_name(); },
             std::regex{"(projects/[^/]+/instances/[^/]+/tables/[^/]+)",
                        std::regex::optimize}},
        }};
  }();
  table_name_matcher->AppendParam(request, params);

  if (!request.app_profile_id().empty()) {
    params.push_back(absl::StrCat(
        "app_profile_id=", internal::UrlEncode(request.app_profile_id())));
  }

  if (params.empty()) {
    SetMetadata(*context, internal::CurrentOptions());
  } else {
    SetMetadata(*context, internal::CurrentOptions(),
                absl::StrJoin(params, "&"));
  }
  return child_->AsyncReadModifyWriteRow(cq, std::move(context), request);
}

void BigtableMetadata::SetMetadata(grpc::ClientContext& context,
                                   Options const& options,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void BigtableMetadata::SetMetadata(grpc::ClientContext& context,
                                   Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google
