#include "Class.h"
template<typename T>
MyData<T>::MyData(T value) : data{ value } {}

template<typename T>
T MyData<T>::getData() const { return data; }