// Copyright (c) 2022 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <string>
#include <tuple>
#include <vector>

#include "paddle/fluid/eager/type_defs.h"
#include "paddle/phi/api/include/tensor.h"
#include "paddle/utils/small_vector.h"

namespace egr {

using paddle::experimental::Tensor;
using TupleOfTwoTensors = std::tuple<Tensor, Tensor>;
using TupleOfThreeTensors = std::tuple<Tensor, Tensor, Tensor>;
using TupleOfFourTensors = std::tuple<Tensor, Tensor, Tensor, Tensor>;
using TupleOfFiveTensors = std::tuple<Tensor, Tensor, Tensor, Tensor, Tensor>;
using TupleOfSixTensors =
    std::tuple<Tensor, Tensor, Tensor, Tensor, Tensor, Tensor>;
using TupleOfTensorAndVector = std::tuple<Tensor, std::vector<Tensor>>;

void CheckTensorHasNanOrInf(const std::string& api_name, const Tensor& tensor);

void CheckTensorHasNanOrInf(const std::string& api_name,
                            const TupleOfTwoTensors& tensors);

void CheckTensorHasNanOrInf(const std::string& api_name,
                            const TupleOfThreeTensors& tensors);

void CheckTensorHasNanOrInf(const std::string& api_name,
                            const TupleOfFourTensors& tensors);

void CheckTensorHasNanOrInf(const std::string& api_name,
                            const TupleOfFiveTensors& tensors);

void CheckTensorHasNanOrInf(const std::string& api_name,
                            const TupleOfSixTensors& tensors);

void CheckTensorHasNanOrInf(const std::string& api_name,
                            const std::vector<Tensor>& tensors);

void CheckTensorHasNanOrInf(const std::string& api_name,
                            const TupleOfTensorAndVector& tensors);

void CheckTensorHasNanOrInf(
    const std::string& api_name,
    const paddle::small_vector<std::vector<paddle::experimental::Tensor>,
                               egr::kSlotSmallVectorSize>& tensors);

}  // namespace egr
