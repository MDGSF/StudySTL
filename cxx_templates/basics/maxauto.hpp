#ifndef STUDYSTL_CXX_TEMPLATES_BASICS_MAX_AUTO_HPP_
#define STUDYSTL_CXX_TEMPLATES_BASICS_MAX_AUTO_HPP_

template <typename T>
auto max(T a, T b) {
  return b < a ? a : b;
}

#endif
