#!/bin/bash

# Set the CMake version to install
CMAKE_VERSION=3.23

# Download and extract the CMake source code
wget https://github.com/Kitware/CMake/releases/download/v${CMAKE_VERSION}/cmake-${CMAKE_VERSION}.tar.gz
tar -zxvf cmake-${CMAKE_VERSION}.tar.gz
cd cmake-${CMAKE_VERSION}

# Build and install CMake
./bootstrap
make -j$(nproc)
make install
