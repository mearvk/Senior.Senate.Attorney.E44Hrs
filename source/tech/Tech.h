#ifndef SENIOR_SENATE_ATTORNEY_TECH_H
#define SENIOR_SENATE_ATTORNEY_TECH_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Tech {
    const char *name;
    const char *language;
    const char *purpose;
} Tech;

void tech_init(Tech *object);
const char *tech_name(const Tech *object);
const char *tech_language(const Tech *object);
const char *tech_purpose(const Tech *object);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_TECH_H */
