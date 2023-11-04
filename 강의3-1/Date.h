#include <string>

#ifndef Date_H
#define Date_H

class Date {
public:
	explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 2000);
	std::string toString() const;
private:
	unsigned int month;
	unsigned day;
	unsigned int year;
};

#endif