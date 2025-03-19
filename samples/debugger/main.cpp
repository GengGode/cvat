#include <chrono>
#include <debugger_app.hpp>
#include <future>
#include <self_releasing_async.hpp>

#include <format>
#include <iostream>

#include <functional>
#include <iostream>

int main()
{
    ctd::ptr<debugger> gui = std::make_shared<debugger_app>();
    ctd::self_releasing_async pool;
    pool.start("ui main", [gui]() { gui->execute(); });
    return 0;
}
