# cvat

refactored from [GenshinImpactAutoTrack](https://github.com/GengGode/cvAutoTrack) 

## Usage

1. Set Environment Variable `VCPKG_ROOT` to the path of vcpkg directory.
```shell
$env:VCPKG_ROOT="C:\vcpkg"
```

2. Cmake configure and build
```shell
cmake -B build && cmake --build build
```

3. Run the executable
```shell
.\build\bin\Release\cvat.exe
```

## Dependencies

- OpenCV
- ImGui
- Fmt
- Spdlog

## Using GitHub Codespaces

1. Open the repository in GitHub Codespaces.
2. Codespaces will automatically set up the development environment.
3. CMake configure and build
```shell
cmake -B build && cmake --build build
```
4. Run the executable
```shell
.\build\bin\Release\cvat.exe
```

## GitHub Actions Workflows

This repository includes GitHub Actions workflows for building and testing the project.

### Build and Release Workflow

The `build.yml` workflow is triggered on pushes and pull requests to the `master` branch. It performs the following steps:

1. Checks out the code.
2. Sets up the vcpkg environment.
3. Configures and builds the project using CMake.
4. Packages the build artifacts.
5. Uploads the build artifacts as a GitHub Release.

### Test Workflow

The `test.yml` workflow is triggered on pushes and pull requests to the `master` branch. It performs the following steps:

1. Checks out the code.
2. Sets up the vcpkg environment.
3. Configures and builds the project using CMake.
4. Runs the tests.
5. Uploads the test results as artifacts.

To use these workflows, simply push your changes to the `master` branch or create a pull request targeting the `master` branch. The workflows will be automatically triggered, and you can monitor their progress in the Actions tab of your repository.
