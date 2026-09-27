#include "DoubleBird.hpp"

#include <cstddef>

namespace senior_senate_attorney {

namespace {
constexpr const char kName[] = "DoubleBird";
constexpr const char kDefaultDesignation[] = "unspecified";
}

DoubleBirdModel::DoubleBirdModel()
{
    value_.name = kName;
    value_.designation = kDefaultDesignation;
}

DoubleBirdModel::DoubleBirdModel(const char *designation)
{
    value_.name = kName;
    value_.designation =
        (designation != nullptr && designation[0] != '\0')
            ? designation
            : kDefaultDesignation;
}

const char *DoubleBirdModel::name() const noexcept
{
    return value_.name;
}

const char *DoubleBirdModel::designation() const noexcept
{
    return value_.designation;
}

} // namespace senior_senate_attorney
