#ifndef SENIOR_SENATE_ATTORNEY_TECH_SETUP_HPP
#define SENIOR_SENATE_ATTORNEY_TECH_SETUP_HPP

#include "TechSetup.h"

namespace senior_senate_attorney {

class TechSetupModel {
public:
    TechSetupModel();
    TechSetupModel(const char *name, const char *language,
                   const char *purpose);

    const char *name() const noexcept;
    const char *language() const noexcept;
    const char *purpose() const noexcept;

private:
    TechSetup value_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_TECH_SETUP_HPP */
