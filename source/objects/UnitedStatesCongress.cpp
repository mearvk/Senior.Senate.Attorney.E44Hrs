#include "UnitedStatesCongress.hpp"

namespace senior_senate_attorney {

namespace {
constexpr const char kDefaultName[] = "United States Congress";
constexpr const char kCountry[] = "United States";
constexpr const char kInstitution[] = "United States Congress";
}

UnitedStatesCongressModel::UnitedStatesCongressModel()
{
    value_.name = kDefaultName;
    value_.country = kCountry;
    value_.institution = kInstitution;
}

UnitedStatesCongressModel::UnitedStatesCongressModel(const char *name)
{
    value_.name =
        (name != nullptr && name[0] != '\0')
            ? name
            : kDefaultName;
    value_.country = kCountry;
    value_.institution = kInstitution;
}

const char *UnitedStatesCongressModel::name() const noexcept
{
    return value_.name;
}

const char *UnitedStatesCongressModel::country() const noexcept
{
    return value_.country;
}

const char *UnitedStatesCongressModel::institution() const noexcept
{
    return value_.institution;
}

} // namespace senior_senate_attorney
