#pragma once
#include <iostream>
#include <string>
#include <vector>


template <typename T>
class Item {
private:
	std::string name;
	T value;
public:
	Item(std::string name, T value) : name{name}, value{value} {}
	std::string get_name() { return name; }
	T get_value() { return value; }
	~Item() = default;
};

