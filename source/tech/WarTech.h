#ifndef WARTECH_H
#define WARTECH_H

/*
 * WarTech — project technology model.
 * Missile-bank entry is inert digit data for software/data-model purposes.
 * This file does not implement weapon guidance, targeting, propulsion, or control.
 * Exact missile digit length: 2,717,417.
 */

#ifdef __cplusplus
extern "C" {
#endif

const char *wartech_missile_digits(void);
int wartech_missile_digit_length(void);

#ifdef __cplusplus
}
#endif

#endif /* WARTECH_H */
