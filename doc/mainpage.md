# FastParse {#mainpage}

**FastParse** is a small, standalone library of efficient parsing utilities, for Unix and Windows. This release publishes the version contract. The parsing API is not yet defined.


## Components

| Module | Header | Summary |
| ------ | ------ | ------- |
| @ref group__fastparse_api | `<fastparse/fastparse.h>` | Version contract (`FASTPARSE_VER`, `fastparse_getVersionString()`) |


## Quick start

```c
#include <fastparse/fastparse.h>

#include <stdio.h>

int main(void)
{
    printf("%s\n", fastparse_getVersionString());

    return 0;
}
```

Consumer **CMake** projects may use `find_package(FastParse)` and link
`FastParse::core`. See
[INSTALL.md](https://github.com/synesissoftware/FastParse/blob/master/INSTALL.md)
for build and install instructions.


## Related projects

| Project | Use |
| ------- | --- |
| [FastParse.Rust](https://github.com/synesissoftware/FastParse.Rust) | Rust parsing utilities in the same family |
| [cstring](https://github.com/synesissoftware/cstring) | Boilerplate exemplar for this C library |


<!-- ########################### end of file ########################### -->
