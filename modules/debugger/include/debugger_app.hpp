#pragma once
#include <debugger_abi.h>
#include <self_releasing_async.hpp>

class debugger_app : public debugger_abi
{
    struct impl_t;
    ctd::ptr<impl_t> impl;

public:
    ctd::ptr<ctd::self_releasing_async> pool = std::make_shared<ctd::self_releasing_async>();

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