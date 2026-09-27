#include "Tech.h"

#include <stddef.h>

static const char TECH_NAME[] = "Tech";
static const char TECH_LANGUAGE[] = "C/C++";
static const char TECH_PURPOSE[] =
    "Technology source and configuration model.";

void tech_init(Tech *object)
{
    if (object == NULL) {
        return;
    }

    object->name = TECH_NAME;
    object->language = TECH_LANGUAGE;
    object->purpose = TECH_PURPOSE;
}

const char *tech_name(const Tech *object)
{
    if (object == NULL || object->name == NULL) {
        return TECH_NAME;
    }

    return object->name;
}

const char *tech_language(const Tech *object)
{
    if (object == NULL || object->language == NULL) {
        return TECH_LANGUAGE;
    }

    return object->language;
}

const char *tech_purpose(const Tech *object)
{
    if (object == NULL || object->purpose == NULL) {
        return TECH_PURPOSE;
    }

    return object->purpose;
}
