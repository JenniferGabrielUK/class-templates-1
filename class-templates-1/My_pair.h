#pragma once
#include <iostream>
#include <string>
#include <vector>

template<typename T1, typename T2>
class My_pair
{
private:
	T1 first;
	T2 second;
public:
	My_pair (T1 first, T2 second) : first{first}, second{second} {}
	~My_pair() = default;
	T1 get_first() { return first; }
	T2 get_second() { return second; }
};

