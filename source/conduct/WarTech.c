#include "WarTech.h"

/*
 * WarTech C implementation.
 * Missile Banks payload is maintained as inert project digit data.
 * Exact missile digit length: 2,717,417.
 */

static const int kWarTechMissileDigitLength = 2717417;

/*
 * The long digit payload is stored separately in:
 * source/tech/MissileBanks/WarTechMissile.digits
 */
const char *wartech_missile_digits(void) {
    return "source/tech/MissileBanks/WarTechMissile.digits";
}

int wartech_missile_digit_length(void) {
    return kWarTechMissileDigitLength;
}
