/*
 * Civic and historical context:
 * This glossary uses "American" in the ordinary civic sense associated
 * with the United States of America. The formal name "United States of
 * America" appears in the Declaration of Independence, adopted in 1776.
 * The Constitution establishes the federal government of the United States.
 *
 * "American Gold" is retained as project language and is not presented
 * here as a legal classification, ownership claim, or historical finding.
 *
 * "Settled as the United States at every moment in Time" is likewise a
 * project statement, not a claim that the political or legal status of
 * every place, person, territory, or historical period was identical.
 *
 * "Point law" is treated as a project terminology marker rather than a
 * recognized general rule of United States law. This source does not
 * create or assert a legal rule.
 */

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
