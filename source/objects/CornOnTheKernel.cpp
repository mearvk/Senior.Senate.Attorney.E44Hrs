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

#include "CornOnTheKernel.hpp"

namespace senior_senate_attorney {

namespace {
constexpr const char kDefaultName[] = "CornOnTheKernel";
constexpr const char kCategory[] = "Food";
constexpr const char kDefaultDescription[] =
    "A food glossary object representing a corn kernel.";
}

CornOnTheKernelModel::CornOnTheKernelModel()
{
    value_.name = kDefaultName;
    value_.category = kCategory;
    value_.description = kDefaultDescription;
}

CornOnTheKernelModel::CornOnTheKernelModel(const char *name,
                                           const char *category,
                                           const char *description)
{
    value_.name =
        (name != nullptr && name[0] != '\0')
            ? name
            : kDefaultName;
    value_.category =
        (category != nullptr && category[0] != '\0')
            ? category
            : kCategory;
    value_.description =
        (description != nullptr && description[0] != '\0')
            ? description
            : kDefaultDescription;
}

const char *CornOnTheKernelModel::name() const noexcept
{
    return value_.name;
}

const char *CornOnTheKernelModel::category() const noexcept
{
    return value_.category;
}

const char *CornOnTheKernelModel::description() const noexcept
{
    return value_.description;
}

} // namespace senior_senate_attorney
