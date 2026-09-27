#include "SaneScience.hpp"

namespace senior_senate_attorney {

SaneScienceModel::SaneScienceModel()
{
    value_.evidence_based = 1;
    value_.reproducible = 1;
    value_.falsifiable = 1;
}

SaneScienceModel::SaneScienceModel(bool evidence_based,
                                   bool reproducible,
                                   bool falsifiable)
{
    value_.evidence_based = evidence_based ? 1 : 0;
    value_.reproducible = reproducible ? 1 : 0;
    value_.falsifiable = falsifiable ? 1 : 0;
}

bool SaneScienceModel::evidence_based() const noexcept
{
    return value_.evidence_based != 0;
}

bool SaneScienceModel::reproducible() const noexcept
{
    return value_.reproducible != 0;
}

bool SaneScienceModel::falsifiable() const noexcept
{
    return value_.falsifiable != 0;
}

bool SaneScienceModel::is_sane() const noexcept
{
    return evidence_based() && reproducible() && falsifiable();
}

bool SaneScienceModel::is_reproducible() const noexcept
{
    return reproducible();
}

} // namespace senior_senate_attorney
