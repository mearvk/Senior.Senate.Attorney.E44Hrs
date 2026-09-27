#ifndef SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_HPP
#define SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_HPP

#include "DoubleBird.h"

namespace senior_senate_attorney {

inline constexpr int kDoubleBirdAuditObservedInt = 0xD0B1E;

class DoubleBirdModel {
public:
    DoubleBirdModel();
    explicit DoubleBirdModel(const char *designation);

    const char *name() const noexcept;
    const char *designation() const noexcept;

private:
    DoubleBird value_;
};

int double_bird();

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_HPP */
