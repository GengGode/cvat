#pragma once
#include <memory>

namespace ctd
{
    template <typename T> using ptr = std::shared_ptr<T>;
} // namespace ctd
