#ifndef SENIOR_SENATE_ATTORNEY_CONTACT_METHOD_HPP
#define SENIOR_SENATE_ATTORNEY_CONTACT_METHOD_HPP

#include "ContactMethod.h"

namespace senior_senate_attorney {

class ContactMethodModel {
public:
    ContactMethodModel();
    ContactMethodModel(const char *type, const char *value,
                       const char *description);

    const char *type() const noexcept;
    const char *value() const noexcept;
    const char *description() const noexcept;

private:
    ContactMethod value_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_CONTACT_METHOD_HPP */
