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
    ctd::ptr<debugger_abi> gui = std::make_shared<debugger_app>();
    return gui->execute();
}
