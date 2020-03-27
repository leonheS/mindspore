/**
 * Copyright 2020 Huawei Technologies Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <iostream>
#include <string>
#include "common/common_test.h"

#include "utils/log_adapter.h"
#include "debug/anf_ir_utils.h"
#include "pipeline/parse/parse.h"
#include "ir/manager.h"
#include "pipeline/static_analysis/prim.h"
#include "operator/ops.h"

namespace mindspore {
class TestIrImporter : public UT::Common {
 public:
  TestIrImporter() {}
  virtual ~TestIrImporter() {}

  virtual void TearDown() {}
};
}  // namespace mindspore