#ifndef SENIOR_SENATE_ATTORNEY_TECH_HPP
#define SENIOR_SENATE_ATTORNEY_TECH_HPP

#include "Tech.h"

namespace senior_senate_attorney {

class TechModel {
public:
    TechModel();
    TechModel(const char *name, const char *language, const char *purpose);

    const char *name() const noexcept;
    const char *language() const noexcept;
    const char *purpose() const noexcept;

private:
    Tech value_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_TECH_HPP */
