/*
 * Copyright (C) 2021-2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <aidl/vendor/lineage/xiaomi_als/BnAreaCapture.h>
#include <ui/Rect.h>

namespace aidl {
namespace vendor {
namespace lineage {
namespace xiaomi_als {

class AreaCapture : public BnAreaCapture {
  public:
    AreaCapture();
    ndk::ScopedAStatus getAreaBrightness(AreaRgbCaptureResult* _aidl_return) override;

  private:
    static ::android::sp<::android::IBinder> getInternalDisplayToken();

    ::android::Rect m_screenshot_rect;
};

}  // namespace xiaomi_als
}  // namespace lineage
}  // namespace vendor
}  // namespace aidl
