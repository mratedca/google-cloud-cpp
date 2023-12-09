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
// source: google/cloud/aiplatform/v1/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_PREDICTION_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_PREDICTION_CONNECTION_IMPL_H

#include "google/cloud/aiplatform/v1/internal/prediction_retry_traits.h"
#include "google/cloud/aiplatform/v1/internal/prediction_stub.h"
#include "google/cloud/aiplatform/v1/prediction_connection.h"
#include "google/cloud/aiplatform/v1/prediction_connection_idempotency_policy.h"
#include "google/cloud/aiplatform/v1/prediction_options.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

void PredictionServiceServerStreamingPredictStreamingUpdater(
    google::cloud::aiplatform::v1::StreamingPredictResponse const& response,
    google::cloud::aiplatform::v1::StreamingPredictRequest& request);

class PredictionServiceConnectionImpl
    : public aiplatform_v1::PredictionServiceConnection {
 public:
  ~PredictionServiceConnectionImpl() override = default;

  PredictionServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<aiplatform_v1_internal::PredictionServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::aiplatform::v1::PredictResponse> Predict(
      google::cloud::aiplatform::v1::PredictRequest const& request) override;

  StatusOr<google::api::HttpBody> RawPredict(
      google::cloud::aiplatform::v1::RawPredictRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::DirectPredictResponse> DirectPredict(
      google::cloud::aiplatform::v1::DirectPredictRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::DirectRawPredictResponse>
  DirectRawPredict(google::cloud::aiplatform::v1::DirectRawPredictRequest const&
                       request) override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::aiplatform::v1::StreamingPredictRequest,
      google::cloud::aiplatform::v1::StreamingPredictResponse>>
  AsyncStreamingPredict() override;

  StreamRange<google::cloud::aiplatform::v1::StreamingPredictResponse>
  ServerStreamingPredict(
      google::cloud::aiplatform::v1::StreamingPredictRequest const& request)
      override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::aiplatform::v1::StreamingRawPredictRequest,
      google::cloud::aiplatform::v1::StreamingRawPredictResponse>>
  AsyncStreamingRawPredict() override;

  StatusOr<google::cloud::aiplatform::v1::ExplainResponse> Explain(
      google::cloud::aiplatform::v1::ExplainRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<aiplatform_v1_internal::PredictionServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_PREDICTION_CONNECTION_IMPL_H
