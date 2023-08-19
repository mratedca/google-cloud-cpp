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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_es/conversation_datasets_connection.h"
#include "google/cloud/dialogflow_es/conversation_datasets_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_es/conversation_datasets_options.h"
#include "google/cloud/dialogflow_es/internal/conversation_datasets_retry_traits.h"
#include "google/cloud/dialogflow_es/internal/conversation_datasets_stub.h"
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
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConversationDatasetsConnectionImpl
    : public dialogflow_es::ConversationDatasetsConnection {
 public:
  ~ConversationDatasetsConnectionImpl() override = default;

  ConversationDatasetsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_es_internal::ConversationDatasetsStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
  CreateConversationDataset(
      google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
  GetConversationDataset(
      google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
          request) override;

  StreamRange<google::cloud::dialogflow::v2::ConversationDataset>
  ListConversationDatasets(
      google::cloud::dialogflow::v2::ListConversationDatasetsRequest request)
      override;

  future<StatusOr<google::cloud::dialogflow::v2::
                      DeleteConversationDatasetOperationMetadata>>
  DeleteConversationDataset(
      google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
          request) override;

  future<StatusOr<
      google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>>
  ImportConversationData(
      google::cloud::dialogflow::v2::ImportConversationDataRequest const&
          request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_es_internal::ConversationDatasetsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONVERSATION_DATASETS_CONNECTION_IMPL_H
