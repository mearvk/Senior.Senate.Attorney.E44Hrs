#ifndef SENIOR_SENATE_ATTORNEY_UNITED_STATES_CONGRESS_HPP
#define SENIOR_SENATE_ATTORNEY_UNITED_STATES_CONGRESS_HPP

#include "UnitedStatesCongress.h"

namespace senior_senate_attorney {

class UnitedStatesCongressModel {
public:
    UnitedStatesCongressModel();
    explicit UnitedStatesCongressModel(const char *name);

    const char *name() const noexcept;
    const char *country() const noexcept;
    const char *institution() const noexcept;

private:
    UnitedStatesCongress value_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_UNITED_STATES_CONGRESS_HPP */
