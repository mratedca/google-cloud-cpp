// Copyright 2024 Google LLC
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
// source: generator/integration_tests/test_request_id.proto

#include "generator/integration_tests/golden/v1/request_id_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RequestIdServiceClient::RequestIdServiceClient(
    std::shared_ptr<RequestIdServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(std::move(opts),
      connection_->options())) {}
RequestIdServiceClient::~RequestIdServiceClient() = default;

StatusOr<google::test::requestid::v1::Foo>
RequestIdServiceClient::CreateFoo(std::string const& parent, std::string const& foo_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::requestid::v1::CreateFooRequest request;
  request.set_parent(parent);
  request.set_foo_id(foo_id);
  return connection_->CreateFoo(request);
}

StatusOr<google::test::requestid::v1::Foo>
RequestIdServiceClient::CreateFoo(google::test::requestid::v1::CreateFooRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFoo(request);
}

future<StatusOr<google::test::requestid::v1::Foo>>
RequestIdServiceClient::RenameFoo(std::string const& name, std::string const& destination_foo_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::requestid::v1::RenameFooRequest request;
  request.set_name(name);
  request.set_destination_foo_id(destination_foo_id);
  return connection_->RenameFoo(request);
}

future<StatusOr<google::test::requestid::v1::Foo>>
RequestIdServiceClient::RenameFoo(google::test::requestid::v1::RenameFooRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RenameFoo(request);
}

StreamRange<google::test::requestid::v1::Foo>
RequestIdServiceClient::ListFoos(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::requestid::v1::ListFoosRequest request;
  request.set_parent(parent);
  return connection_->ListFoos(request);
}

StreamRange<google::test::requestid::v1::Foo>
RequestIdServiceClient::ListFoos(google::test::requestid::v1::ListFoosRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFoos(std::move(request));
}

future<StatusOr<google::test::requestid::v1::Foo>>
RequestIdServiceClient::AsyncCreateFoo(std::string const& parent, std::string const& foo_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::test::requestid::v1::CreateFooRequest request;
  request.set_parent(parent);
  request.set_foo_id(foo_id);
  return connection_->AsyncCreateFoo(request);
}

future<StatusOr<google::test::requestid::v1::Foo>>
RequestIdServiceClient::AsyncCreateFoo(google::test::requestid::v1::CreateFooRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncCreateFoo(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1
}  // namespace cloud
}  // namespace google
