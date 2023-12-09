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
// source:
// google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_NETWORK_EDGE_SECURITY_SERVICES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_NETWORK_EDGE_SECURITY_SERVICES_CLIENT_H

#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_edge_security_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the networkEdgeSecurityServices resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices
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
class NetworkEdgeSecurityServicesClient {
 public:
  explicit NetworkEdgeSecurityServicesClient(
      std::shared_ptr<NetworkEdgeSecurityServicesConnection> connection,
      Options opts = {});
  ~NetworkEdgeSecurityServicesClient();

  ///@{
  /// @name Copy and move support
  NetworkEdgeSecurityServicesClient(NetworkEdgeSecurityServicesClient const&) =
      default;
  NetworkEdgeSecurityServicesClient& operator=(
      NetworkEdgeSecurityServicesClient const&) = default;
  NetworkEdgeSecurityServicesClient(NetworkEdgeSecurityServicesClient&&) =
      default;
  NetworkEdgeSecurityServicesClient& operator=(
      NetworkEdgeSecurityServicesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(NetworkEdgeSecurityServicesClient const& a,
                         NetworkEdgeSecurityServicesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(NetworkEdgeSecurityServicesClient const& a,
                         NetworkEdgeSecurityServicesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Retrieves the list of all NetworkEdgeSecurityService resources available to
  /// the specified project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/aggregatedList
  ///
  /// @param project  Name of the project scoping this request.
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
  ///     [google.cloud.cpp.compute.v1.NetworkEdgeSecurityServicesScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.AggregatedListNetworkEdgeSecurityServicesRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L105}
  /// [google.cloud.cpp.compute.v1.NetworkEdgeSecurityServicesScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_076.proto#L187}
  ///
  // clang-format on
  StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                         NetworkEdgeSecurityServicesScopedList>>
  AggregatedListNetworkEdgeSecurityServices(std::string const& project,
                                            Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of all NetworkEdgeSecurityService resources available to
  /// the specified project.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/aggregatedList
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.network_edge_security_services.v1.AggregatedListNetworkEdgeSecurityServicesRequest].
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
  ///     [google.cloud.cpp.compute.v1.NetworkEdgeSecurityServicesScopedList], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.AggregatedListNetworkEdgeSecurityServicesRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L105}
  /// [google.cloud.cpp.compute.v1.NetworkEdgeSecurityServicesScopedList]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_076.proto#L187}
  ///
  // clang-format on
  StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                         NetworkEdgeSecurityServicesScopedList>>
  AggregatedListNetworkEdgeSecurityServices(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          AggregatedListNetworkEdgeSecurityServicesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified service.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/delete
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param network_edge_security_service  Name of the network edge security service to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.DeleteNetworkEdgeSecurityServiceRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L183}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEdgeSecurityService(
      std::string const& project, std::string const& region,
      std::string const& network_edge_security_service, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified service.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.network_edge_security_services.v1.DeleteNetworkEdgeSecurityServiceRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.DeleteNetworkEdgeSecurityServiceRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L183}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          DeleteNetworkEdgeSecurityServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a specified NetworkEdgeSecurityService.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param network_edge_security_service  Name of the network edge security service to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.NetworkEdgeSecurityService])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.GetNetworkEdgeSecurityServiceRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L218}
  /// [google.cloud.cpp.compute.v1.NetworkEdgeSecurityService]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_076.proto#L25}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::NetworkEdgeSecurityService>
  GetNetworkEdgeSecurityService(
      std::string const& project, std::string const& region,
      std::string const& network_edge_security_service, Options opts = {});

  // clang-format off
  ///
  /// Gets a specified NetworkEdgeSecurityService.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.network_edge_security_services.v1.GetNetworkEdgeSecurityServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.NetworkEdgeSecurityService])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.GetNetworkEdgeSecurityServiceRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L218}
  /// [google.cloud.cpp.compute.v1.NetworkEdgeSecurityService]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_076.proto#L25}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::NetworkEdgeSecurityService>
  GetNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          GetNetworkEdgeSecurityServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new service in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/insert
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param network_edge_security_service_resource  The NetworkEdgeSecurityService for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.InsertNetworkEdgeSecurityServiceRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L235}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEdgeSecurityService(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::NetworkEdgeSecurityService const&
          network_edge_security_service_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new service in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.network_edge_security_services.v1.InsertNetworkEdgeSecurityServiceRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.InsertNetworkEdgeSecurityServiceRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L235}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          InsertNetworkEdgeSecurityServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified policy with the data included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/patch
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param network_edge_security_service  Name of the network edge security service to update.
  /// @param update_mask  Indicates fields to be updated as part of this request.
  /// @param network_edge_security_service_resource  The NetworkEdgeSecurityService for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.PatchNetworkEdgeSecurityServiceRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L272}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworkEdgeSecurityService(
      std::string const& project, std::string const& region,
      std::string const& network_edge_security_service,
      std::string const& update_mask,
      google::cloud::cpp::compute::v1::NetworkEdgeSecurityService const&
          network_edge_security_service_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified policy with the data included in the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/networkEdgeSecurityServices/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.network_edge_security_services.v1.PatchNetworkEdgeSecurityServiceRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.network_edge_security_services.v1.PatchNetworkEdgeSecurityServiceRequest]: @cloud_cpp_reference_link{google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto#L272}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworkEdgeSecurityService(
      google::cloud::cpp::compute::network_edge_security_services::v1::
          PatchNetworkEdgeSecurityServiceRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<NetworkEdgeSecurityServicesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_edge_security_services_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_EDGE_SECURITY_SERVICES_V1_NETWORK_EDGE_SECURITY_SERVICES_CLIENT_H
