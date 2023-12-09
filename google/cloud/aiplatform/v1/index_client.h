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
// source: google/cloud/aiplatform/v1/index_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_CLIENT_H

#include "google/cloud/aiplatform/v1/index_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service for creating and managing Vertex AI's Index resources.
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
class IndexServiceClient {
 public:
  explicit IndexServiceClient(
      std::shared_ptr<IndexServiceConnection> connection, Options opts = {});
  ~IndexServiceClient();

  ///@{
  /// @name Copy and move support
  IndexServiceClient(IndexServiceClient const&) = default;
  IndexServiceClient& operator=(IndexServiceClient const&) = default;
  IndexServiceClient(IndexServiceClient&&) = default;
  IndexServiceClient& operator=(IndexServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(IndexServiceClient const& a,
                         IndexServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(IndexServiceClient const& a,
                         IndexServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates an Index.
  ///
  /// @param parent  Required. The resource name of the Location to create the Index in.
  ///  Format: `projects/{project}/locations/{location}`
  /// @param index  Required. The Index to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.Index] proto message.
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
  /// [google.cloud.aiplatform.v1.CreateIndexRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L121}
  /// [google.cloud.aiplatform.v1.Index]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L36}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::Index>> CreateIndex(
      std::string const& parent,
      google::cloud::aiplatform::v1::Index const& index, Options opts = {});

  // clang-format off
  ///
  /// Creates an Index.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.CreateIndexRequest].
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
  ///     [google.cloud.aiplatform.v1.Index] proto message.
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
  /// [google.cloud.aiplatform.v1.CreateIndexRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L121}
  /// [google.cloud.aiplatform.v1.Index]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L36}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::Index>> CreateIndex(
      google::cloud::aiplatform::v1::CreateIndexRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets an Index.
  ///
  /// @param name  Required. The name of the Index resource.
  ///  Format:
  ///  `projects/{project}/locations/{location}/indexes/{index}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.Index])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.GetIndexRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L148}
  /// [google.cloud.aiplatform.v1.Index]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L36}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::Index> GetIndex(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets an Index.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.GetIndexRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.Index])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.GetIndexRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L148}
  /// [google.cloud.aiplatform.v1.Index]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L36}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::Index> GetIndex(
      google::cloud::aiplatform::v1::GetIndexRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists Indexes in a Location.
  ///
  /// @param parent  Required. The resource name of the Location from which to list the Indexes.
  ///  Format: `projects/{project}/locations/{location}`
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
  ///     [google.cloud.aiplatform.v1.Index], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.Index]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L36}
  /// [google.cloud.aiplatform.v1.ListIndexesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L162}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::Index> ListIndexes(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists Indexes in a Location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.ListIndexesRequest].
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
  ///     [google.cloud.aiplatform.v1.Index], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.Index]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L36}
  /// [google.cloud.aiplatform.v1.ListIndexesRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L162}
  ///
  // clang-format on
  StreamRange<google::cloud::aiplatform::v1::Index> ListIndexes(
      google::cloud::aiplatform::v1::ListIndexesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates an Index.
  ///
  /// @param index  Required. The Index which updates the resource on the server.
  /// @param update_mask  The update mask applies to the resource.
  ///  For the `FieldMask` definition, see
  ///  [google.protobuf.FieldMask][google.protobuf.FieldMask].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.Index] proto message.
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
  /// [google.cloud.aiplatform.v1.Index]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L36}
  /// [google.cloud.aiplatform.v1.UpdateIndexRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L205}
  /// [google.protobuf.FieldMask]: @googleapis_reference_link{google/protobuf/field_mask.proto#L242}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::Index>> UpdateIndex(
      google::cloud::aiplatform::v1::Index const& index,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates an Index.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.UpdateIndexRequest].
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
  ///     [google.cloud.aiplatform.v1.Index] proto message.
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
  /// [google.cloud.aiplatform.v1.Index]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L36}
  /// [google.cloud.aiplatform.v1.UpdateIndexRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L205}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::Index>> UpdateIndex(
      google::cloud::aiplatform::v1::UpdateIndexRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes an Index.
  /// An Index can only be deleted when all its
  /// [DeployedIndexes][google.cloud.aiplatform.v1.Index.deployed_indexes] had
  /// been undeployed.
  ///
  /// @param name  Required. The name of the Index resource to be deleted.
  ///  Format:
  ///  `projects/{project}/locations/{location}/indexes/{index}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.aiplatform.v1.DeleteOperationMetadata] proto message.
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
  /// [google.cloud.aiplatform.v1.DeleteIndexRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L228}
  /// [google.cloud.aiplatform.v1.DeleteOperationMetadata]: @googleapis_reference_link{google/cloud/aiplatform/v1/operation.proto#L52}
  /// [google.cloud.aiplatform.v1.Index.deployed_indexes]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L86}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteIndex(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes an Index.
  /// An Index can only be deleted when all its
  /// [DeployedIndexes][google.cloud.aiplatform.v1.Index.deployed_indexes] had
  /// been undeployed.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.DeleteIndexRequest].
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
  ///     [google.cloud.aiplatform.v1.DeleteOperationMetadata] proto message.
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
  /// [google.cloud.aiplatform.v1.DeleteIndexRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L228}
  /// [google.cloud.aiplatform.v1.DeleteOperationMetadata]: @googleapis_reference_link{google/cloud/aiplatform/v1/operation.proto#L52}
  /// [google.cloud.aiplatform.v1.Index.deployed_indexes]: @googleapis_reference_link{google/cloud/aiplatform/v1/index.proto#L86}
  ///
  // clang-format on
  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteIndex(google::cloud::aiplatform::v1::DeleteIndexRequest const& request,
              Options opts = {});

  // clang-format off
  ///
  /// Add/update Datapoints into an Index.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.UpsertDatapointsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.UpsertDatapointsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.UpsertDatapointsRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L242}
  /// [google.cloud.aiplatform.v1.UpsertDatapointsResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L259}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
  UpsertDatapoints(
      google::cloud::aiplatform::v1::UpsertDatapointsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Remove Datapoints from an Index.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.aiplatform.v1.RemoveDatapointsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.aiplatform.v1.RemoveDatapointsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.aiplatform.v1.RemoveDatapointsRequest]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L263}
  /// [google.cloud.aiplatform.v1.RemoveDatapointsResponse]: @googleapis_reference_link{google/cloud/aiplatform/v1/index_service.proto#L280}
  ///
  // clang-format on
  StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
  RemoveDatapoints(
      google::cloud::aiplatform::v1::RemoveDatapointsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<IndexServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INDEX_CLIENT_H
