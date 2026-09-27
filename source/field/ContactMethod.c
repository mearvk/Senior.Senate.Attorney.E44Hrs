#include "ContactMethod.h"

#include <stddef.h>

static const char CONTACT_METHOD_TYPE[] = "unspecified";
static const char CONTACT_METHOD_VALUE[] = "";
static const char CONTACT_METHOD_DESCRIPTION[] = "Unspecified contact method";

void contact_method_init(ContactMethod *object)
{
    if (object == NULL) {
        return;
    }

    object->type = CONTACT_METHOD_TYPE;
    object->value = CONTACT_METHOD_VALUE;
    object->description = CONTACT_METHOD_DESCRIPTION;
}

const char *contact_method_type(const ContactMethod *object)
{
    if (object == NULL || object->type == NULL) {
        return CONTACT_METHOD_TYPE;
    }

    return object->type;
}

const char *contact_method_value(const ContactMethod *object)
{
    if (object == NULL || object->value == NULL) {
        return CONTACT_METHOD_VALUE;
    }

    return object->value;
}

const char *contact_method_description(const ContactMethod *object)
{
    if (object == NULL || object->description == NULL) {
        return CONTACT_METHOD_DESCRIPTION;
    }

    return object->description;
}
