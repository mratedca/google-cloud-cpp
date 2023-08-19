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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_INTERNAL_APP_GATEWAYS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_INTERNAL_APP_GATEWAYS_CONNECTION_IMPL_H

#include "google/cloud/beyondcorp/appgateways/v1/app_gateways_connection.h"
#include "google/cloud/beyondcorp/appgateways/v1/app_gateways_connection_idempotency_policy.h"
#include "google/cloud/beyondcorp/appgateways/v1/app_gateways_options.h"
#include "google/cloud/beyondcorp/appgateways/v1/internal/app_gateways_retry_traits.h"
#include "google/cloud/beyondcorp/appgateways/v1/internal/app_gateways_stub.h"
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
namespace beyondcorp_appgateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AppGatewaysServiceConnectionImpl
    : public beyondcorp_appgateways_v1::AppGatewaysServiceConnection {
 public:
  ~AppGatewaysServiceConnectionImpl() override = default;

  AppGatewaysServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          beyondcorp_appgateways_v1_internal::AppGatewaysServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::beyondcorp::appgateways::v1::AppGateway>
  ListAppGateways(
      google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysRequest
          request) override;

  StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>
  GetAppGateway(
      google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest const&
          request) override;

  future<StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>>
  CreateAppGateway(
      google::cloud::beyondcorp::appgateways::v1::CreateAppGatewayRequest const&
          request) override;

  future<StatusOr<
      google::cloud::beyondcorp::appgateways::v1::AppGatewayOperationMetadata>>
  DeleteAppGateway(
      google::cloud::beyondcorp::appgateways::v1::DeleteAppGatewayRequest const&
          request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<beyondcorp_appgateways_v1_internal::AppGatewaysServiceStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appgateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPGATEWAYS_V1_INTERNAL_APP_GATEWAYS_CONNECTION_IMPL_H
