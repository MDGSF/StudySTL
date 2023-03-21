#ifndef STUDYSTL_CXX_TEMPLATES_BASICS_MAX_DEFAULT1_HPP_
#define STUDYSTL_CXX_TEMPLATES_BASICS_MAX_DEFAULT1_HPP_

#include <type_traits>

template <typename T1, typename T2,
          typename RT = std::decay_t<decltype(true ? T1() : T2())>>
RT max(T1 a, T2 b) {
  return b < a ? a : b;
}

#endif
