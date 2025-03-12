#include "app_impl.hpp"
#include <debugger_app.hpp>

#include <future>
#include <iostream>

debugger_app::debugger_app() : impl(std::make_shared<impl_t>())
{
    impl->imgui = std::make_unique<imgui_context>();
    impl->imgui->init();
    std::cout << "debugger_app" << std::endl;
}
void debugger_app::execute()
{
    std::cout << "execute" << std::endl;
    impl->imgui->create();
    impl->imgui->render();
    impl->imgui->destroy();
}

void debugger_app::stop()
{
    impl->imgui->is_running = false;
    std::cout << "stop" << std::endl;
}

void debugger_app::append(ctd::ptr<frame_source> source, bool is_weak)
{
    std::cout << "append frame_source" << std::endl;
}

void debugger_app::append(ctd::ptr<info_parser> parser, bool is_weak)
{
    std::cout << "append info_parser" << std::endl;
}

void debugger_app::append(ctd::ptr<status_context> context, bool is_weak)
{
    std::cout << "append status_context" << std::endl;
}
