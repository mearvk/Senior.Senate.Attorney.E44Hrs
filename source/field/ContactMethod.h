#ifndef SENIOR_SENATE_ATTORNEY_CONTACT_METHOD_H
#define SENIOR_SENATE_ATTORNEY_CONTACT_METHOD_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContactMethod {
    const char *type;
    const char *value;
    const char *description;
} ContactMethod;

void contact_method_init(ContactMethod *object);
const char *contact_method_type(const ContactMethod *object);
const char *contact_method_value(const ContactMethod *object);
const char *contact_method_description(const ContactMethod *object);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_CONTACT_METHOD_H */
