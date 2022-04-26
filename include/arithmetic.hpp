#pragma once
#ifndef __MATHEMAX_ARITHMETIC__
#define __MATHEMAX_ARITHMETIC__

#include <list>
#include <type_traits>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>

namespace Mathemax 
{
    namespace Arithmetic 
    {
        template<typename T>
        inline T Add(T f) {
            return f;
        }

        template<typename T, typename... U>
        inline T Add(T f, U... args) {
            return f + Add(args...);
        }

        
        template<typename T>
        inline T Add(const std::initializer_list<T>& list) {
            return std::accumulate(list.begin(), list.end(), T{});
        }

        template<typename Begin, typename End>
        inline auto Add(Begin first, End last) {
            using value_type = std::remove_reference_t<decltype(*first)>;
            return std::accumulate(first, last, value_type{});
        }

    }
}

#endif