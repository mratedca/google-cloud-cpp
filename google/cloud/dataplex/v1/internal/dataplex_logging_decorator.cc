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
// source: google/cloud/dataplex/v1/service.proto

#include "google/cloud/dataplex/v1/internal/dataplex_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataplexServiceLogging::DataplexServiceLogging(
    std::shared_ptr<DataplexServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncCreateLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateLakeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::CreateLakeRequest const& request) {
        return child_->AsyncCreateLake(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncUpdateLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
        return child_->AsyncUpdateLake(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncDeleteLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
        return child_->AsyncDeleteLake(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListLakesResponse>
DataplexServiceLogging::ListLakes(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListLakesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::ListLakesRequest const& request) {
        return child_->ListLakes(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Lake> DataplexServiceLogging::GetLake(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetLakeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::GetLakeRequest const& request) {
        return child_->GetLake(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceLogging::ListLakeActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListLakeActionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dataplex::v1::ListLakeActionsRequest const& request) {
        return child_->ListLakeActions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncCreateZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateZoneRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::CreateZoneRequest const& request) {
        return child_->AsyncCreateZone(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncUpdateZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
        return child_->AsyncUpdateZone(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncDeleteZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
        return child_->AsyncDeleteZone(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListZonesResponse>
DataplexServiceLogging::ListZones(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListZonesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::ListZonesRequest const& request) {
        return child_->ListZones(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Zone> DataplexServiceLogging::GetZone(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetZoneRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::GetZoneRequest const& request) {
        return child_->GetZone(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceLogging::ListZoneActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListZoneActionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dataplex::v1::ListZoneActionsRequest const& request) {
        return child_->ListZoneActions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateAssetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::CreateAssetRequest const& request) {
        return child_->AsyncCreateAsset(cq, std::move(context), options,
                                        request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncUpdateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
        return child_->AsyncUpdateAsset(cq, std::move(context), options,
                                        request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
        return child_->AsyncDeleteAsset(cq, std::move(context), options,
                                        request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListAssetsResponse>
DataplexServiceLogging::ListAssets(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::ListAssetsRequest const& request) {
        return child_->ListAssets(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Asset> DataplexServiceLogging::GetAsset(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetAssetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::GetAssetRequest const& request) {
        return child_->GetAsset(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceLogging::ListAssetActions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListAssetActionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dataplex::v1::ListAssetActionsRequest const& request) {
        return child_->ListAssetActions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncCreateTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateTaskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::CreateTaskRequest const& request) {
        return child_->AsyncCreateTask(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncUpdateTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
        return child_->AsyncUpdateTask(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncDeleteTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
        return child_->AsyncDeleteTask(cq, std::move(context), options,
                                       request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListTasksResponse>
DataplexServiceLogging::ListTasks(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListTasksRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::ListTasksRequest const& request) {
        return child_->ListTasks(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Task> DataplexServiceLogging::GetTask(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetTaskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::GetTaskRequest const& request) {
        return child_->GetTask(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListJobsResponse>
DataplexServiceLogging::ListJobs(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListJobsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::ListJobsRequest const& request) {
        return child_->ListJobs(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::RunTaskResponse>
DataplexServiceLogging::RunTask(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::RunTaskRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::RunTaskRequest const& request) {
        return child_->RunTask(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Job> DataplexServiceLogging::GetJob(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::GetJobRequest const& request) {
        return child_->GetJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status DataplexServiceLogging::CancelJob(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::CancelJobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::CancelJobRequest const& request) {
        return child_->CancelJob(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::CreateEnvironmentRequest const&
                 request) {
        return child_->AsyncCreateEnvironment(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::UpdateEnvironmentRequest const&
                 request) {
        return child_->AsyncUpdateEnvironment(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dataplex::v1::DeleteEnvironmentRequest const&
                 request) {
        return child_->AsyncDeleteEnvironment(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListEnvironmentsResponse>
DataplexServiceLogging::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListEnvironmentsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dataplex::v1::ListEnvironmentsRequest const& request) {
        return child_->ListEnvironments(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::Environment>
DataplexServiceLogging::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetEnvironmentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dataplex::v1::GetEnvironmentRequest const& request) {
        return child_->GetEnvironment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dataplex::v1::ListSessionsResponse>
DataplexServiceLogging::ListSessions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListSessionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dataplex::v1::ListSessionsRequest const& request) {
        return child_->ListSessions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> DataplexServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
