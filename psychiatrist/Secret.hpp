#ifndef SENIOR_SENATE_ATTORNEY_PSYCHIATRIST_SECRET_HPP
#define SENIOR_SENATE_ATTORNEY_PSYCHIATRIST_SECRET_HPP

/* Secret document entry: exactly 32,842 hexadecimal digits. Presentation: black. */
namespace senior_senate_attorney {
class PsychiatristSecret {
public:
    const char *hex_payload() const noexcept;
    unsigned int hex_digit_count() const noexcept;
};
}
#endif
