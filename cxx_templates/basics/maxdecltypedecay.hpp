#ifndef STUDYSTL_CXX_TEMPLATES_BASICS_MAX_DECLTYPE_DECAY_HPP_
#define STUDYSTL_CXX_TEMPLATES_BASICS_MAX_DECLTYPE_DECAY_HPP_

#include <type_traits>

template <typename T1, typename T2>
auto max(T1 a, T2 b) -> typename std::decay<decltype(b < a ? a : b)>::type {
  return b < a ? a : b;
}

#endif
