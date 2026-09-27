#include "AmericanSenate.h"

#include <stddef.h>

static const char AMERICAN_SENATE_NAME[] = "American Senate";
static const char AMERICAN_SENATE_COUNTRY[] = "United States";
static const char AMERICAN_SENATE_INSTITUTION[] = "United States Senate";

void american_senate_init(AmericanSenate *object)
{
    if (object == NULL) {
        return;
    }

    object->name = AMERICAN_SENATE_NAME;
    object->country = AMERICAN_SENATE_COUNTRY;
    object->institution = AMERICAN_SENATE_INSTITUTION;
}

const char *american_senate_name(const AmericanSenate *object)
{
    if (object == NULL || object->name == NULL) {
        return AMERICAN_SENATE_NAME;
    }

    return object->name;
}

const char *american_senate_country(const AmericanSenate *object)
{
    if (object == NULL || object->country == NULL) {
        return AMERICAN_SENATE_COUNTRY;
    }

    return object->country;
}

const char *american_senate_institution(const AmericanSenate *object)
{
    if (object == NULL || object->institution == NULL) {
        return AMERICAN_SENATE_INSTITUTION;
    }

    return object->institution;
}
