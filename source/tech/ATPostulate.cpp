#include "ATPostulate.hpp"

namespace senior_senate_attorney {

namespace {
constexpr const char kName[] = "AT Postulate";
constexpr const char kDefaultStatement[] =
    "A project postulate represented for technical analysis.";
}

ATPostulateModel::ATPostulateModel()
    : statement_(kDefaultStatement)
{
}

ATPostulateModel::ATPostulateModel(const char *statement)
    : statement_((statement != nullptr && statement[0] != '\0')
                     ? statement
                     : kDefaultStatement)
{
}

const char *ATPostulateModel::name() const noexcept
{
    return kName;
}

const char *ATPostulateModel::statement() const noexcept
{
    return statement_;
}

} // namespace senior_senate_attorney
