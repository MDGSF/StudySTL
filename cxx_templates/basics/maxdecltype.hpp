#ifndef STUDYSTL_CXX_TEMPLATES_BASICS_MAX_DECLTYPE_HPP_
#define STUDYSTL_CXX_TEMPLATES_BASICS_MAX_DECLTYPE_HPP_

template <typename T1, typename T2>
auto max(T1 a, T2 b) -> decltype(b < a ? a : b) {
  return b < a ? a : b;
}

#endif
