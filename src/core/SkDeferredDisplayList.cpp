/*
 * Copyright 2018 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "include/core/SkDeferredDisplayList.h"

#include "include/core/SkRefCnt.h"
#include "include/core/SkTypes.h"
#include "src/core/SkArenaAlloc.h"
#include <utility>
class SkSurfaceCharacterization;

#if SK_SUPPORT_GPU
#include "src/gpu/GrRenderTask.h"
#include "src/gpu/ccpr/GrCCPerOpsTaskPaths.h"
#endif

SkDeferredDisplayList::SkDeferredDisplayList(const SkSurfaceCharacterization& characterization,
                                             sk_sp<LazyProxyData> lazyProxyData)
        : fCharacterization(characterization)
#if SK_SUPPORT_GPU
        , fLazyProxyData(std::move(lazyProxyData))
#endif
{
}

SkDeferredDisplayList::~SkDeferredDisplayList() {}
