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
// source: google/monitoring/v3/notification_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_NOTIFICATION_CHANNEL_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_NOTIFICATION_CHANNEL_CONNECTION_IMPL_H

#include "google/cloud/monitoring/v3/internal/notification_channel_retry_traits.h"
#include "google/cloud/monitoring/v3/internal/notification_channel_stub.h"
#include "google/cloud/monitoring/v3/notification_channel_connection.h"
#include "google/cloud/monitoring/v3/notification_channel_connection_idempotency_policy.h"
#include "google/cloud/monitoring/v3/notification_channel_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotificationChannelServiceConnectionImpl
    : public monitoring_v3::NotificationChannelServiceConnection {
 public:
  ~NotificationChannelServiceConnectionImpl() override = default;

  NotificationChannelServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<monitoring_v3_internal::NotificationChannelServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::monitoring::v3::NotificationChannelDescriptor>
  ListNotificationChannelDescriptors(
      google::monitoring::v3::ListNotificationChannelDescriptorsRequest request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannelDescriptor>
  GetNotificationChannelDescriptor(
      google::monitoring::v3::GetNotificationChannelDescriptorRequest const&
          request) override;

  StreamRange<google::monitoring::v3::NotificationChannel>
  ListNotificationChannels(
      google::monitoring::v3::ListNotificationChannelsRequest request) override;

  StatusOr<google::monitoring::v3::NotificationChannel> GetNotificationChannel(
      google::monitoring::v3::GetNotificationChannelRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  CreateNotificationChannel(
      google::monitoring::v3::CreateNotificationChannelRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  UpdateNotificationChannel(
      google::monitoring::v3::UpdateNotificationChannelRequest const& request)
      override;

  Status DeleteNotificationChannel(
      google::monitoring::v3::DeleteNotificationChannelRequest const& request)
      override;

  Status SendNotificationChannelVerificationCode(
      google::monitoring::v3::
          SendNotificationChannelVerificationCodeRequest const& request)
      override;

  StatusOr<
      google::monitoring::v3::GetNotificationChannelVerificationCodeResponse>
  GetNotificationChannelVerificationCode(
      google::monitoring::v3::
          GetNotificationChannelVerificationCodeRequest const& request)
      override;

  StatusOr<google::monitoring::v3::NotificationChannel>
  VerifyNotificationChannel(
      google::monitoring::v3::VerifyNotificationChannelRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<monitoring_v3_internal::NotificationChannelServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_NOTIFICATION_CHANNEL_CONNECTION_IMPL_H
