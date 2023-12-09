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
// source: google/cloud/contentwarehouse/v1/document_link_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/contentwarehouse/v1/document_link_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentLinkServiceStub {
 public:
  virtual ~DocumentLinkServiceStub() = 0;

  virtual StatusOr<
      google::cloud::contentwarehouse::v1::ListLinkedTargetsResponse>
  ListLinkedTargets(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::contentwarehouse::v1::ListLinkedSourcesResponse>
  ListLinkedSources(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::DocumentLink>
  CreateDocumentLink(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
          request) = 0;

  virtual Status DeleteDocumentLink(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
          request) = 0;
};

class DefaultDocumentLinkServiceStub : public DocumentLinkServiceStub {
 public:
  explicit DefaultDocumentLinkServiceStub(
      std::unique_ptr<google::cloud::contentwarehouse::v1::DocumentLinkService::
                          StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::contentwarehouse::v1::ListLinkedTargetsResponse>
  ListLinkedTargets(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::ListLinkedSourcesResponse>
  ListLinkedSources(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::DocumentLink>
  CreateDocumentLink(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
          request) override;

  Status DeleteDocumentLink(
      grpc::ClientContext& context,
      google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
          request) override;

 private:
  std::unique_ptr<
      google::cloud::contentwarehouse::v1::DocumentLinkService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_DOCUMENT_LINK_STUB_H
