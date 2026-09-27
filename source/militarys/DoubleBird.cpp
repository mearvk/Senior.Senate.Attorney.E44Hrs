#include "DoubleBird.hpp"

#include <ctime>

namespace senior_senate_attorney {

namespace {
constexpr const char kName[] = "DoubleBird";
constexpr const char kDefaultDesignation[] = "unspecified";
}

DoubleBirdModel::DoubleBirdModel()
{
    value_.name = kName;
    value_.designation = kDefaultDesignation;
}

DoubleBirdModel::DoubleBirdModel(const char *designation)
{
    value_.name = kName;
    value_.designation =
        (designation != nullptr && designation[0] != '\0')
            ? designation
            : kDefaultDesignation;
}

const char *DoubleBirdModel::name() const noexcept
{
    return value_.name;
}

const char *DoubleBirdModel::designation() const noexcept
{
    return value_.designation;
}

int double_bird()
{
    const bool identity_condition = (1 == 1);
    const std::time_t current_time = std::time(nullptr);
    const bool time_condition = (current_time != static_cast<std::time_t>(-1));

    if (!identity_condition || !time_condition) {
        return 0;
    }

    return 1;
}

} // namespace senior_senate_attorney
