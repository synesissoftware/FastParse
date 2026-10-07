# FastParse - Installation and Use <!-- omit in toc -->

**FastParse** is a classic-form C library, insofar as it has implementation
files in its **src** directory and header files in its **include/fastparse**
directory. Thus, once "installed", one must simply include
**fastparse/fastparse.h** and compile-in or link-in the implementation.

The **C** API has no non-standard dependencies. Building the project's tests
additionally requires **STLSoft** and **xTests** (and optionally recognises
**p99** for performance percentiles and **shwild** for enhanced xTests
match constructs).


## Table of Contents <!-- omit in toc -->

- [CMake](#cmake)
- [Bundled](#bundled)


## CMake

The primary choice for installation is by use of **CMake**.

1. Obtain the latest distribution of **FastParse**, from
   https://github.com/synesissoftware/FastParse/, e.g.

   ```bash
   $ mkdir -p ~/open-source
   $ cd ~/open-source
   $ git clone https://github.com/synesissoftware/FastParse/
   ```

2. Prepare the CMake configuration, via the **prepare_cmake.sh** script.

   For a minimal library install (no **STLSoft** / **xTests** required):

   ```bash
   $ cd ~/open-source/FastParse
   $ ./prepare_cmake.sh --disable-examples --disable-testing -v
   ```

   For a full build including examples and tests, install **STLSoft** 1.11
   (and **xTests** for tests) via their own **CMake** scripts first, then:

   ```bash
   $ cd ~/open-source/FastParse
   $ ./prepare_cmake.sh -v
   ```

   Useful optional flags:

   * `--no-p99` — do not recognise **p99** (`NO_P99`);
   * `--no-shwild` — do not recognise **shwild** (`NO_SHWILD`);
   * `--disable-examples` / `-E` — omit examples (`BUILD_EXAMPLES=OFF`);
   * `--disable-testing` / `-T` — omit tests (`BUILD_TESTING=OFF`);
   * `--stlsoft-root-dir` / `-s` — pass an **STLSoft** source-tree root when
     it is not available as an installed **CMake** package;

   (**Hint**: execute `$ ./prepare_cmake.sh --help` for more information.)

3. Run a build of the generated **CMake**-derived build files via the
   **build_cmake.sh** script, as in:

   ```bash
   $ ./build_cmake.sh
   ```

   (**NOTE**: if you provide the flag `--run-make` (=== `-m`) in step 2 then
   you do not need this step.)

4. As a check (when testing was not disabled), execute the built unit-test
   programs via **run_all_unit_tests.sh**, as in:

   ```bash
   $ ./run_all_unit_tests.sh
   ```

   Component, scratch, and performance suites have matching runners
   (**run_all_component_tests.sh**, **run_all_scratch_tests.sh**,
   **run_all_performance_tests.sh**); **run_all_automated_tests.sh**
   aggregates the automated categories. Examples (when enabled) may be
   exercised via **run_all_examples.sh**. Windows hosts have native
   **`.cmd`** counterparts.

5. Install the library on the host, via `cmake`, as in:

   ```bash
   $ sudo cmake --install ${SIS_CMAKE_BUILD_DIR:-./_build} --config Release
   ```

6. Then to use the library, it is a simple matter as follows:

   1. Assuming a simplest possible program to verify the installation:

      ```c
      /* main.c */
      #include <fastparse/fastparse.h>

      #include <stdio.h>

      int main(void)
      {
          printf("%s\n", fastparse_getVersionString());

          return 0;
      }
      ```

   2. Compile your project against **FastParse**:

      Due to the installation step (step 5 above) there is no requirement
      for an explicit include directory for **FastParse**:

      ```bash
      $ cc -c main.c
      ```

   3. Link your project against **FastParse**:

      Due to the installation step (step 5 above) there is no requirement
      for an explicit library directory for **FastParse**:

      ```bash
      $ cc main.o -lfastparse
      ```

   4. Test your project:

      ```bash
      $ ./a.out
      0.1.0-alpha1
      $
      ```

   Consumers that use **CMake** may instead depend on the installed package:

   ```cmake
   find_package(FastParse REQUIRED)
   target_link_libraries(your_target PRIVATE FastParse::core)
   ```


## Bundled

**FastParse** is small enough that it may be bundled into other projects.
In that case:

* add **FastParse**'s **include** directory to your project's include path;
* compile **src/fastparse.core.c** into your build (or link a previously
  built **libfastparse**); and
* `#include <fastparse/fastparse.h>`.


<!-- ########################### end of file ########################### -->
