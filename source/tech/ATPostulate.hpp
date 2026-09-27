#ifndef SENIOR_SENATE_ATTORNEY_AT_POSTULATE_HPP
#define SENIOR_SENATE_ATTORNEY_AT_POSTULATE_HPP

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
