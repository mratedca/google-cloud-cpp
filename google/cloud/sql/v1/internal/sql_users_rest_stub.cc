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
// source: google/cloud/sql/v1/cloud_sql_users.proto

#include "google/cloud/sql/v1/internal/sql_users_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/sql/v1/cloud_sql_users.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultSqlUsersServiceRestStub::DefaultSqlUsersServiceRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultSqlUsersServiceRestStub::DefaultSqlUsersServiceRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlUsersServiceRestStub::Delete(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::sql::v1::SqlUsersDeleteRequest const& request) {
  return rest_internal::Delete<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request, true,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "instances", "/",
                   request.instance(), "/", "users"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("host", request.host()),
           std::make_pair("name", request.name())}));
}

StatusOr<google::cloud::sql::v1::User> DefaultSqlUsersServiceRestStub::Get(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::sql::v1::SqlUsersGetRequest const& request) {
  return rest_internal::Get<google::cloud::sql::v1::User>(
      *service_, rest_context, request, true,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "instances", "/",
                   request.instance(), "/", "users", "/", request.name()),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("host", request.host())}));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlUsersServiceRestStub::Insert(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::sql::v1::SqlUsersInsertRequest const& request) {
  return rest_internal::Post<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(), true,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "instances", "/",
                   request.instance(), "/", "users"));
}

StatusOr<google::cloud::sql::v1::UsersListResponse>
DefaultSqlUsersServiceRestStub::List(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::sql::v1::SqlUsersListRequest const& request) {
  return rest_internal::Get<google::cloud::sql::v1::UsersListResponse>(
      *service_, rest_context, request, true,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "instances", "/",
                   request.instance(), "/", "users"));
}

StatusOr<google::cloud::sql::v1::Operation>
DefaultSqlUsersServiceRestStub::Update(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::cloud::sql::v1::SqlUsersUpdateRequest const& request) {
  return rest_internal::Put<google::cloud::sql::v1::Operation>(
      *service_, rest_context, request.body(), true,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   "projects", "/", request.project(), "/", "instances", "/",
                   request.instance(), "/", "users"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("host", request.host()),
           std::make_pair("name", request.name())}));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google
