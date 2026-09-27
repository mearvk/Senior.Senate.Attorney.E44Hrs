#ifndef SENIOR_SENATE_ATTORNEY_CORN_ON_THE_KERNEL_H
#define SENIOR_SENATE_ATTORNEY_CORN_ON_THE_KERNEL_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CornOnTheKernel {
    const char *name;
    const char *category;
    const char *description;
} CornOnTheKernel;

void corn_on_the_kernel_init(CornOnTheKernel *object);
const char *corn_on_the_kernel_name(const CornOnTheKernel *object);
const char *corn_on_the_kernel_category(const CornOnTheKernel *object);
const char *corn_on_the_kernel_description(const CornOnTheKernel *object);

#ifdef __cplusplus
}
#endif

#endif /* SENIOR_SENATE_ATTORNEY_CORN_ON_THE_KERNEL_H */
