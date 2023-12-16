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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_stub_factory.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_auth_decorator.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_logging_decorator.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_metadata_decorator.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_stub.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/credentials_impl.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/service_endpoint.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/cloud/datacatalog/lineage/v1/lineage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<LineageStub> CreateDefaultLineageStub(
    google::cloud::CompletionQueue cq, Options& options) {
  auto endpoint = internal::DetermineServiceEndpoint(
      internal::GetEnv("GOOGLE_CLOUD_CPP_LINEAGE_ENDPOINT"),
      internal::FetchOption<EndpointOption>(options),
      "datalineage.googleapis.com", options);

  std::shared_ptr<LineageStub> stub;
  std::shared_ptr<internal::GrpcAuthenticationStrategy> auth;
  if (!endpoint.ok()) {
    Options error_options = options;
    error_options.set<google::cloud::UnifiedCredentialsOption>(
        internal::MakeErrorCredentials(endpoint.status()));
    auth = internal::CreateAuthenticationStrategy(CompletionQueue{},
                                                  error_options);
  } else {
    options.set<EndpointOption>(*endpoint);
    auth = internal::CreateAuthenticationStrategy(std::move(cq), options);
    auto channel =
        auth->CreateChannel(*endpoint, internal::MakeChannelArguments(options));
    auto service_grpc_stub =
        google::cloud::datacatalog::lineage::v1::Lineage::NewStub(channel);
    stub = std::make_shared<DefaultLineageStub>(
        std::move(service_grpc_stub),
        google::longrunning::Operations::NewStub(channel));
  }
  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<LineageAuth>(std::move(auth), std::move(stub));
  }
  stub = std::make_shared<LineageMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<LineageLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeLineageTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google
