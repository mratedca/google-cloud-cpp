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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#include "google/cloud/aiplatform/v1/dataset_connection.h"
#include "google/cloud/aiplatform/v1/dataset_options.h"
#include "google/cloud/aiplatform/v1/internal/dataset_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/dataset_option_defaults.h"
#include "google/cloud/aiplatform/v1/internal/dataset_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/dataset_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatasetServiceConnection::~DatasetServiceConnection() = default;

future<StatusOr<google::cloud::aiplatform::v1::Dataset>>
DatasetServiceConnection::CreateDataset(
    google::cloud::aiplatform::v1::CreateDatasetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::Dataset>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceConnection::GetDataset(
    google::cloud::aiplatform::v1::GetDatasetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceConnection::UpdateDataset(
    google::cloud::aiplatform::v1::UpdateDatasetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::Dataset>
DatasetServiceConnection::ListDatasets(
    google::cloud::aiplatform::v1::
        ListDatasetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Dataset>>();
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceConnection::DeleteDataset(
    google::cloud::aiplatform::v1::DeleteDatasetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::aiplatform::v1::ImportDataResponse>>
DatasetServiceConnection::ImportData(
    google::cloud::aiplatform::v1::ImportDataRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::ImportDataResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::aiplatform::v1::ExportDataResponse>>
DatasetServiceConnection::ExportData(
    google::cloud::aiplatform::v1::ExportDataRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::ExportDataResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>
DatasetServiceConnection::CreateDatasetVersion(
    google::cloud::aiplatform::v1::CreateDatasetVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceConnection::DeleteDatasetVersion(
    google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceConnection::GetDatasetVersion(
    google::cloud::aiplatform::v1::GetDatasetVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceConnection::ListDatasetVersions(
    google::cloud::aiplatform::v1::
        ListDatasetVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::DatasetVersion>>();
}

future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>
DatasetServiceConnection::RestoreDatasetVersion(
    google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::aiplatform::v1::DataItem>
DatasetServiceConnection::ListDataItems(
    google::cloud::aiplatform::v1::
        ListDataItemsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::DataItem>>();
}

StreamRange<google::cloud::aiplatform::v1::DataItemView>
DatasetServiceConnection::SearchDataItems(
    google::cloud::aiplatform::v1::
        SearchDataItemsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::DataItemView>>();
}

StreamRange<google::cloud::aiplatform::v1::SavedQuery>
DatasetServiceConnection::ListSavedQueries(
    google::cloud::aiplatform::v1::
        ListSavedQueriesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::SavedQuery>>();
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
DatasetServiceConnection::DeleteSavedQuery(
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DatasetServiceConnection::GetAnnotationSpec(
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::aiplatform::v1::Annotation>
DatasetServiceConnection::ListAnnotations(
    google::cloud::aiplatform::v1::
        ListAnnotationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Annotation>>();
}

std::shared_ptr<DatasetServiceConnection> MakeDatasetServiceConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DatasetServicePolicyOptionList>(options,
                                                                 __func__);
  options = aiplatform_v1_internal::DatasetServiceDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = aiplatform_v1_internal::CreateDefaultDatasetServiceStub(
      std::move(auth), options);
  return aiplatform_v1_internal::MakeDatasetServiceTracingConnection(
      std::make_shared<aiplatform_v1_internal::DatasetServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
