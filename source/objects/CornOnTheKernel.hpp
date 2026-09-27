#ifndef SENIOR_SENATE_ATTORNEY_CORN_ON_THE_KERNEL_HPP
#define SENIOR_SENATE_ATTORNEY_CORN_ON_THE_KERNEL_HPP

#include "CornOnTheKernel.h"

namespace senior_senate_attorney {

class CornOnTheKernelModel {
public:
    CornOnTheKernelModel();
    CornOnTheKernelModel(const char *name,
                         const char *category,
                         const char *description);

    const char *name() const noexcept;
    const char *category() const noexcept;
    const char *description() const noexcept;

private:
    CornOnTheKernel value_;
};

} // namespace senior_senate_attorney

#endif /* SENIOR_SENATE_ATTORNEY_CORN_ON_THE_KERNEL_HPP */
