#pragma once
#ifndef __MATHEMAX_ARITHMETIC__
#define __MATHEMAX_ARITHMETIC__

#include <list>
#include <type_traits>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <concepts>

namespace Mathemax 
{
    namespace Arithmetic 
    {
        template<typename T>
        concept Number = std::is_arithmetic_v<T>;

        template <class T>
        concept Iterable = std::incrementable<T>;

        template<Number... T>
        inline auto Add(T... v) 
        {
            return (v + ... + 0);
        }

        template<typename T, size_t s>
        inline auto Add(const T (&arr)[s])
        {
            T sum {};
            for(size_t i {}; i < s; i++) {
                sum += arr[i];
            }
            return sum;
        }
        
        template<typename T>
        inline T Add(const std::initializer_list<T>& list) {
            return std::accumulate(list.begin(), list.end(), T{});
        }

        template<Iterable Iter>
        inline auto Add(Iter first, Iter last) {
            using value_type = std::remove_reference_t<decltype(*first)>;
            return std::accumulate(first, last, value_type{});
        }

    }
}

#endif