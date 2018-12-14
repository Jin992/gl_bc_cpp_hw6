//
// Created by jin on 13.12.18.
//

#include "Wine.hpp"
#include <iostream>

Wine::Wine(const char *l, int y)
		: std::string(l), PairArrayT(ArrayIntT(static_cast<size_t >(y)), ArrayIntT(static_cast<size_t >(y))), _years(y), _used_space(0)
{}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
		: std::string(l), PairArrayT (ArrayIntT(yr, static_cast<size_t >(y)), ArrayIntT(bot, static_cast<size_t >(y))), _years(y), _used_space(y)
{}

Wine::~Wine()
{}

void Wine::show() const {
	std::cout << "Wine Label: " << static_cast<std::string>(*this) << std::endl;
	for (int i  = 0; i < _used_space; i++){
		std::cout << static_cast<PairArrayT >(*this).first[i] << " year " << static_cast<PairArrayT >(*this).second[i] << " bottles left" << std::endl;
	}
}
void Wine::getBottles() {
	if (_used_space >= _years){
		std::cout << "Storage is full." << std::endl;
	}
	std::cout << "Please enter wine info:" << std::endl;
	std::cout << "Enter year of bottling: ";
	std::cin >> PairArrayT::first[_used_space];
	std::cout << "Enter quantity of bottles: ";
	std::cin >> PairArrayT::second[_used_space];
	_used_space++;

}

std::string Wine::label() const{
	return  static_cast<std::string>(*this);
}
int Wine::sum() const
{
	return static_cast<PairArrayT>(*this).second.sum();
}