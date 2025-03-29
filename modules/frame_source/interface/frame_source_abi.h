#pragma once
#include <chrono>
#include <exec.hpp>
#include <ptr.hpp>

struct frame_image;
struct frame
{
    ctd::ptr<frame_image> image;
    std::chrono::system_clock::time_point time;
};

struct frame_source_abi
{
    virtual ~frame_source_abi() = default;
    virtual ctd::ptr<frame> get(ctd::exec exec_policy) = 0;
};
