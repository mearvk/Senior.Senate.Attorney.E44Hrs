#ifndef SENIOR_SENATE_ATTORNEY_AMERICAN_SENATE_HPP
#define SENIOR_SENATE_ATTORNEY_AMERICAN_SENATE_HPP

#include "AmericanSenate.h"

namespace senior_senate_attorney {

class AmericanSenateModel {
public:
    AmericanSenateModel();
    explicit AmericanSenateModel(const char *name);

    const char *name() const noexcept;
    const char *country() const noexcept;
    const char *institution() const noexcept;

private:
    AmericanSenate value_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_AMERICAN_SENATE_HPP */
