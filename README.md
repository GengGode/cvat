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
