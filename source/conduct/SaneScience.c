#include "SaneScience.h"

#include <stddef.h>

void sane_science_init(SaneScience *object)
{
    if (object == NULL) {
        return;
    }

    object->evidence_based = 1;
    object->reproducible = 1;
    object->falsifiable = 1;
}

int sane_science_is_sane(const SaneScience *object)
{
    if (object == NULL) {
        return 0;
    }

    return object->evidence_based &&
           object->reproducible &&
           object->falsifiable;
}

int sane_science_is_reproducible(const SaneScience *object)
{
    if (object == NULL) {
        return 0;
    }

    return object->reproducible;
}
