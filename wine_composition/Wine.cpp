//
// Created by jin on 14.12.18.
//

#include "Wine.hpp"
#include <iostream>

Wine::Wine(const char *l, int y)
	: _years(y), _used_space(0), _name(l), _storage(ArrayIntT(static_cast<size_t >(y)), ArrayIntT(static_cast<size_t >(y)))
{}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
	: _years(y), _used_space(y), _name(l), _storage(ArrayIntT(yr, static_cast<size_t >(y)), ArrayIntT(bot, static_cast<size_t >(y)))
{}

Wine::~Wine()
{}

void Wine::show() const {
	std::cout << "Wine Label: " << _name << std::endl;
	for (int i  = 0; i < _used_space; i++){
		std::cout << _storage.first[i] << " year " << _storage.second[i] << " bottles left" << std::endl;
	}
}

void Wine::getBottles() {
	if (_used_space >= _years){
		std::cout << "Storage is full." << std::endl;
	}
	std::cout << "Please enter wine info:" << std::endl;
	std::cout << "Enter year of bottling: ";
	std::cin >> _storage.first[_used_space];
	std::cout << "Enter quantity of bottles: ";
	std::cin >> _storage.second[_used_space];
	_used_space++;
}

std::string Wine::label() const {
	return  _name;
}

int Wine::sum() const {
	return _storage.second.sum();
}