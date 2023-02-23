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
// source: google/cloud/talent/v4/tenant_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_TENANT_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_TENANT_OPTIONS_H

#include "google/cloud/talent/v4/tenant_connection.h"
#include "google/cloud/talent/v4/tenant_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent_v4 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-talent-options
 */
struct TenantServiceRetryPolicyOption {
  using Type = std::shared_ptr<TenantServiceRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-talent-options
 */
struct TenantServiceBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-talent-options
 */
struct TenantServiceConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<TenantServiceConnectionIdempotencyPolicy>;
};

/**
 * The options applicable to TenantService.
 *
 * @ingroup google-cloud-talent-options
 */
using TenantServicePolicyOptionList =
    OptionList<TenantServiceRetryPolicyOption, TenantServiceBackoffPolicyOption,
               TenantServiceConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_TENANT_OPTIONS_H
