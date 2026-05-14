#include <ofbx.h>

#include <cmath>

int main()
{
    const double seconds = 1.25;
    const auto ticks = ofbx::secondsToFbxTime(seconds);
    const double roundtrip = ofbx::fbxTimeToSeconds(ticks);

    if (std::abs(roundtrip - seconds) > 1e-9)
    {
        return 1;
    }

    const auto flags = ofbx::LoadFlags::IGNORE_GEOMETRY | ofbx::LoadFlags::IGNORE_LIGHTS;
    if (static_cast<ofbx::u16>(flags) == 0)
    {
        return 2;
    }

    return 0;
}
