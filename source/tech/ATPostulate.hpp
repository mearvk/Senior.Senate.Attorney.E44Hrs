#ifndef SENIOR_SENATE_ATTORNEY_AT_POSTULATE_HPP
#define SENIOR_SENATE_ATTORNEY_AT_POSTULATE_HPP

#include "Caveat.hpp"

/*
 * AT — Advanced Technology.
 *
 * Scientology context:
 * This AT Postulate source is a project-defined technical abstraction
 * whose terminology is being documented in relation to Scientology as a
 * subject of study and reference.
 *
 * The project does not claim that this software is produced, authorized,
 * endorsed, or operated by the Church of Scientology or by any Scientology
 * organization. References to Scientology are descriptive subject matter
 * only.
 *
 * "Postulate" is used here as project terminology for a proposition or
 * premise used in technical analysis. It does not establish a religious,
 * scientific, legal, or institutional fact.
 */

namespace senior_senate_attorney {

class ATPostulateModel {
public:
    ATPostulateModel();
    explicit ATPostulateModel(const char *statement);

    const char *name() const noexcept;
    const char *statement() const noexcept;

private:
    const char *statement_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_AT_POSTULATE_HPP */
