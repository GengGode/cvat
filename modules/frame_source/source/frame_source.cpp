#include <frame_source.hpp>

struct frame_source::impl_t
{
    ctd::ptr<ctd::self_releasing_async> pool;
};

frame_source::frame_source(ctd::ptr<ctd::self_releasing_async> pool)
{
    impl = std::make_shared<impl_t>();
    impl->pool = pool;
}

ctd::ptr<frame> frame_source::get(ctd::exec exec_policy)
{
    return {};
}
