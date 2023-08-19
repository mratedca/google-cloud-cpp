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
// source: google/cloud/datastream/v1/datastream.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_INTERNAL_DATASTREAM_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_INTERNAL_DATASTREAM_CONNECTION_IMPL_H

#include "google/cloud/datastream/v1/datastream_connection.h"
#include "google/cloud/datastream/v1/datastream_connection_idempotency_policy.h"
#include "google/cloud/datastream/v1/datastream_options.h"
#include "google/cloud/datastream/v1/internal/datastream_retry_traits.h"
#include "google/cloud/datastream/v1/internal/datastream_stub.h"
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
namespace datastream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DatastreamConnectionImpl : public datastream_v1::DatastreamConnection {
 public:
  ~DatastreamConnectionImpl() override = default;

  DatastreamConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<datastream_v1_internal::DatastreamStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::datastream::v1::ConnectionProfile>
  ListConnectionProfiles(
      google::cloud::datastream::v1::ListConnectionProfilesRequest request)
      override;

  StatusOr<google::cloud::datastream::v1::ConnectionProfile>
  GetConnectionProfile(
      google::cloud::datastream::v1::GetConnectionProfileRequest const& request)
      override;

  future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
  CreateConnectionProfile(
      google::cloud::datastream::v1::CreateConnectionProfileRequest const&
          request) override;

  future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
  UpdateConnectionProfile(
      google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
          request) override;

  future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteConnectionProfile(
      google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
          request) override;

  StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
  DiscoverConnectionProfile(
      google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
          request) override;

  StreamRange<google::cloud::datastream::v1::Stream> ListStreams(
      google::cloud::datastream::v1::ListStreamsRequest request) override;

  StatusOr<google::cloud::datastream::v1::Stream> GetStream(
      google::cloud::datastream::v1::GetStreamRequest const& request) override;

  future<StatusOr<google::cloud::datastream::v1::Stream>> CreateStream(
      google::cloud::datastream::v1::CreateStreamRequest const& request)
      override;

  future<StatusOr<google::cloud::datastream::v1::Stream>> UpdateStream(
      google::cloud::datastream::v1::UpdateStreamRequest const& request)
      override;

  future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteStream(google::cloud::datastream::v1::DeleteStreamRequest const&
                   request) override;

  StatusOr<google::cloud::datastream::v1::StreamObject> GetStreamObject(
      google::cloud::datastream::v1::GetStreamObjectRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::StreamObject> LookupStreamObject(
      google::cloud::datastream::v1::LookupStreamObjectRequest const& request)
      override;

  StreamRange<google::cloud::datastream::v1::StreamObject> ListStreamObjects(
      google::cloud::datastream::v1::ListStreamObjectsRequest request) override;

  StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
  StartBackfillJob(google::cloud::datastream::v1::StartBackfillJobRequest const&
                       request) override;

  StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
  StopBackfillJob(google::cloud::datastream::v1::StopBackfillJobRequest const&
                      request) override;

  StreamRange<std::string> FetchStaticIps(
      google::cloud::datastream::v1::FetchStaticIpsRequest request) override;

  future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
  CreatePrivateConnection(
      google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
          request) override;

  StatusOr<google::cloud::datastream::v1::PrivateConnection>
  GetPrivateConnection(
      google::cloud::datastream::v1::GetPrivateConnectionRequest const& request)
      override;

  StreamRange<google::cloud::datastream::v1::PrivateConnection>
  ListPrivateConnections(
      google::cloud::datastream::v1::ListPrivateConnectionsRequest request)
      override;

  future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeletePrivateConnection(
      google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::datastream::v1::Route>> CreateRoute(
      google::cloud::datastream::v1::CreateRouteRequest const& request)
      override;

  StatusOr<google::cloud::datastream::v1::Route> GetRoute(
      google::cloud::datastream::v1::GetRouteRequest const& request) override;

  StreamRange<google::cloud::datastream::v1::Route> ListRoutes(
      google::cloud::datastream::v1::ListRoutesRequest request) override;

  future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
  DeleteRoute(google::cloud::datastream::v1::DeleteRouteRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<datastream_v1_internal::DatastreamStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTREAM_V1_INTERNAL_DATASTREAM_CONNECTION_IMPL_H
