#pragma once
#include <exec.hpp>
#include <ptr.hpp>

struct frame_source;
struct info_parser;
struct status_context;

struct debugger
{
    virtual ~debugger() = default;

    virtual void execute() = 0;
    virtual void stop() = 0;

    virtual void append(ctd::ptr<frame_source> source, bool is_weak = true) = 0;
    virtual void append(ctd::ptr<info_parser> parser, bool is_weak = true) = 0;
    virtual void append(ctd::ptr<status_context> context, bool is_weak = true) = 0;
};
