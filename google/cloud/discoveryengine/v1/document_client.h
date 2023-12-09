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
// source: google/cloud/discoveryengine/v1/document_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_DOCUMENT_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_DOCUMENT_CLIENT_H

#include "google/cloud/discoveryengine/v1/document_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for ingesting [Document][google.cloud.discoveryengine.v1.Document]
/// information of the customer's website.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
/// [google.cloud.discoveryengine.v1.Document]:
/// @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
///
class DocumentServiceClient {
 public:
  explicit DocumentServiceClient(
      std::shared_ptr<DocumentServiceConnection> connection, Options opts = {});
  ~DocumentServiceClient();

  ///@{
  /// @name Copy and move support
  DocumentServiceClient(DocumentServiceClient const&) = default;
  DocumentServiceClient& operator=(DocumentServiceClient const&) = default;
  DocumentServiceClient(DocumentServiceClient&&) = default;
  DocumentServiceClient& operator=(DocumentServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(DocumentServiceClient const& a,
                         DocumentServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DocumentServiceClient const& a,
                         DocumentServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets a [Document][google.cloud.discoveryengine.v1.Document].
  ///
  /// @param name  Required. Full resource name of
  ///  [Document][google.cloud.discoveryengine.v1.Document], such as
  ///  `projects/{project}/locations/{location}/collections/{collection}/dataStores/{data_store}/branches/{branch}/documents/{document}`.
  ///  @n
  ///  If the caller does not have permission to access the
  ///  [Document][google.cloud.discoveryengine.v1.Document], regardless of whether
  ///  or not it exists, a `PERMISSION_DENIED` error is returned.
  ///  @n
  ///  If the requested [Document][google.cloud.discoveryengine.v1.Document] does
  ///  not exist, a `NOT_FOUND` error is returned.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  /// [google.cloud.discoveryengine.v1.GetDocumentRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L162}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Document> GetDocument(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a [Document][google.cloud.discoveryengine.v1.Document].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.GetDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  /// [google.cloud.discoveryengine.v1.GetDocumentRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L162}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Document> GetDocument(
      google::cloud::discoveryengine::v1::GetDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a list of [Document][google.cloud.discoveryengine.v1.Document]s.
  ///
  /// @param parent  Required. The parent branch resource name, such as
  ///  `projects/{project}/locations/{location}/collections/{collection}/dataStores/{data_store}/branches/{branch}`.
  ///  Use `default_branch` as the branch ID, to list documents under the default
  ///  branch.
  ///  @n
  ///  If the caller does not have permission to list
  ///  [Document][google.cloud.discoveryengine.v1.Document]s under this branch,
  ///  regardless of whether or not this branch exists, a `PERMISSION_DENIED`
  ///  error is returned.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.discoveryengine.v1.Document], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  /// [google.cloud.discoveryengine.v1.ListDocumentsRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L184}
  ///
  // clang-format on
  StreamRange<google::cloud::discoveryengine::v1::Document> ListDocuments(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Gets a list of [Document][google.cloud.discoveryengine.v1.Document]s.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.ListDocumentsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.discoveryengine.v1.Document], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  /// [google.cloud.discoveryengine.v1.ListDocumentsRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L184}
  ///
  // clang-format on
  StreamRange<google::cloud::discoveryengine::v1::Document> ListDocuments(
      google::cloud::discoveryengine::v1::ListDocumentsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a [Document][google.cloud.discoveryengine.v1.Document].
  ///
  /// @param parent  Required. The parent resource name, such as
  ///  `projects/{project}/locations/{location}/collections/{collection}/dataStores/{data_store}/branches/{branch}`.
  /// @param document  Required. The [Document][google.cloud.discoveryengine.v1.Document] to
  ///  create.
  /// @param document_id  Required. The ID to use for the
  ///  [Document][google.cloud.discoveryengine.v1.Document], which will become the
  ///  final component of the
  ///  [Document.name][google.cloud.discoveryengine.v1.Document.name].
  ///  @n
  ///  If the caller does not have permission to create the
  ///  [Document][google.cloud.discoveryengine.v1.Document], regardless of whether
  ///  or not it exists, a `PERMISSION_DENIED` error is returned.
  ///  @n
  ///  This field must be unique among all
  ///  [Document][google.cloud.discoveryengine.v1.Document]s with the same
  ///  [parent][google.cloud.discoveryengine.v1.CreateDocumentRequest.parent].
  ///  Otherwise, an `ALREADY_EXISTS` error is returned.
  ///  @n
  ///  This field must conform to [RFC-1034](https://tools.ietf.org/html/rfc1034)
  ///  standard with a length limit of 63 characters. Otherwise, an
  ///  `INVALID_ARGUMENT` error is returned.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.CreateDocumentRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L238}
  /// [google.cloud.discoveryengine.v1.CreateDocumentRequest.parent]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L241}
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  /// [google.cloud.discoveryengine.v1.Document.name]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L94}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Document> CreateDocument(
      std::string const& parent,
      google::cloud::discoveryengine::v1::Document const& document,
      std::string const& document_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a [Document][google.cloud.discoveryengine.v1.Document].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.CreateDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.CreateDocumentRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L238}
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Document> CreateDocument(
      google::cloud::discoveryengine::v1::CreateDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a [Document][google.cloud.discoveryengine.v1.Document].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.UpdateDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  /// [google.cloud.discoveryengine.v1.UpdateDocumentRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L275}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::Document> UpdateDocument(
      google::cloud::discoveryengine::v1::UpdateDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a [Document][google.cloud.discoveryengine.v1.Document].
  ///
  /// @param name  Required. Full resource name of
  ///  [Document][google.cloud.discoveryengine.v1.Document], such as
  ///  `projects/{project}/locations/{location}/collections/{collection}/dataStores/{data_store}/branches/{branch}/documents/{document}`.
  ///  @n
  ///  If the caller does not have permission to delete the
  ///  [Document][google.cloud.discoveryengine.v1.Document], regardless of whether
  ///  or not it exists, a `PERMISSION_DENIED` error is returned.
  ///  @n
  ///  If the [Document][google.cloud.discoveryengine.v1.Document] to delete does
  ///  not exist, a `NOT_FOUND` error is returned.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.DeleteDocumentRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L297}
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  ///
  // clang-format on
  Status DeleteDocument(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a [Document][google.cloud.discoveryengine.v1.Document].
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.DeleteDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.DeleteDocumentRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L297}
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  ///
  // clang-format on
  Status DeleteDocument(
      google::cloud::discoveryengine::v1::DeleteDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Bulk import of multiple
  /// [Document][google.cloud.discoveryengine.v1.Document]s. Request processing
  /// may be synchronous. Non-existing items will be created.
  ///
  /// Note: It is possible for a subset of the
  /// [Document][google.cloud.discoveryengine.v1.Document]s to be successfully
  /// updated.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.ImportDocumentsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.discoveryengine.v1.ImportDocumentsResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  /// [google.cloud.discoveryengine.v1.ImportDocumentsRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/import_config.proto#L223}
  /// [google.cloud.discoveryengine.v1.ImportDocumentsResponse]: @googleapis_reference_link{google/cloud/discoveryengine/v1/import_config.proto#L332}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::ImportDocumentsResponse>>
  ImportDocuments(
      google::cloud::discoveryengine::v1::ImportDocumentsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Permanently deletes all selected
  /// [Document][google.cloud.discoveryengine.v1.Document]s in a branch.
  ///
  /// This process is asynchronous. Depending on the number of
  /// [Document][google.cloud.discoveryengine.v1.Document]s to be deleted, this
  /// operation can take hours to complete. Before the delete operation
  /// completes, some [Document][google.cloud.discoveryengine.v1.Document]s might
  /// still be returned by
  /// [DocumentService.GetDocument][google.cloud.discoveryengine.v1.DocumentService.GetDocument]
  /// or
  /// [DocumentService.ListDocuments][google.cloud.discoveryengine.v1.DocumentService.ListDocuments].
  ///
  /// To get a list of the [Document][google.cloud.discoveryengine.v1.Document]s
  /// to be deleted, set
  /// [PurgeDocumentsRequest.force][google.cloud.discoveryengine.v1.PurgeDocumentsRequest.force]
  /// to false.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.PurgeDocumentsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.discoveryengine.v1.PurgeDocumentsResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.Document]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document.proto#L34}
  /// [google.cloud.discoveryengine.v1.DocumentService.GetDocument]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L46}
  /// [google.cloud.discoveryengine.v1.DocumentService.ListDocuments]: @googleapis_reference_link{google/cloud/discoveryengine/v1/document_service.proto#L57}
  /// [google.cloud.discoveryengine.v1.PurgeDocumentsRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/purge_config.proto#L35}
  /// [google.cloud.discoveryengine.v1.PurgeDocumentsRequest.force]: @googleapis_reference_link{google/cloud/discoveryengine/v1/purge_config.proto#L52}
  /// [google.cloud.discoveryengine.v1.PurgeDocumentsResponse]: @googleapis_reference_link{google/cloud/discoveryengine/v1/purge_config.proto#L59}
  ///
  // clang-format on
  future<StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>
  PurgeDocuments(
      google::cloud::discoveryengine::v1::PurgeDocumentsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DocumentServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_DOCUMENT_CLIENT_H
