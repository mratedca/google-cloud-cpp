// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMON_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMON_OPTIONS_H

#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <set>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Change the endpoint.
 *
 * In almost all cases a suitable default will be chosen automatically.
 * Applications may need to be changed to (1) test against a fake or simulator,
 * or (2) use a beta or EAP version of the service. When using a beta or EAP
 * version of the service, the AuthorityOption should also be set to the usual
 * hostname of the service.
 *
 * @ingroup options
 */
struct EndpointOption {
  using Type = std::string;
};

/**
 * User-agent products to include with each request.
 *
 * Libraries or services that use Cloud C++ clients may want to set their own
 * user-agent product information. This can help them develop telemetry
 * information about number of users running particular versions of their
 * system or library.
 *
 * @see https://tools.ietf.org/html/rfc7231#section-5.5.3
 *
 * @ingroup options
 */
struct UserAgentProductsOption {
  using Type = std::vector<std::string>;
};

/**
 * Return whether tracing is enabled for the given @p component.
 *
 * The C++ clients can log interesting events to help library and application
 * developers troubleshoot problems. To see log messages (maybe lots) you can
 * enable tracing for the component that interests you. Valid components are
 * currently:
 *
 * - rpc
 * - rpc-streams
 */
struct TracingComponentsOption {
  using Type = std::set<std::string>;
};

/**
 * Specifies a project for quota and billing purposes.
 *
 * The caller must have `serviceusage.services.use` permission on the project.
 *
 * @see https://cloud.google.com/iam/docs/permissions-reference for more
 *     information about the `seviceusage.services.use` permission, including
 *     default roles that grant it.
 * @see https://cloud.google.com/apis/docs/system-parameters
 *
 * @ingroup options
 */
struct UserProjectOption {
  using Type = std::string;
};

/**
 * Configure the "authority" attribute.
 *
 * For gRPC requests this is the `authority()` field in the
 * `grpc::ClientContext`. This configures the :authority pseudo-header in the
 * HTTP/2 request.
 *     https://datatracker.ietf.org/doc/html/rfc7540#section-8.1.2.3
 *
 * For REST-based services using HTTP/1.1 or HTTP/1.0 this is the `Host` header.
 *
 * Setting this option to the empty string has no effect, i.e., no headers are
 * set. This can be useful if you are not using Google's production environment.
 *
 * @ingroup options
 */
struct AuthorityOption {
  using Type = std::string;
};

/**
 * The configuration for a HTTP Proxy.
 *
 * This configuration can be used for both REST-based and gRPC-based clients.
 * The client library sets the underlying configuration parameters based on
 * the values in this struct.
 *
 * The full URI is constructed as:
 *
 * {scheme}://{username}:{password}@{hostname}:{port}
 *
 * Any empty values are omitted, except for the `scheme` which defaults to
 * `https`. If the `hostname` value is empty, no HTTP proxy is configured.
 */
class ProxyConfig {
 public:
  ProxyConfig() = default;

  /// The HTTP proxy host.
  std::string const& hostname() const { return hostname_; }

  /// The HTTP proxy port.
  std::string const& port() const { return port_; }

  /// The HTTP proxy username.
  std::string const& username() const { return username_; }

  /// The HTTP proxy password.
  std::string const& password() const { return password_; }

  /// The HTTP proxy scheme (http or https).
  std::string const& scheme() const { return scheme_; }

  ///@{
  ///@ name Modifiers.
  ProxyConfig& set_hostname(std::string v) & {
    hostname_ = std::move(v);
    return *this;
  }
  ProxyConfig&& set_hostname(std::string v) && {
    return std::move(set_hostname(std::move(v)));
  }

  ProxyConfig& set_port(std::string v) & {
    port_ = std::move(v);
    return *this;
  }
  ProxyConfig&& set_port(std::string v) && {
    return std::move(set_port(std::move(v)));
  }

  ProxyConfig& set_username(std::string v) & {
    username_ = std::move(v);
    return *this;
  }
  ProxyConfig&& set_username(std::string v) && {
    return std::move(set_username(std::move(v)));
  }

  ProxyConfig& set_password(std::string v) & {
    password_ = std::move(v);
    return *this;
  }
  ProxyConfig&& set_password(std::string v) && {
    return std::move(set_password(std::move(v)));
  }

  ProxyConfig& set_scheme(std::string v) & {
    scheme_ = std::move(v);
    return *this;
  }
  ProxyConfig&& set_scheme(std::string v) && {
    return std::move(set_scheme(std::move(v)));
  }
  ///@}

 private:
  std::string hostname_;
  std::string port_;
  std::string username_;
  std::string password_;
  std::string scheme_ = "https";
};

/**
 * Configure the HTTP Proxy.
 *
 * Both HTTP and gRPC-based clients can be configured to use an HTTP proxy for
 * requests. Setting the `ProxyOption` will configure the client to use a
 * proxy as described by the `ProxyConfig` value.
 *
 * @see https://github.com/grpc/grpc/blob/master/doc/core/default_http_proxy_mapper.md
 * @see https://curl.se/libcurl/c/CURLOPT_PROXYUSERNAME.html
 * @see https://curl.se/libcurl/c/CURLOPT_PROXYPASSWORD.html
 * @see https://curl.se/libcurl/c/CURLOPT_PROXY.html
 *
 * @ingroup options
 */
struct ProxyOption {
  using Type = ProxyConfig;
};

/**
 * A list of all the common options.
 */
using CommonOptionList =
    OptionList<EndpointOption, UserAgentProductsOption, TracingComponentsOption,
               UserProjectOption, AuthorityOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMON_OPTIONS_H
