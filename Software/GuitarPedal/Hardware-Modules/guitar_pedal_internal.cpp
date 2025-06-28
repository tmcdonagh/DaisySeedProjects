#include "guitar_pedal_internal.h"

using namespace bkshepherd;

static const int s_switchParamCount = 2;
static const PreferredSwitchMetaData s_switchMetaData[s_switchParamCount] = {
    {sfType : SpecialFunctionType::Bypass, switchMapping : 0}, {sfType : SpecialFunctionType::Alternate, switchMapping : 1}};

GuitarPedalInternal::GuitarPedalInternal() : BaseHardwareModule() {
    // Setup the Switch Meta Data for this hardware
    m_switchMetaDataParamCount = s_switchParamCount;
    m_switchMetaData = s_switchMetaData;
}

GuitarPedalInternal::~GuitarPedalInternal() {}

void GuitarPedalInternal::Init(size_t blockSize, bool boost) {
    BaseHardwareModule::Init(blockSize, boost);

    Pin knobPins[] = {};
    InitKnobs(0, knobPins);

    Pin switchPins[] = {seed::D26, seed::D25, seed::D20};
    InitSwitches(3, switchPins);

    Pin ledPins[] = {seed::D23, seed::D22};
    InitLeds(2, ledPins);
    InitI2cDisplay(seed::D12, seed::D11);
}
