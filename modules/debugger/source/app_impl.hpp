#pragma once
#include "debugger_app.hpp"
#include <atomic>
#include <future>
#include <vector>

struct imgui_context;
struct debugger_app::impl_t
{
    std::vector<ctd::ptr<frame_source>> sources;
    std::vector<ctd::ptr<info_parser>> parsers;
    std::vector<ctd::ptr<status_context>> contexts;

    std::unique_ptr<imgui_context> imgui;
};

struct GLFWwindow;
struct imgui_context
{
    std::shared_future<void> main_future;
    std::atomic<bool> is_running = true;

    void init();
    void create();
    void destroy();
    void render();

    GLFWwindow* window = nullptr;
};
