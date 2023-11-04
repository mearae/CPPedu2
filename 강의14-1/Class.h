#pragma once
template<typename T>
class MyData {
public:
	explicit MyData(T value);
	T getData() const;
private:
	T data;
};