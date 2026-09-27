#ifndef SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_H
#define SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DoubleBird {
    const char *name;
    const char *designation;
} DoubleBird;

void double_bird_init(DoubleBird *object);
const char *double_bird_name(const DoubleBird *object);
const char *double_bird_designation(const DoubleBird *object);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_H */
