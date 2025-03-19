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
