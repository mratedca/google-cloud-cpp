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
// source: google/cloud/bigquery/connection/v1/connection.proto

#include "google/cloud/bigquery/connection/v1/internal/connection_stub_factory.h"
#include "google/cloud/bigquery/connection/v1/internal/connection_auth_decorator.h"
#include "google/cloud/bigquery/connection/v1/internal/connection_logging_decorator.h"
#include "google/cloud/bigquery/connection/v1/internal/connection_metadata_decorator.h"
#include "google/cloud/bigquery/connection/v1/internal/connection_stub.h"
#include "google/cloud/bigquery/connection/v1/internal/connection_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/cloud/bigquery/connection/v1/connection.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_connection_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<ConnectionServiceStub> CreateDefaultConnectionServiceStub(
    std::shared_ptr<internal::GrpcAuthenticationStrategy> auth,
    Options const& options) {
  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
                                     internal::MakeChannelArguments(options));
  auto service_grpc_stub =
      google::cloud::bigquery::connection::v1::ConnectionService::NewStub(
          channel);
  std::shared_ptr<ConnectionServiceStub> stub =
      std::make_shared<DefaultConnectionServiceStub>(
          std::move(service_grpc_stub));

  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<ConnectionServiceAuth>(std::move(auth),
                                                   std::move(stub));
  }
  stub = std::make_shared<ConnectionServiceMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<ConnectionServiceLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeConnectionServiceTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_connection_v1_internal
}  // namespace cloud
}  // namespace google
