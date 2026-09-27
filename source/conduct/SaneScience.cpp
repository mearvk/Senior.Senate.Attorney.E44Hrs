#include "SaneScience.hpp"

/*
 * Civic context:
 * This project may describe a "Sane Object or Greater" as an internal
 * software/conduct standard for evidence-based, reproducible, and
 * falsifiable reasoning.
 *
 * In the United States, the Senate is a federal legislative institution
 * with members organized into Democratic and Republican party conferences.
 * The Republican Party is therefore documented here as a political party
 * represented in the Senate, not as an endorsement or instruction to
 * support a party, candidate, or political position.
 *
 * This comment is descriptive civic context only and does not establish
 * that this software represents, speaks for, or is affiliated with the
 * United States Senate or Republican Party.
 */

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
