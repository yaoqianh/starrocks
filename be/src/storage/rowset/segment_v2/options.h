// This file is made available under Elastic License 2.0.
// This file is based on code available under the Apache license here:
//   https://github.com/apache/incubator-doris/blob/master/be/src/olap/rowset/segment_v2/options.h

// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#pragma once

#include <cstddef>

#include "storage/rowset/segment_v2/page_handle.h"
namespace starrocks {
namespace segment_v2 {

static const size_t DEFAULT_PAGE_SIZE = 1024 * 1024; // default size: 1M

class PageBuilderOptions {
public:
    size_t data_page_size = DEFAULT_PAGE_SIZE;

    size_t dict_page_size = DEFAULT_PAGE_SIZE;
};

class PageDecoderOptions {
public:
    PageHandle* page_handle = nullptr;
    bool enable_direct_copy = false;
};

} // namespace segment_v2
} // namespace starrocks
