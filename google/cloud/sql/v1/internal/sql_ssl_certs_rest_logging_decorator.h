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
// source: google/cloud/sql/v1/cloud_sql_ssl_certs.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_SSL_CERTS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_SSL_CERTS_REST_LOGGING_DECORATOR_H

#include "google/cloud/sql/v1/internal/sql_ssl_certs_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/sql/v1/cloud_sql_ssl_certs.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SqlSslCertsServiceRestLogging : public SqlSslCertsServiceRestStub {
 public:
  ~SqlSslCertsServiceRestLogging() override = default;
  SqlSslCertsServiceRestLogging(
      std::shared_ptr<SqlSslCertsServiceRestStub> child,
      TracingOptions tracing_options, std::set<std::string> components);

  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlSslCertsDeleteRequest const& request) override;

  StatusOr<google::cloud::sql::v1::SslCert> Get(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlSslCertsGetRequest const& request) override;

  StatusOr<google::cloud::sql::v1::SslCertsInsertResponse> Insert(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlSslCertsInsertRequest const& request) override;

  StatusOr<google::cloud::sql::v1::SslCertsListResponse> List(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlSslCertsListRequest const& request) override;

 private:
  std::shared_ptr<SqlSslCertsServiceRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_SSL_CERTS_REST_LOGGING_DECORATOR_H
