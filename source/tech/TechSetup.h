#ifndef SENIOR_SENATE_ATTORNEY_TECH_SETUP_H
#define SENIOR_SENATE_ATTORNEY_TECH_SETUP_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TechSetup {
    const char *name;
    const char *language;
    const char *purpose;
} TechSetup;

void tech_setup_init(TechSetup *object);
const char *tech_setup_name(const TechSetup *object);
const char *tech_setup_language(const TechSetup *object);
const char *tech_setup_purpose(const TechSetup *object);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_TECH_SETUP_H */
