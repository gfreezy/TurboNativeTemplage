#include "NativeSampleModule.h"

namespace facebook::react
{
    static jsi::Value reverseString(
        jsi::Runtime &rt,
        TurboModule &turboModule,
        const jsi::Value *args,
        size_t count)
    {
        std::string str = args[0].getString(rt).utf8(rt);
        std::reverse(str.begin(), str.end());
        return jsi::String::createFromUtf8(rt, str);
    }

    NativeSampleModule::NativeSampleModule(
        std::shared_ptr<CallInvoker> jsInvoker)
        : TurboModule("NativeCalculatorModule", jsInvoker)
    {
        methodMap_["reverseString"] = MethodMetadata{
            1, reverseString};
    }

} // namespace facebook::react