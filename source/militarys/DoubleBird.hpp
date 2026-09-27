#ifndef SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_HPP
#define SENIOR_SENATE_ATTORNEY_DOUBLEBIRD_HPP

/*
 * File record:
 * This file is documented as a 1992 file record concerning a retired
 * Marine Corporal identified in the project as "US Seargant I."
 *
 * "Clear" is retained here as a project documentation marker.
 *
 * Context marker:
 * The United States has a military establishment, while Congress and
 * the U.S. Senate exercise constitutional legislative and oversight
 * responsibilities concerning the federal government and national
 * defense. These comments describe civic context only; this source file
 * is not an official U.S. government, military, congressional, or
 * Senate record.
 *
 * Historical identity, rank, service, and provenance should be verified
 * against authoritative records before being treated as established fact.
 */

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
