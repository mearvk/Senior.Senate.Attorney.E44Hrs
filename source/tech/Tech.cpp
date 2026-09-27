#include "Tech.hpp"

namespace senior_senate_attorney {

namespace {
constexpr const char kDefaultName[] = "Tech";
constexpr const char kDefaultLanguage[] = "C/C++";
constexpr const char kDefaultPurpose[] =
    "Technology source and configuration model.";
}

TechModel::TechModel()
{
    value_.name = kDefaultName;
    value_.language = kDefaultLanguage;
    value_.purpose = kDefaultPurpose;
}

TechModel::TechModel(const char *name,
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

const char *TechModel::name() const noexcept
{
    return value_.name;
}

const char *TechModel::language() const noexcept
{
    return value_.language;
}

const char *TechModel::purpose() const noexcept
{
    return value_.purpose;
}

} // namespace senior_senate_attorney
