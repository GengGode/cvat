#include <iostream>
#include <ptr.hpp>
#include <self_releasing_async.hpp>

#include <format>
#include <iostream>

int main()
{
    ctd::ptr<int> p = std::make_shared<int>(42);
    auto pool = ctd::self_releasing_async();

    auto id = pool.start_forever("id", std::chrono::milliseconds(100), []() {
        auto now = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
        auto value = time.count() % 1000;
        static auto last = now;
        auto diff = now - last;
        last = now;
        std::cout << std::format("id: 100ms {:>4} {:>4}ms", value, diff.count()) << std::endl;
    });
    std::this_thread::sleep_for(std::chrono::seconds(5));
    pool.stop_forever(id);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    auto high = pool.start_forever_high_resolution("high", std::chrono::milliseconds(100), []() {
        auto now = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
        auto value = time.count() % 1000;
        static auto last = now;
        auto diff = now - last;
        last = now;
        std::cout << std::format("high: 100ms {:>4} {:>4}ms", value, diff.count()) << std::endl;
    });
    std::this_thread::sleep_for(std::chrono::seconds(5));
    pool.stop_forever(high);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    auto system = pool.start_forever_system_perf("system", std::chrono::milliseconds(100), []() {
        auto now = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
        auto value = time.count() % 1000;
        static auto last = now;
        auto diff = now - last;
        last = now;
        std::cout << std::format("system: 100ms {:>4} {:>4}ms", value, diff.count()) << std::endl;
    });
    std::this_thread::sleep_for(std::chrono::seconds(5));
    pool.stop_forever(system);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "end" << std::endl;
    return 0;
}
