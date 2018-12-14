//
// Created by jin on 13.12.18.
//

#ifndef HW6_WINE_HPP
#define HW6_WINE_HPP

#include <valarray>
#include <utility>
#include <string>

class Wine {
private:
	using ArrayIntT = std::valarray<int>;
	using PairArrayT = std::pair<ArrayIntT , ArrayIntT>;

	int _years;
	int _used_space;
	std::string _name;
	PairArrayT _storage;


public:
	Wine(const char *l, int y);
	Wine(const char *l, int y, const int yr[], const int bot[]);
	virtual ~Wine();

	void show() const;
	void getBottles();
	std::string label() const;
	int sum() const;
};


#endif //HW6_WINE_HPP
