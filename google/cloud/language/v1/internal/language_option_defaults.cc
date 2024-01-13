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
// source: google/cloud/language/v1/language_service.proto

#include "google/cloud/language/v1/internal/language_option_defaults.h"
#include "google/cloud/language/v1/language_connection.h"
#include "google/cloud/language/v1/language_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace language_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options LanguageServiceDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_LANGUAGE_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_LANGUAGE_SERVICE_AUTHORITY", "language.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<language_v1::LanguageServiceRetryPolicyOption>()) {
    options.set<language_v1::LanguageServiceRetryPolicyOption>(
        language_v1::LanguageServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<language_v1::LanguageServiceBackoffPolicyOption>()) {
    options.set<language_v1::LanguageServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<
          language_v1::LanguageServiceConnectionIdempotencyPolicyOption>()) {
    options.set<language_v1::LanguageServiceConnectionIdempotencyPolicyOption>(
        language_v1::MakeDefaultLanguageServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1_internal
}  // namespace cloud
}  // namespace google
