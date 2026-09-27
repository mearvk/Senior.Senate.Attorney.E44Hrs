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
