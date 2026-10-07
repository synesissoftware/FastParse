# FastParse - FAQ <!-- omit in toc -->

The FAQ list is under (constant) development. If you post a question on the
Issues forum (https://github.com/synesissoftware/FastParse/issues)
it will be used to create one.


## Table of Contents <!-- omit in toc -->

- [Q1: "How do I build FastParse?"](#q1-how-do-i-build-fastparse)
- [Q2: "How do I install FastParse?"](#q2-how-do-i-install-fastparse)
- [Q3: "How do I use FastParse?"](#q3-how-do-i-use-fastparse)
- [Q4: "Does FastParse have its own unit-tests?"](#q4-does-fastparse-have-its-own-unit-tests)
- [Q5: "Where are the examples?"](#q5-where-are-the-examples)


# FAQs: <!-- omit in toc -->


## Q1: "How do I build FastParse?"

See [INSTALL.md](./INSTALL.md) for the recommended **CMake** flow
(**prepare_cmake.sh**, then **build_cmake.sh**).

For a minimal library install with no external dependencies:

```bash
$ ./prepare_cmake.sh --disable-examples --disable-testing -m
```

For a full build including examples and tests, install **STLSoft** 1.11 and
**xTests** first. **p99**, when present, is recognised for performance-test
percentiles; `--no-p99` skips that. Then:

```bash
$ ./prepare_cmake.sh -m
```

Execute `$ ./prepare_cmake.sh --help` for the full set of options.


## Q2: "How do I install FastParse?"

See [INSTALL.md](./INSTALL.md) for details of how to install **FastParse**.


## Q3: "How do I use FastParse?"

Include **fastparse/fastparse.h** and link against **libfastparse** (the
**CMake** target is `FastParse::core`).

A minimal sketch:

```c
#include <fastparse/fastparse.h>

#include <stdio.h>

int main(void)
{
    printf("%s\n", fastparse_getVersionString());

    return 0;
}
```


## Q4: "Does FastParse have its own unit-tests?"

Yes. With **STLSoft** and **xTests** available to **CMake**:

```bash
$ ./prepare_cmake.sh -m
$ ./run_all_unit_tests.sh
```

**run_all_automated_tests.sh** runs the unit tests and then any component
tests. Scratch and performance programs have their own runners and are not
part of that automated aggregate.


## Q5: "Where are the examples?"

Under **examples/**. See the table in [README.md](./README.md). Build them
with the default `BUILD_EXAMPLES=ON` and run **run_all_examples.sh**.


<!-- ########################### end of file ########################### -->
