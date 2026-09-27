#ifndef SENIOR_SENATE_ATTORNEY_AMERICAN_SENATE_H
#define SENIOR_SENATE_ATTORNEY_AMERICAN_SENATE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AmericanSenate {
    const char *name;
    const char *country;
    const char *institution;
} AmericanSenate;

void american_senate_init(AmericanSenate *object);
const char *american_senate_name(const AmericanSenate *object);
const char *american_senate_country(const AmericanSenate *object);
const char *american_senate_institution(const AmericanSenate *object);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_AMERICAN_SENATE_H */
