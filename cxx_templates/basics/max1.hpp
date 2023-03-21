#ifndef STUDYSTL_CXX_TEMPLATES_BASICS_MAX1_HPP_
#define STUDYSTL_CXX_TEMPLATES_BASICS_MAX1_HPP_

/*
T 隐含约束：
1. operator >
2. copyable，返回值的时候会执行拷贝
*/
template <typename T>
T max(T a, T b) {
  return a > b ? a : b;
}

/*
和上面的那个 max 是一样的。
早期的C++用的是class，现在推荐用typename。
class容易让人误以为只能传递类作为可变参数，实际上可以传递任意类型。
注意：这里的class不能用struct替换。
*/
template <class T>
T max02(T a, T b) {
  return a > b ? a : b;
}

#endif
