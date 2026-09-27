#include "TechSetup.h"

#include <stddef.h>

static const char TECH_SETUP_NAME[] = "TechSetup";
static const char TECH_SETUP_LANGUAGE[] = "C/C++";
static const char TECH_SETUP_PURPOSE[] =
    "Technology setup and source configuration model.";

void tech_setup_init(TechSetup *object)
{
    if (object == NULL) {
        return;
    }

    object->name = TECH_SETUP_NAME;
    object->language = TECH_SETUP_LANGUAGE;
    object->purpose = TECH_SETUP_PURPOSE;
}

const char *tech_setup_name(const TechSetup *object)
{
    if (object == NULL || object->name == NULL) {
        return TECH_SETUP_NAME;
    }

    return object->name;
}

const char *tech_setup_language(const TechSetup *object)
{
    if (object == NULL || object->language == NULL) {
        return TECH_SETUP_LANGUAGE;
    }

    return object->language;
}

const char *tech_setup_purpose(const TechSetup *object)
{
    if (object == NULL || object->purpose == NULL) {
        return TECH_SETUP_PURPOSE;
    }

    return object->purpose;
}
