# FastParse <!-- omit in toc -->

Small standalone C library of efficient parsing utilities, for Unix and Windows.


![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)
[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![GitHub release](https://img.shields.io/github/v/release/synesissoftware/FastParse.svg)](https://github.com/synesissoftware/FastParse/releases/latest)
[![Last Commit](https://img.shields.io/github/last-commit/synesissoftware/FastParse)](https://github.com/synesissoftware/FastParse/commits/master)
[![CI](https://github.com/synesissoftware/FastParse/actions/workflows/ci.yml/badge.svg)](https://github.com/synesissoftware/FastParse/actions/workflows/ci.yml)


## Table of Contents <!-- omit in toc -->

- [Introduction](#introduction)
- [Installation](#installation)
- [Components](#components)
- [Examples](#examples)
- [Project Information](#project-information)
  - [Where to get help](#where-to-get-help)
  - [Contribution guidelines](#contribution-guidelines)
  - [Dependencies](#dependencies)
  - [Related projects](#related-projects)
  - [License](#license)


## Introduction

**FastParse** will provide efficient parsing utilities for C. This first cut publishes the build, the installable CMake package `FastParse`, and the version contract. The parsing API is not yet defined.

The **C** API has no non-standard dependencies. Building tests requires **STLSoft** and **xTests** (and may optionally recognise **p99** and **shwild**).


## Installation

Detailed instructions — via **CMake**, via bundling — are provided in the accompanying [INSTALL.md](./INSTALL.md) file.


## Components

The C API is defined in **fastparse/fastparse.h**.

* `FASTPARSE_VER` — the composite library version;
* `FASTPARSE_VER_STRING` — that version as a NUL-terminated string (`"0.1.0-alpha1"`);
* `fastparse_getVersionString()` — returns `FASTPARSE_VER_STRING`;


## Examples

Examples live under **examples/** (`c/`). The directory is the subject; the built program is `example.<lang>.<subject>`. Each has a short **README.md**. Build them with `BUILD_EXAMPLES` (on by default); run via **run_all_examples.sh**.

| Example | Language | Notes |
| ------- | -------- | ----- |
| [**example.c.fastparse**](./examples/c/fastparse/) | C | Prints `fastparse_getVersionString()` |


## Project Information


### Where to get help

* [GitHub Page](https://github.com/synesissoftware/FastParse)
* [GitHub Issues](https://github.com/synesissoftware/FastParse/issues)
* [FAQ.md](./FAQ.md)
* [HOW_YOU_CAN_HELP.md](./HOW_YOU_CAN_HELP.md)


### Contribution guidelines

Defect reports, feature requests, and pull requests are welcome on https://github.com/synesissoftware/FastParse.

See also [HOW_YOU_CAN_HELP.md](./HOW_YOU_CAN_HELP.md).


### Dependencies

The **C** API has no non-standard dependencies.

| Dependency | Role | Required? |
| ---------- | ---- | --------- |
| [**STLSoft**](https://github.com/synesissoftware/STLSoft) 1.11 | Test headers | ⚪ Tests only (`BUILD_TESTING`) |
| [**xTests**](https://github.com/synesissoftware/xTests) (≥ 0.26) | Unit and scratch tests | ⚪ Tests only (`BUILD_TESTING`) |
| [**p99**](https://github.com/synesissoftware/p99) | Percentiles in performance tests | ⚪ Optional; tests only (unless `NO_P99` / `--no-p99`) |
| [**shwild**](https://github.com/synesissoftware/shwild) | Enhanced pattern-match assertions in **xTests** | ⚪ Optional; tests only (unless `NO_SHWILD` / `--no-shwild`) |

When supplying `'--no-p99'` — sets `NO_P99=ON` — **p99** is not recognised; performance tests still build but omit percentiles.

When supplying `'--no-shwild'` — sets `NO_SHWILD=ON` — **shwild** is not recognised and pattern-match assertions are compiled out; other unit-tests still run.


### Related projects

| Project | Use |
| ------- | --- |
| [**cstring**](https://github.com/synesissoftware/cstring) | Boilerplate exemplar for this library |
| [**FastParse.Rust**](https://github.com/synesissoftware/FastParse.Rust) | Parsing utilities for Rust |


### License

**FastParse** is released under the 3-clause BSD license. See [LICENSE](./LICENSE) for details.


<!-- ########################### end of file ########################### -->
