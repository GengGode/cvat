#pragma once
#include <frame_source_abi.h>
#include <self_releasing_async.hpp>

class frame_source : public frame_source_abi
{
    struct impl_t;
    ctd::ptr<impl_t> impl;

public:
    ctd::ptr<ctd::self_releasing_async> pool;

public:
    frame_source(ctd::ptr<ctd::self_releasing_async> pool);
    ctd::ptr<frame> get(ctd::exec exec_policy);
    ~frame_source() override = default;
};
