# Minimum app to reproduce the module errors.

## Errors

```
SwiftCompile normal arm64 /Users/asamidoi/swift-cplusplus-interop/swift-cplusplus-interop/ContentView.swift (in target 'swift-cplusplus-interop' from project 'swift-cplusplus-interop')
    cd /Users/asamidoi/swift-cplusplus-interop
    

/Users/asamidoi/bling/src/third_party/libc++/src/include/stdexcept:129:34: error: 'std::domain_error::domain_error' from module 'forestLib2' is not present in definition of 'std::domain_error' in module 'forestLib'
  _LIBCPP_HIDE_FROM_ABI explicit domain_error(const string& __s) : logic_error(__s) {}
                                 ^
/Users/asamidoi/bling/src/third_party/libc++/src/include/stdexcept:129:34: note: declaration of 'domain_error' does not match
  _LIBCPP_HIDE_FROM_ABI explicit domain_error(const string& __s) : logic_error(__s) {}
                                 ^
/Users/asamidoi/bling/src/third_party/libc++/src/include/stdexcept:130:34: note: declaration of 'domain_error' does not match
  _LIBCPP_HIDE_FROM_ABI explicit domain_error(const char* __s) : logic_error(__s) {}
                                 ^
/Users/asamidoi/bling/src/third_party/libc++/src/include/stdexcept:133:25: note: declaration of 'domain_error' does not match
  _LIBCPP_HIDE_FROM_ABI domain_error(const domain_error&) _NOEXCEPT            = default;
                        ^
/Users/asamidoi/bling/src/third_party/libc++/src/include/stdexcept:141:34: error: 'std::invalid_argument::invalid_argument' from module 'forestLib2' is not present in definition of 'std::invalid_argument' in module 'forestLib'
  _LIBCPP_HIDE_FROM_ABI explicit invalid_argument(const string& __s) : logic_error(__s) {}
                                 ^
/Users/asamidoi/bling/src/third_party/libc++/src/include/stdexcept:141:34: note: declaration of 'invalid_argument' does not match
  _LIBCPP_HIDE_FROM_ABI explicit invalid_argument(const string& __s) : logic_error(__s) {}
                                 ^
/Users/asamidoi/bling/src/third_party/libc++/src/include/stdexcept:142:34: note: declaration of 'invalid_argument' does not match
  _LIBCPP_HIDE_FROM_ABI explicit invalid_argument(const char* __s) : logic_error(__s) {}
                                 ^
/Users/asamidoi/bling/src/third_party/libc++/src/include/stdexcept:145:25: note: declaration of 'invalid_argument' does not match
  _LIBCPP_HIDE_FROM_ABI invalid_argument(const invalid_argument&) _NOEXCEPT            = default;
```

## Steps to reproduce

1. Close this repository
2. Pull the source code for Chromium: https://chromium.googlesource.com/chromium/src/+/main/docs/ios/build_instructions.md
3. Update the pathes in `project.pbxproj` from /Users/asamidoi/bling/src to the path where the Chromium source code exists
4. You may need to clear caches by `rm -rf ~/Library/Developer/Xcode/DerivedData/*`
5. Build the app. You will see the above error messages
