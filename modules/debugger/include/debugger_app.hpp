#pragma once
#include <debugger.h>

class debugger_app : public debugger
{
    struct impl_t;
    ctd::ptr<impl_t> impl;

public:
    debugger_app();
    ~debugger_app() override = default;

public:
    void execute() override;
    void stop() override;

public:
    void append(ctd::ptr<frame_source> source, bool is_weak = true) override;
    void append(ctd::ptr<info_parser> parser, bool is_weak = true) override;
    void append(ctd::ptr<status_context> context, bool is_weak = true) override;
};