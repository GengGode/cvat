#include <ptr.hpp>
#include <self_releasing_async.hpp>

int main()
{
    ctd::ptr<int> p = std::make_shared<int>(42);

    return 0;
}
