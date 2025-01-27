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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PROFILER_V2_INTERNAL_PROFILER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PROFILER_V2_INTERNAL_PROFILER_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/devtools/cloudprofiler/v2/profiler.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace profiler_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProfilerServiceStub {
 public:
  virtual ~ProfilerServiceStub() = 0;

  virtual StatusOr<google::devtools::cloudprofiler::v2::Profile> CreateProfile(
      grpc::ClientContext& context,
      google::devtools::cloudprofiler::v2::CreateProfileRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudprofiler::v2::Profile>
  CreateOfflineProfile(
      grpc::ClientContext& context,
      google::devtools::cloudprofiler::v2::CreateOfflineProfileRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudprofiler::v2::Profile> UpdateProfile(
      grpc::ClientContext& context,
      google::devtools::cloudprofiler::v2::UpdateProfileRequest const&
          request) = 0;
};

class DefaultProfilerServiceStub : public ProfilerServiceStub {
 public:
  explicit DefaultProfilerServiceStub(
      std::unique_ptr<
          google::devtools::cloudprofiler::v2::ProfilerService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::devtools::cloudprofiler::v2::Profile> CreateProfile(
      grpc::ClientContext& context,
      google::devtools::cloudprofiler::v2::CreateProfileRequest const& request)
      override;

  StatusOr<google::devtools::cloudprofiler::v2::Profile> CreateOfflineProfile(
      grpc::ClientContext& context,
      google::devtools::cloudprofiler::v2::CreateOfflineProfileRequest const&
          request) override;

  StatusOr<google::devtools::cloudprofiler::v2::Profile> UpdateProfile(
      grpc::ClientContext& context,
      google::devtools::cloudprofiler::v2::UpdateProfileRequest const& request)
      override;

 private:
  std::unique_ptr<
      google::devtools::cloudprofiler::v2::ProfilerService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PROFILER_V2_INTERNAL_PROFILER_STUB_H
