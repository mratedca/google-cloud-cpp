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
// source: google/cloud/dialogflow/v2/context.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONTEXTS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONTEXTS_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_es/contexts_connection.h"
#include "google/cloud/dialogflow_es/contexts_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_es/contexts_options.h"
#include "google/cloud/dialogflow_es/internal/contexts_retry_traits.h"
#include "google/cloud/dialogflow_es/internal/contexts_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContextsConnectionImpl : public dialogflow_es::ContextsConnection {
 public:
  ~ContextsConnectionImpl() override = default;

  ContextsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_es_internal::ContextsStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::v2::Context> ListContexts(
      google::cloud::dialogflow::v2::ListContextsRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::Context> GetContext(
      google::cloud::dialogflow::v2::GetContextRequest const& request) override;

  StatusOr<google::cloud::dialogflow::v2::Context> CreateContext(
      google::cloud::dialogflow::v2::CreateContextRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Context> UpdateContext(
      google::cloud::dialogflow::v2::UpdateContextRequest const& request)
      override;

  Status DeleteContext(
      google::cloud::dialogflow::v2::DeleteContextRequest const& request)
      override;

  Status DeleteAllContexts(
      google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_es_internal::ContextsStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_CONTEXTS_CONNECTION_IMPL_H
