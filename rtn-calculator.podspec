require "json"

package = JSON.parse(File.read(File.join(__dir__, "package.json")))

Pod::Spec.new do |s|
  s.name            = "rtn-calculator"
  s.version         = package["version"]
  s.summary         = package["description"]
  s.description     = package["description"]
  s.homepage        = package["homepage"]
  s.license         = package["license"]
  s.platforms       = { :ios => "11.0" }
  s.compiler_flags  = '-Wno-nullability-completeness'
  s.author          = package["author"]
  s.source          = { :git => package["repository"], :tag => "#{s.version}" }

  s.source_files    = ["ios/**/*.{h,cpp,mm}", "tm/**/*.{h,cpp,mm}"]
  s.requires_arc    = true
  s.pod_target_xcconfig = {
    "USE_HEADERMAP" => "YES",
    "CLANG_CXX_LANGUAGE_STANDARD" => "c++20"
  }

  install_modules_dependencies(s)

  s.dependency "ReactCommon/turbomodule/core"

end