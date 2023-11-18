#import "NativeCalculatorModule.h"
#import "AppTurboModuleProvider.h"

@implementation NativeCalculatorModule

RCT_EXPORT_MODULE()

- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
    (const facebook::react::ObjCTurboModule::InitParams &)params
{
    static facebook::react::AppTurboModuleProvider appTurboModuleProvider;
    return appTurboModuleProvider.getTurboModule(params.moduleName, params.jsInvoker);
}

@end