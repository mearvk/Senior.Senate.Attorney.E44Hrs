#include "DoubleBird.h"

#include <stddef.h>
#include <time.h>

static const char DOUBLE_BIRD_NAME[] = "DoubleBird";
static const char DOUBLE_BIRD_DESIGNATION[] = "unspecified";

static const int DOUBLE_BIRD_AUDIT_OBSERVED_VALUE = 0xD0B1E;

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
    /*
     * Auditor concern: execution may be technically altered,
     * instrumented, or observed outside the intended execution path.
     * This is an audit concern, not a scientific finding.
     */
    const int identity_condition = (1 == 1);
    const time_t current_time = time(NULL);
    const int time_condition = (current_time != (time_t)-1);
    const int observed_marker = DOUBLE_BIRD_AUDIT_OBSERVED_VALUE;

    if (!identity_condition || !time_condition) {
        return 0;
    }

    (void)observed_marker;
    return 1;
}
