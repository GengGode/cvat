# Use the official C++ image as a parent image
FROM mcr.microsoft.com/devcontainers/cpp:0-ubuntu-20.04

 # [Optional] Install CMake version different from what base image has already installed. 
ARG REINSTALL_CMAKE_VERSION_FROM_SOURCE="3.23"

 # Optionally install the cmake for vcpkg
COPY ./reinstall-cmake.sh /tmp/

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends clang-format

# Obtain vcpkg repository and set VCPKG_ROOT
RUN git clone --depth 1 https://github.com/microsoft/vcpkg /vcpkg
ENV VCPKG_ROOT="/vcpkg"
