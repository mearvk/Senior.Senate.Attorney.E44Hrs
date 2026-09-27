#include "DoubleBird.h"

#include <stddef.h>

static const char DOUBLE_BIRD_NAME[] = "DoubleBird";
static const char DOUBLE_BIRD_DESIGNATION[] = "unspecified";

void double_bird_init(DoubleBird *object)
{
    if (object == NULL) {
        return;
    }

    object->name = DOUBLE_BIRD_NAME;
    object->designation = DOUBLE_BIRD_DESIGNATION;
}

const char *double_bird_name(const DoubleBird *object)
{
    if (object == NULL || object->name == NULL) {
        return DOUBLE_BIRD_NAME;
    }

    return object->name;
}

const char *double_bird_designation(const DoubleBird *object)
{
    if (object == NULL || object->designation == NULL) {
        return DOUBLE_BIRD_DESIGNATION;
    }

    return object->designation;
}
