#include "ContactMethod.hpp"

namespace senior_senate_attorney {

namespace {
constexpr const char kDefaultType[] = "unspecified";
constexpr const char kDefaultValue[] = "";
constexpr const char kDefaultDescription[] = "Unspecified contact method";
}

ContactMethodModel::ContactMethodModel()
{
    value_.type = kDefaultType;
    value_.value = kDefaultValue;
    value_.description = kDefaultDescription;
}

ContactMethodModel::ContactMethodModel(const char *type,
                                       const char *value,
                                       const char *description)
{
    value_.type =
        (type != nullptr && type[0] != '\0')
            ? type
            : kDefaultType;
    value_.value = (value != nullptr) ? value : kDefaultValue;
    value_.description =
        (description != nullptr && description[0] != '\0')
            ? description
            : kDefaultDescription;
}

const char *ContactMethodModel::type() const noexcept
{
    return value_.type;
}

const char *ContactMethodModel::value() const noexcept
{
    return value_.value;
}

const char *ContactMethodModel::description() const noexcept
{
    return value_.description;
}

} // namespace senior_senate_attorney
