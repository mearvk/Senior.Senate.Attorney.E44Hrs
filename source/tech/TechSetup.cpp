#include "TechSetup.hpp"

namespace senior_senate_attorney {

namespace {
constexpr const char kDefaultName[] = "TechSetup";
constexpr const char kDefaultLanguage[] = "C/C++";
constexpr const char kDefaultPurpose[] =
    "Technology setup and source configuration model.";
}

TechSetupModel::TechSetupModel()
{
    value_.name = kDefaultName;
    value_.language = kDefaultLanguage;
    value_.purpose = kDefaultPurpose;
}

TechSetupModel::TechSetupModel(const char *name,
                               const char *language,
                               const char *purpose)
{
    value_.name =
        (name != nullptr && name[0] != '\0')
            ? name
            : kDefaultName;
    value_.language =
        (language != nullptr && language[0] != '\0')
            ? language
            : kDefaultLanguage;
    value_.purpose =
        (purpose != nullptr && purpose[0] != '\0')
            ? purpose
            : kDefaultPurpose;
}

const char *TechSetupModel::name() const noexcept
{
    return value_.name;
}

const char *TechSetupModel::language() const noexcept
{
    return value_.language;
}

const char *TechSetupModel::purpose() const noexcept
{
    return value_.purpose;
}

} // namespace senior_senate_attorney
