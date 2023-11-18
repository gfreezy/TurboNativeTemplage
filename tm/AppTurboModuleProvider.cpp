#include "AppTurboModuleProvider.h"
#include "NativeSampleModule.h"

namespace facebook::react
{
    std::shared_ptr<TurboModule> AppTurboModuleProvider::getTurboModule(
        const std::string &name,
        std::shared_ptr<CallInvoker> jsInvoker) const
    {
        if (name == "NativeCalculatorModule")
        {
            return std::make_shared<facebook::react::NativeSampleModule>(jsInvoker);
        }
        // Other C++ Turbo Native Modules for you app
        return nullptr;
    }

} // namespace facebook::react