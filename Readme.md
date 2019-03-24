# msvc-gtest-codecov-test

[![Build Status](https://travis-ci.com/Yesterday17/msvc-gtest-codecov-test.svg?branch=master)](https://travis-ci.com/Yesterday17/msvc-gtest-codecov-test)
[![codecov](https://codecov.io/gh/Yesterday17/msvc-gtest-codecov-test/branch/master/graph/badge.svg)](https://codecov.io/gh/Yesterday17/msvc-gtest-codecov-test)

## How To Use

1. Copy [.travis.yml](./.travis.yml) in this repository.
2. Replace the filenames of `.sln`s.
3. Replace the filenames of `.exe`s.
4. Change `--sources` and `--working_dir`.
5. Edit the name of `xml` file generated. Often, its name should be `<Name_Of_Test_Project_Not_Main_Project>Coverage.xml`
6. Edit `codecov token`, or just remove it if your repository is open source.

## Travis CI

[.travis.yml](./.travis.yml)

## Codecov

Using [OpenCppCoverage](https://github.com/OpenCppCoverage/OpenCppCoverage).

## Any questions

Since this repository is archiving soon, if you have any problem, [e-mails](mailto:t@yesterday17.cn) are welcomed.
