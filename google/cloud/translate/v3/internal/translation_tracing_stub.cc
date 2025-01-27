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
// source: google/cloud/translate/v3/translation_service.proto

#include "google/cloud/translate/v3/internal/translation_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TranslationServiceTracingStub::TranslationServiceTracingStub(
    std::shared_ptr<TranslationServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceTracingStub::TranslateText(
    grpc::ClientContext& context,
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "TranslateText");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TranslateText(context, request));
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceTracingStub::DetectLanguage(
    grpc::ClientContext& context,
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "DetectLanguage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DetectLanguage(context, request));
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceTracingStub::GetSupportedLanguages(
    grpc::ClientContext& context,
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.translation.v3.TranslationService",
                             "GetSupportedLanguages");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSupportedLanguages(context, request));
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceTracingStub::TranslateDocument(
    grpc::ClientContext& context,
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "TranslateDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->TranslateDocument(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceTracingStub::AsyncBatchTranslateText(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "BatchTranslateText");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchTranslateText(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceTracingStub::AsyncBatchTranslateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.translation.v3.TranslationService",
                             "BatchTranslateDocument");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchTranslateDocument(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceTracingStub::AsyncCreateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "CreateGlossary");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateGlossary(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
TranslationServiceTracingStub::ListGlossaries(
    grpc::ClientContext& context,
    google::cloud::translation::v3::ListGlossariesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "ListGlossaries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGlossaries(context, request));
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceTracingStub::GetGlossary(
    grpc::ClientContext& context,
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "GetGlossary");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGlossary(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceTracingStub::AsyncDeleteGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "DeleteGlossary");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteGlossary(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceTracingStub::CreateAdaptiveMtDataset(
    grpc::ClientContext& context,
    google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.translation.v3.TranslationService",
                             "CreateAdaptiveMtDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateAdaptiveMtDataset(context, request));
}

Status TranslationServiceTracingStub::DeleteAdaptiveMtDataset(
    grpc::ClientContext& context,
    google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.translation.v3.TranslationService",
                             "DeleteAdaptiveMtDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteAdaptiveMtDataset(context, request));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceTracingStub::GetAdaptiveMtDataset(
    grpc::ClientContext& context,
    google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "GetAdaptiveMtDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAdaptiveMtDataset(context, request));
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
TranslationServiceTracingStub::ListAdaptiveMtDatasets(
    grpc::ClientContext& context,
    google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.translation.v3.TranslationService",
                             "ListAdaptiveMtDatasets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAdaptiveMtDatasets(context, request));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
TranslationServiceTracingStub::AdaptiveMtTranslate(
    grpc::ClientContext& context,
    google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "AdaptiveMtTranslate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AdaptiveMtTranslate(context, request));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceTracingStub::GetAdaptiveMtFile(
    grpc::ClientContext& context,
    google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "GetAdaptiveMtFile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAdaptiveMtFile(context, request));
}

Status TranslationServiceTracingStub::DeleteAdaptiveMtFile(
    grpc::ClientContext& context,
    google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "DeleteAdaptiveMtFile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteAdaptiveMtFile(context, request));
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
TranslationServiceTracingStub::ImportAdaptiveMtFile(
    grpc::ClientContext& context,
    google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "ImportAdaptiveMtFile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ImportAdaptiveMtFile(context, request));
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
TranslationServiceTracingStub::ListAdaptiveMtFiles(
    grpc::ClientContext& context,
    google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.translation.v3.TranslationService", "ListAdaptiveMtFiles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAdaptiveMtFiles(context, request));
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
TranslationServiceTracingStub::ListAdaptiveMtSentences(
    grpc::ClientContext& context,
    google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.translation.v3.TranslationService",
                             "ListAdaptiveMtSentences");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAdaptiveMtSentences(context, request));
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceTracingStub::AsyncGetOperation(
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

future<Status> TranslationServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<TranslationServiceStub> MakeTranslationServiceTracingStub(
    std::shared_ptr<TranslationServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TranslationServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google
