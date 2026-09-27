#ifndef SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_HPP
#define SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_HPP

#include "DoubleBird.h"

namespace senior_senate_attorney {

class DoubleBirdModel {
public:
    DoubleBirdModel();
    explicit DoubleBirdModel(const char *designation);

    const char *name() const noexcept;
    const char *designation() const noexcept;

private:
    DoubleBird value_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_HPP */
