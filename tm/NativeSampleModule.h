#pragma once

#include <memory>
#include <string>

#include <ReactCommon/TurboModule.h>

namespace facebook::react
{

    class NativeSampleModule : public TurboModule
    {
    public:
        NativeSampleModule(std::shared_ptr<CallInvoker> jsInvoker);
    };

} // namespace facebook::react