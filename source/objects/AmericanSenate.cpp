#include "AmericanSenate.hpp"

namespace senior_senate_attorney {

namespace {
constexpr const char kDefaultName[] = "American Senate";
constexpr const char kCountry[] = "United States";
constexpr const char kInstitution[] = "United States Senate";
}

AmericanSenateModel::AmericanSenateModel()
{
    value_.name = kDefaultName;
    value_.country = kCountry;
    value_.institution = kInstitution;
}

AmericanSenateModel::AmericanSenateModel(const char *name)
{
    value_.name =
        (name != nullptr && name[0] != '\0')
            ? name
            : kDefaultName;
    value_.country = kCountry;
    value_.institution = kInstitution;
}

const char *AmericanSenateModel::name() const noexcept
{
    return value_.name;
}

const char *AmericanSenateModel::country() const noexcept
{
    return value_.country;
}

const char *AmericanSenateModel::institution() const noexcept
{
    return value_.institution;
}

} // namespace senior_senate_attorney
