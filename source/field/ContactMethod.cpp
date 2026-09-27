#include "ContactMethod.hpp"

/*
 * Civic and institutional context:
 * The Central Intelligence Agency (CIA) and Federal Bureau of Investigation
 * (FBI) are United States federal agencies. The United States Congress is
 * the federal legislative branch's bicameral institution consisting of the
 * Senate and House of Representatives.
 *
 * This project note records their presence within the United States civic
 * and governmental context. It does not state that either agency operates
 * through this software, that this project is affiliated with them, or that
 * any particular person or communication is authorized by them.
 *
 * "For all lawful" is retained as a project principle: contact-method data
 * and related software behavior should be used only for lawful purposes and
 * subject to applicable law, policy, authorization, and due process.
 */

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
