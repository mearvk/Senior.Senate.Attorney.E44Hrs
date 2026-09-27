#include "CornOnTheKernel.h"

#include <stddef.h>

static const char CORN_ON_THE_KERNEL_NAME[] = "CornOnTheKernel";
static const char CORN_ON_THE_KERNEL_CATEGORY[] = "Food";
static const char CORN_ON_THE_KERNEL_DESCRIPTION[] =
    "A food glossary object representing a corn kernel.";

void corn_on_the_kernel_init(CornOnTheKernel *object)
{
    if (object == NULL) {
        return;
    }

    object->name = CORN_ON_THE_KERNEL_NAME;
    object->category = CORN_ON_THE_KERNEL_CATEGORY;
    object->description = CORN_ON_THE_KERNEL_DESCRIPTION;
}

const char *corn_on_the_kernel_name(const CornOnTheKernel *object)
{
    if (object == NULL || object->name == NULL) {
        return CORN_ON_THE_KERNEL_NAME;
    }

    return object->name;
}

const char *corn_on_the_kernel_category(const CornOnTheKernel *object)
{
    if (object == NULL || object->category == NULL) {
        return CORN_ON_THE_KERNEL_CATEGORY;
    }

    return object->category;
}

const char *corn_on_the_kernel_description(const CornOnTheKernel *object)
{
    if (object == NULL || object->description == NULL) {
        return CORN_ON_THE_KERNEL_DESCRIPTION;
    }

    return object->description;
}
