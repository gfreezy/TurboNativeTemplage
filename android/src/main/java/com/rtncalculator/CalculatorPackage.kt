package com.rtncalculator;

import com.facebook.react.TurboReactPackage
import com.facebook.react.bridge.NativeModule
import com.facebook.react.bridge.ReactApplicationContext
import com.facebook.react.module.model.ReactModuleInfo
import com.facebook.react.module.model.ReactModuleInfoProvider
import com.facebook.react.turbomodule.core.interfaces.TurboModule

class CalculatorPackage : TurboReactPackage() {

    companion object {
        const val Name = "NativeCalculatorModule"
    }

    override fun getModule(name: String?, reactContext: ReactApplicationContext): NativeModule {
        return object : TurboModule, NativeModule {
            override fun getName(): String = Name

            override fun initialize() {}

            override fun invalidate() {}

            override fun canOverrideExistingModule(): Boolean = false

            @Deprecated("Deprecated in Java")
            override fun onCatalystInstanceDestroy() {}
        }
    }

    override fun getReactModuleInfoProvider(): ReactModuleInfoProvider = ReactModuleInfoProvider {
        mapOf(
            Name to ReactModuleInfo(
                Name,
                Name,
                false, // canOverrideExistingModule
                false, // needsEagerInit
                true, // hasConstants
                false, // isCxxModule
                true // isTurboModule
            )
        )
    }
}