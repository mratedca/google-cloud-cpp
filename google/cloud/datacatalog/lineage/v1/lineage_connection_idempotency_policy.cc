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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/lineage_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

LineageConnectionIdempotencyPolicy::~LineageConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<LineageConnectionIdempotencyPolicy>
LineageConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<LineageConnectionIdempotencyPolicy>(*this);
}

Idempotency LineageConnectionIdempotencyPolicy::ProcessOpenLineageRunEvent(
    google::cloud::datacatalog::lineage::v1::
        ProcessOpenLineageRunEventRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::CreateProcess(
    google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::UpdateProcess(
    google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::GetProcess(
    google::cloud::datacatalog::lineage::v1::GetProcessRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::ListProcesses(
    google::cloud::datacatalog::lineage::v1::ListProcessesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::DeleteProcess(
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::CreateRun(
    google::cloud::datacatalog::lineage::v1::CreateRunRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::UpdateRun(
    google::cloud::datacatalog::lineage::v1::UpdateRunRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::GetRun(
    google::cloud::datacatalog::lineage::v1::GetRunRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::ListRuns(
    google::cloud::datacatalog::lineage::v1::ListRunsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::DeleteRun(
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::CreateLineageEvent(
    google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::GetLineageEvent(
    google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::ListLineageEvents(
    google::cloud::datacatalog::lineage::v1::
        ListLineageEventsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::DeleteLineageEvent(
    google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::SearchLinks(
    google::cloud::datacatalog::lineage::v1::SearchLinksRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency LineageConnectionIdempotencyPolicy::BatchSearchLinkProcesses(
    google::cloud::datacatalog::lineage::v1::
        BatchSearchLinkProcessesRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<LineageConnectionIdempotencyPolicy>
MakeDefaultLineageConnectionIdempotencyPolicy() {
  return std::make_unique<LineageConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1
}  // namespace cloud
}  // namespace google
