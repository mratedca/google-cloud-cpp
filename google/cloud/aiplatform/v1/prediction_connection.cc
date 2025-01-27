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

#include "google/cloud/aiplatform/v1/prediction_connection.h"
#include "google/cloud/aiplatform/v1/internal/prediction_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/prediction_option_defaults.h"
#include "google/cloud/aiplatform/v1/internal/prediction_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/prediction_tracing_connection.h"
#include "google/cloud/aiplatform/v1/prediction_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PredictionServiceConnection::~PredictionServiceConnection() = default;

StatusOr<google::cloud::aiplatform::v1::PredictResponse>
PredictionServiceConnection::Predict(
    google::cloud::aiplatform::v1::PredictRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::api::HttpBody> PredictionServiceConnection::RawPredict(
    google::cloud::aiplatform::v1::RawPredictRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::api::HttpBody>
PredictionServiceConnection::StreamRawPredict(
    google::cloud::aiplatform::v1::StreamRawPredictRequest const&) {
  return google::cloud::internal::MakeStreamRange<google::api::HttpBody>(
      []() -> absl::variant<Status, google::api::HttpBody> {
        return Status(StatusCode::kUnimplemented, "not implemented");
      });
}

StatusOr<google::cloud::aiplatform::v1::DirectPredictResponse>
PredictionServiceConnection::DirectPredict(
    google::cloud::aiplatform::v1::DirectPredictRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::DirectRawPredictResponse>
PredictionServiceConnection::DirectRawPredict(
    google::cloud::aiplatform::v1::DirectRawPredictRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::aiplatform::v1::StreamDirectPredictRequest,
    google::cloud::aiplatform::v1::StreamDirectPredictResponse>>
PredictionServiceConnection::AsyncStreamDirectPredict() {
  return std::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::cloud::aiplatform::v1::StreamDirectPredictRequest,
          google::cloud::aiplatform::v1::StreamDirectPredictResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::aiplatform::v1::StreamDirectRawPredictRequest,
    google::cloud::aiplatform::v1::StreamDirectRawPredictResponse>>
PredictionServiceConnection::AsyncStreamDirectRawPredict() {
  return std::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::cloud::aiplatform::v1::StreamDirectRawPredictRequest,
          google::cloud::aiplatform::v1::StreamDirectRawPredictResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::aiplatform::v1::StreamingPredictRequest,
    google::cloud::aiplatform::v1::StreamingPredictResponse>>
PredictionServiceConnection::AsyncStreamingPredict() {
  return std::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::cloud::aiplatform::v1::StreamingPredictRequest,
          google::cloud::aiplatform::v1::StreamingPredictResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::aiplatform::v1::StreamingPredictResponse>
PredictionServiceConnection::ServerStreamingPredict(
    google::cloud::aiplatform::v1::StreamingPredictRequest const&) {
  return google::cloud::internal::MakeStreamRange<
      google::cloud::aiplatform::v1::StreamingPredictResponse>(
      []()
          -> absl::variant<
              Status, google::cloud::aiplatform::v1::StreamingPredictResponse> {
        return Status(StatusCode::kUnimplemented, "not implemented");
      });
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::aiplatform::v1::StreamingRawPredictRequest,
    google::cloud::aiplatform::v1::StreamingRawPredictResponse>>
PredictionServiceConnection::AsyncStreamingRawPredict() {
  return std::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::cloud::aiplatform::v1::StreamingRawPredictRequest,
          google::cloud::aiplatform::v1::StreamingRawPredictResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::ExplainResponse>
PredictionServiceConnection::Explain(
    google::cloud::aiplatform::v1::ExplainRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::GenerateContentResponse>
PredictionServiceConnection::GenerateContent(
    google::cloud::aiplatform::v1::GenerateContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::GenerateContentResponse>
PredictionServiceConnection::StreamGenerateContent(
    google::cloud::aiplatform::v1::GenerateContentRequest const&) {
  return google::cloud::internal::MakeStreamRange<
      google::cloud::aiplatform::v1::GenerateContentResponse>(
      []() -> absl::variant<
               Status, google::cloud::aiplatform::v1::GenerateContentResponse> {
        return Status(StatusCode::kUnimplemented, "not implemented");
      });
}

std::shared_ptr<PredictionServiceConnection> MakePredictionServiceConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 PredictionServicePolicyOptionList>(options,
                                                                    __func__);
  options = aiplatform_v1_internal::PredictionServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = aiplatform_v1_internal::CreateDefaultPredictionServiceStub(
      std::move(auth), options);
  return aiplatform_v1_internal::MakePredictionServiceTracingConnection(
      std::make_shared<aiplatform_v1_internal::PredictionServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
