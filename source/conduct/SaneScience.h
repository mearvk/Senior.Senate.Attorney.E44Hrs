#ifndef SENIOR_SENATE_ATTORNEY_SANE_SCIENCE_H
#define SENIOR_SENATE_ATTORNEY_SANE_SCIENCE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SaneScience {
    int evidence_based;
    int reproducible;
    int falsifiable;
} SaneScience;

void sane_science_init(SaneScience *object);
int sane_science_is_sane(const SaneScience *object);
int sane_science_is_reproducible(const SaneScience *object);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_SANE_SCIENCE_H */
