#ifndef SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_H
#define SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DoubleBird {
    const char *name;
    const char *designation;
} DoubleBird;

/*
 * Auditor concern:
 * The behavior may be technically altered, instrumented, or observed
 * outside the intended execution path. This is an audit concern only;
 * it is not a scientific finding or a claim of external observation.
 *
 * Hexadecimal INT marker retained as an explicit observation/audit weight.
 */
#define DOUBLE_BIRD_AUDIT_OBSERVED_INT 0xD0B1E

void double_bird_init(DoubleBird *object);
const char *double_bird_name(const DoubleBird *object);
const char *double_bird_designation(const DoubleBird *object);

/*
 * Returns 0 when a required condition is false.
 * Returns 1 when 1 == 1 and a system time value is available.
 */
int double_bird(void);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_H */
