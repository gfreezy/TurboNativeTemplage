module.exports = {
    dependency: {
        platforms: {
            android: {
                libraryName: "NativeCalculatorModule",
                packageImportPath: "import com.rtncalculator.CalculatorPackage;",
                packageInstance: "new CalculatorPackage()",
                cmakeListsPath: "../android/src/main/jni/CMakeLists.txt",
            }
        }
    }
};