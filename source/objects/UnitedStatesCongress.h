#ifndef SENIOR_SENATE_ATTORNEY_UNITED_STATES_CONGRESS_H
#define SENIOR_SENATE_ATTORNEY_UNITED_STATES_CONGRESS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct UnitedStatesCongress {
    const char *name;
    const char *country;
    const char *institution;
} UnitedStatesCongress;

void united_states_congress_init(UnitedStatesCongress *object);
const char *united_states_congress_name(const UnitedStatesCongress *object);
const char *united_states_congress_country(const UnitedStatesCongress *object);
const char *united_states_congress_institution(const UnitedStatesCongress *object);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_UNITED_STATES_CONGRESS_H */
