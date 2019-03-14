@echo off

OpenCppCoverage --sources=".\msvc-gtest-codecov-test" --working_dir=".\test" --excluded_sources=".\packages" --export_type=cobertura -- ".\x64\Debug\GoogleTest.exe"