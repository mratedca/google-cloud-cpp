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
// source: google/cloud/automl/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_CONNECTION_IMPL_H

#include "google/cloud/automl/v1/auto_ml_connection.h"
#include "google/cloud/automl/v1/auto_ml_connection_idempotency_policy.h"
#include "google/cloud/automl/v1/auto_ml_options.h"
#include "google/cloud/automl/v1/internal/auto_ml_retry_traits.h"
#include "google/cloud/automl/v1/internal/auto_ml_stub.h"
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
namespace automl_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AutoMlConnectionImpl : public automl_v1::AutoMlConnection {
 public:
  ~AutoMlConnectionImpl() override = default;

  AutoMlConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<automl_v1_internal::AutoMlStub> stub, Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::automl::v1::Dataset>> CreateDataset(
      google::cloud::automl::v1::CreateDatasetRequest const& request) override;

  StatusOr<google::cloud::automl::v1::Dataset> GetDataset(
      google::cloud::automl::v1::GetDatasetRequest const& request) override;

  StreamRange<google::cloud::automl::v1::Dataset> ListDatasets(
      google::cloud::automl::v1::ListDatasetsRequest request) override;

  StatusOr<google::cloud::automl::v1::Dataset> UpdateDataset(
      google::cloud::automl::v1::UpdateDatasetRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteDataset(
      google::cloud::automl::v1::DeleteDatasetRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ImportData(
      google::cloud::automl::v1::ImportDataRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportData(
      google::cloud::automl::v1::ExportDataRequest const& request) override;

  StatusOr<google::cloud::automl::v1::AnnotationSpec> GetAnnotationSpec(
      google::cloud::automl::v1::GetAnnotationSpecRequest const& request)
      override;

  future<StatusOr<google::cloud::automl::v1::Model>> CreateModel(
      google::cloud::automl::v1::CreateModelRequest const& request) override;

  StatusOr<google::cloud::automl::v1::Model> GetModel(
      google::cloud::automl::v1::GetModelRequest const& request) override;

  StreamRange<google::cloud::automl::v1::Model> ListModels(
      google::cloud::automl::v1::ListModelsRequest request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteModel(
      google::cloud::automl::v1::DeleteModelRequest const& request) override;

  StatusOr<google::cloud::automl::v1::Model> UpdateModel(
      google::cloud::automl::v1::UpdateModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeployModel(
      google::cloud::automl::v1::DeployModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> UndeployModel(
      google::cloud::automl::v1::UndeployModelRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportModel(
      google::cloud::automl::v1::ExportModelRequest const& request) override;

  StatusOr<google::cloud::automl::v1::ModelEvaluation> GetModelEvaluation(
      google::cloud::automl::v1::GetModelEvaluationRequest const& request)
      override;

  StreamRange<google::cloud::automl::v1::ModelEvaluation> ListModelEvaluations(
      google::cloud::automl::v1::ListModelEvaluationsRequest request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<automl_v1_internal::AutoMlStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_INTERNAL_AUTO_ML_CONNECTION_IMPL_H
