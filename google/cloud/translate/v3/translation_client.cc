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

#include "google/cloud/translate/v3/translation_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace translate_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceClient::TranslationServiceClient(
    std::shared_ptr<TranslationServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TranslationServiceClient::~TranslationServiceClient() = default;

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceClient::TranslateText(
    std::string const& parent, std::string const& target_language_code,
    std::vector<std::string> const& contents, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::TranslateTextRequest request;
  request.set_parent(parent);
  request.set_target_language_code(target_language_code);
  *request.mutable_contents() = {contents.begin(), contents.end()};
  return connection_->TranslateText(request);
}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceClient::TranslateText(
    std::string const& parent, std::string const& model,
    std::string const& mime_type, std::string const& source_language_code,
    std::string const& target_language_code,
    std::vector<std::string> const& contents, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::TranslateTextRequest request;
  request.set_parent(parent);
  request.set_model(model);
  request.set_mime_type(mime_type);
  request.set_source_language_code(source_language_code);
  request.set_target_language_code(target_language_code);
  *request.mutable_contents() = {contents.begin(), contents.end()};
  return connection_->TranslateText(request);
}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceClient::TranslateText(
    google::cloud::translation::v3::TranslateTextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TranslateText(request);
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceClient::DetectLanguage(std::string const& parent,
                                         std::string const& model,
                                         std::string const& mime_type,
                                         std::string const& content,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::DetectLanguageRequest request;
  request.set_parent(parent);
  request.set_model(model);
  request.set_mime_type(mime_type);
  request.set_content(content);
  return connection_->DetectLanguage(request);
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceClient::DetectLanguage(
    google::cloud::translation::v3::DetectLanguageRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DetectLanguage(request);
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceClient::GetSupportedLanguages(
    std::string const& parent, std::string const& model,
    std::string const& display_language_code, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::GetSupportedLanguagesRequest request;
  request.set_parent(parent);
  request.set_model(model);
  request.set_display_language_code(display_language_code);
  return connection_->GetSupportedLanguages(request);
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceClient::GetSupportedLanguages(
    google::cloud::translation::v3::GetSupportedLanguagesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSupportedLanguages(request);
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceClient::TranslateDocument(
    google::cloud::translation::v3::TranslateDocumentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TranslateDocument(request);
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
TranslationServiceClient::BatchTranslateText(
    google::cloud::translation::v3::BatchTranslateTextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchTranslateText(request);
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
TranslationServiceClient::BatchTranslateDocument(
    std::string const& parent, std::string const& source_language_code,
    std::vector<std::string> const& target_language_codes,
    std::vector<google::cloud::translation::v3::BatchDocumentInputConfig> const&
        input_configs,
    google::cloud::translation::v3::BatchDocumentOutputConfig const&
        output_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::BatchTranslateDocumentRequest request;
  request.set_parent(parent);
  request.set_source_language_code(source_language_code);
  *request.mutable_target_language_codes() = {target_language_codes.begin(),
                                              target_language_codes.end()};
  *request.mutable_input_configs() = {input_configs.begin(),
                                      input_configs.end()};
  *request.mutable_output_config() = output_config;
  return connection_->BatchTranslateDocument(request);
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
TranslationServiceClient::BatchTranslateDocument(
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchTranslateDocument(request);
}

future<StatusOr<google::cloud::translation::v3::Glossary>>
TranslationServiceClient::CreateGlossary(
    std::string const& parent,
    google::cloud::translation::v3::Glossary const& glossary, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::CreateGlossaryRequest request;
  request.set_parent(parent);
  *request.mutable_glossary() = glossary;
  return connection_->CreateGlossary(request);
}

future<StatusOr<google::cloud::translation::v3::Glossary>>
TranslationServiceClient::CreateGlossary(
    google::cloud::translation::v3::CreateGlossaryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateGlossary(request);
}

StreamRange<google::cloud::translation::v3::Glossary>
TranslationServiceClient::ListGlossaries(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::ListGlossariesRequest request;
  request.set_parent(parent);
  return connection_->ListGlossaries(request);
}

StreamRange<google::cloud::translation::v3::Glossary>
TranslationServiceClient::ListGlossaries(
    google::cloud::translation::v3::ListGlossariesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListGlossaries(std::move(request));
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceClient::GetGlossary(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::GetGlossaryRequest request;
  request.set_name(name);
  return connection_->GetGlossary(request);
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceClient::GetGlossary(
    google::cloud::translation::v3::GetGlossaryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGlossary(request);
}

future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
TranslationServiceClient::DeleteGlossary(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::DeleteGlossaryRequest request;
  request.set_name(name);
  return connection_->DeleteGlossary(request);
}

future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
TranslationServiceClient::DeleteGlossary(
    google::cloud::translation::v3::DeleteGlossaryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteGlossary(request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceClient::CreateAdaptiveMtDataset(
    std::string const& parent,
    google::cloud::translation::v3::AdaptiveMtDataset const&
        adaptive_mt_dataset,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest request;
  request.set_parent(parent);
  *request.mutable_adaptive_mt_dataset() = adaptive_mt_dataset;
  return connection_->CreateAdaptiveMtDataset(request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceClient::CreateAdaptiveMtDataset(
    google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAdaptiveMtDataset(request);
}

Status TranslationServiceClient::DeleteAdaptiveMtDataset(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest request;
  request.set_name(name);
  return connection_->DeleteAdaptiveMtDataset(request);
}

Status TranslationServiceClient::DeleteAdaptiveMtDataset(
    google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAdaptiveMtDataset(request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceClient::GetAdaptiveMtDataset(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::GetAdaptiveMtDatasetRequest request;
  request.set_name(name);
  return connection_->GetAdaptiveMtDataset(request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceClient::GetAdaptiveMtDataset(
    google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAdaptiveMtDataset(request);
}

StreamRange<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceClient::ListAdaptiveMtDatasets(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest request;
  request.set_parent(parent);
  return connection_->ListAdaptiveMtDatasets(request);
}

StreamRange<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceClient::ListAdaptiveMtDatasets(
    google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAdaptiveMtDatasets(std::move(request));
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
TranslationServiceClient::AdaptiveMtTranslate(
    std::string const& parent, std::vector<std::string> const& content,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::AdaptiveMtTranslateRequest request;
  request.set_parent(parent);
  *request.mutable_content() = {content.begin(), content.end()};
  return connection_->AdaptiveMtTranslate(request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
TranslationServiceClient::AdaptiveMtTranslate(
    google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AdaptiveMtTranslate(request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceClient::GetAdaptiveMtFile(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::GetAdaptiveMtFileRequest request;
  request.set_name(name);
  return connection_->GetAdaptiveMtFile(request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceClient::GetAdaptiveMtFile(
    google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAdaptiveMtFile(request);
}

Status TranslationServiceClient::DeleteAdaptiveMtFile(std::string const& name,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::DeleteAdaptiveMtFileRequest request;
  request.set_name(name);
  return connection_->DeleteAdaptiveMtFile(request);
}

Status TranslationServiceClient::DeleteAdaptiveMtFile(
    google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAdaptiveMtFile(request);
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
TranslationServiceClient::ImportAdaptiveMtFile(std::string const& parent,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::ImportAdaptiveMtFileRequest request;
  request.set_parent(parent);
  return connection_->ImportAdaptiveMtFile(request);
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
TranslationServiceClient::ImportAdaptiveMtFile(
    google::cloud::translation::v3::ImportAdaptiveMtFileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportAdaptiveMtFile(request);
}

StreamRange<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceClient::ListAdaptiveMtFiles(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::ListAdaptiveMtFilesRequest request;
  request.set_parent(parent);
  return connection_->ListAdaptiveMtFiles(request);
}

StreamRange<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceClient::ListAdaptiveMtFiles(
    google::cloud::translation::v3::ListAdaptiveMtFilesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAdaptiveMtFiles(std::move(request));
}

StreamRange<google::cloud::translation::v3::AdaptiveMtSentence>
TranslationServiceClient::ListAdaptiveMtSentences(std::string const& parent,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::translation::v3::ListAdaptiveMtSentencesRequest request;
  request.set_parent(parent);
  return connection_->ListAdaptiveMtSentences(request);
}

StreamRange<google::cloud::translation::v3::AdaptiveMtSentence>
TranslationServiceClient::ListAdaptiveMtSentences(
    google::cloud::translation::v3::ListAdaptiveMtSentencesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAdaptiveMtSentences(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3
}  // namespace cloud
}  // namespace google
