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
// source: google/cloud/aiplatform/v1/feature_online_store_service.proto

#include "google/cloud/aiplatform/v1/feature_online_store_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FeatureOnlineStoreServiceClient::FeatureOnlineStoreServiceClient(
    std::shared_ptr<FeatureOnlineStoreServiceConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
FeatureOnlineStoreServiceClient::~FeatureOnlineStoreServiceClient() = default;

StatusOr<google::cloud::aiplatform::v1::FetchFeatureValuesResponse>
FeatureOnlineStoreServiceClient::FetchFeatureValues(
    std::string const& feature_view,
    google::cloud::aiplatform::v1::FeatureViewDataKey const& data_key,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::FetchFeatureValuesRequest request;
  request.set_feature_view(feature_view);
  *request.mutable_data_key() = data_key;
  return connection_->FetchFeatureValues(request);
}

StatusOr<google::cloud::aiplatform::v1::FetchFeatureValuesResponse>
FeatureOnlineStoreServiceClient::FetchFeatureValues(
    google::cloud::aiplatform::v1::FetchFeatureValuesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchFeatureValues(request);
}

StatusOr<google::cloud::aiplatform::v1::SearchNearestEntitiesResponse>
FeatureOnlineStoreServiceClient::SearchNearestEntities(
    google::cloud::aiplatform::v1::SearchNearestEntitiesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchNearestEntities(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
