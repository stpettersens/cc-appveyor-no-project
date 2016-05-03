#### very-simple-program

This is really just a point of reference on using Microsoft's C/C++ compiler (via command line) on Appveyor.

```yaml
environment:
  matrix:
    - compiler: cl.exe

install:
  - '"C:\Program Files\Microsoft SDKs\Windows\v7.1\Bin\SetEnv.cmd" /x64'
  - $env:compiler /EHsc path.cc

test_script:
  - path.exe

build: off

version: "{build}"
```
