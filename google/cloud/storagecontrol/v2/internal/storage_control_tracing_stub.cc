// Copyright 2024 Google LLC
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
// source: google/storage/control/v2/storage_control.proto

#include "google/cloud/storagecontrol/v2/internal/storage_control_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace storagecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

StorageControlTracingStub::StorageControlTracingStub(
    std::shared_ptr<StorageControlStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::storage::control::v2::Folder>
StorageControlTracingStub::CreateFolder(
    grpc::ClientContext& context,
    google::storage::control::v2::CreateFolderRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.control.v2.StorageControl",
                                     "CreateFolder");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateFolder(context, request));
}

Status StorageControlTracingStub::DeleteFolder(
    grpc::ClientContext& context,
    google::storage::control::v2::DeleteFolderRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.control.v2.StorageControl",
                                     "DeleteFolder");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteFolder(context, request));
}

StatusOr<google::storage::control::v2::Folder>
StorageControlTracingStub::GetFolder(
    grpc::ClientContext& context,
    google::storage::control::v2::GetFolderRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.control.v2.StorageControl",
                                     "GetFolder");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span, child_->GetFolder(context, request));
}

StatusOr<google::storage::control::v2::ListFoldersResponse>
StorageControlTracingStub::ListFolders(
    grpc::ClientContext& context,
    google::storage::control::v2::ListFoldersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.control.v2.StorageControl",
                                     "ListFolders");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListFolders(context, request));
}

future<StatusOr<google::longrunning::Operation>>
StorageControlTracingStub::AsyncRenameFolder(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::storage::control::v2::RenameFolderRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.control.v2.StorageControl",
                                     "RenameFolder");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRenameFolder(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::storage::control::v2::StorageLayout>
StorageControlTracingStub::GetStorageLayout(
    grpc::ClientContext& context,
    google::storage::control::v2::GetStorageLayoutRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.control.v2.StorageControl",
                                     "GetStorageLayout");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetStorageLayout(context, request));
}

future<StatusOr<google::longrunning::Operation>>
StorageControlTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> StorageControlTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<StorageControlStub> MakeStorageControlTracingStub(
    std::shared_ptr<StorageControlStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<StorageControlTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_internal
}  // namespace cloud
}  // namespace google
