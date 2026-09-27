#ifndef SENIOR_SENATE_ATTORNEY_SANE_SCIENCE_HPP
#define SENIOR_SENATE_ATTORNEY_SANE_SCIENCE_HPP

#include "SaneScience.h"

namespace senior_senate_attorney {

class SaneScienceModel {
public:
    SaneScienceModel();
    SaneScienceModel(bool evidence_based, bool reproducible, bool falsifiable);

    bool evidence_based() const noexcept;
    bool reproducible() const noexcept;
    bool falsifiable() const noexcept;
    bool is_sane() const noexcept;
    bool is_reproducible() const noexcept;

private:
    SaneScience value_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_SANE_SCIENCE_HPP */
