#include "UnitedStatesCongress.h"

#include <stddef.h>

static const char UNITED_STATES_CONGRESS_NAME[] = "United States Congress";
static const char UNITED_STATES_CONGRESS_COUNTRY[] = "United States";
static const char UNITED_STATES_CONGRESS_INSTITUTION[] = "United States Congress";

void united_states_congress_init(UnitedStatesCongress *object)
{
    if (object == NULL) {
        return;
    }

    object->name = UNITED_STATES_CONGRESS_NAME;
    object->country = UNITED_STATES_CONGRESS_COUNTRY;
    object->institution = UNITED_STATES_CONGRESS_INSTITUTION;
}

const char *united_states_congress_name(const UnitedStatesCongress *object)
{
    if (object == NULL || object->name == NULL) {
        return UNITED_STATES_CONGRESS_NAME;
    }

    return object->name;
}

const char *united_states_congress_country(const UnitedStatesCongress *object)
{
    if (object == NULL || object->country == NULL) {
        return UNITED_STATES_CONGRESS_COUNTRY;
    }

    return object->country;
}

const char *united_states_congress_institution(const UnitedStatesCongress *object)
{
    if (object == NULL || object->institution == NULL) {
        return UNITED_STATES_CONGRESS_INSTITUTION;
    }

    return object->institution;
}
