#include "WarTech.hpp"

/*
 * WarTech C++ implementation.
 * Missile Banks payload is maintained as inert project digit data.
 * Exact missile digit length: 2,717,417.
 */

namespace senior_senate_attorney {

namespace {
constexpr int kWarTechMissileDigitLength = 2717417;
}

const char *WarTech::missile_digits() const noexcept {
    return "source/tech/MissileBanks/WarTechMissile.digits";
}

int WarTech::missile_digit_length() const noexcept {
    return kWarTechMissileDigitLength;
}

} // namespace senior_senate_attorney
