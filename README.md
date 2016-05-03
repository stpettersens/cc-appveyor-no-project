#### cc-appveyor-no-project

This is really just a point of reference on using Microsoft's C/C++ compiler (rather than via Visual C++ Project) 
to compile source code on Appveyor.

```yaml
install:
  - '"C:\Program Files\Microsoft SDKs\Windows\v7.1\Bin\SetEnv.cmd" /x64'
  - cl.exe /EHsc path.cc

test_script:
  - path.exe

build: off
```
