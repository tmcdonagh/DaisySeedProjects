#pragma once
#ifndef GUITAR_PEDAL_INTERNAL_H
#define GUITAR_PEDAL_INTERNAL_H /**< & */

#define DISPLAY_BUTTON_INDEX  2

#include "base_hardware_module.h"

#ifdef __cplusplus

/** @file guitar_pedal_terrarium.h */

using namespace daisy;

namespace bkshepherd {

/**
   @brief Helpers and hardware definitions for a 1590B sized Guitar Pedal based on the Daisy Seed.
*/
class GuitarPedalInternal : public BaseHardwareModule {
  public:
    GuitarPedalInternal();
    ~GuitarPedalInternal();
    void Init(size_t blockSize, bool boost) override;
};
} // namespace bkshepherd
#endif
#endif