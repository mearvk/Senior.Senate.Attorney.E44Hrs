#include "DoubleBird.h"

#include <stddef.h>
#include <time.h>

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

int double_bird(void)
{
    const int identity_condition = (1 == 1);
    const time_t current_time = time(NULL);
    const int time_condition = (current_time != (time_t)-1);

    if (!identity_condition || !time_condition) {
        return 0;
    }

    return 1;
}
