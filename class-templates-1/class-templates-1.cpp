// class-templates-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Item.h"
#include "My_pair.h"

int main()
{
	Item<double> item1{ "Jenny", 100.1 };
	Item<int> item2{ "Jenny", 100 };
	std::cout << item1.get_name() << " " << item1.get_value() << std::endl;
	std::cout << item2.get_name() << " " << item2.get_value() << std::endl;
	Item<std::string> item3{ "Jenny", "Elizabeth" };
	Item<char> item4{ "Jennifer", 'A' };
	std::cout << item3.get_name() << " " << item3.get_value() << std::endl;
	std::cout << item4.get_name() << " " << item4.get_value() << std::endl;
	Item<Item<std::string>> item5{ "Jenny",{"Elizabeth", "Gabriel"} };
	std::cout << item5.get_name() << " " << item5.get_value().get_name() << " " << item5.get_value().get_value() << std::endl;
	Item<Item<int>> item6{"Jennifer", { "Elizabeth", 21 }};
	std::cout << item6.get_name() << " " << item6.get_value().get_name() << " " << item6.get_value().get_value() << std::endl;
	std::cout << std::setw(33) << std::setfill('-') << "" << std::endl << std::endl;
	std::vector<Item<double>> vec1{};
	vec1.push_back(Item<double>{"Jenny", 100.1});
	vec1.push_back(Item<double>{"Jennifer", 100.2});
	vec1.push_back(Item<double>{"Gabriel", 100.3});
	for (auto &item : vec1) {
		std::cout << item.get_name() << " " << item.get_value() << std::endl;
	}
	std::cout << std::endl <<  std::setw(33) << std::setfill('-') << "" << std::endl << std::endl;
	My_pair <std::string, int> p1{ "Jenny", 100 };
	My_pair <char, double> p2{ 'A', 33 };
	std::cout << p1.get_first() << " " << p1.get_second() << std::endl;
	std::cout << p2.get_first() << " " << p2.get_second() << std::endl;
	My_pair <std::string, std::string> p3{ "Jennifer", "Gabriel" };
	std::cout << p3.get_first() << " " << p3.get_second() << std::endl;
	std::cout << std::endl << std::setw(33) << std::setfill('-') << "" << std::endl << std::endl;
	std::vector<My_pair<int, int>> vec2{};
	vec2.push_back(My_pair<int, int> {100, 200});
	vec2.push_back(My_pair<int, int> {300, 400});
	vec2.push_back(My_pair<int, int> {500, 600});
	for (auto& i : vec2) {
		std::cout << i.get_first() << " " << i.get_second() << std::endl;
	}
	std::cout << std::endl << std::setw(33) << std::setfill('-') << "" << std::endl << std::endl;
	return 0;
}
