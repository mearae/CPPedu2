#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee (
	const string& first, const string& last, const string& ssn,
	double sales, double rate, double salary) {
	setFirstName(first);
	setLastName(last);
	setSocialSecurityNumber(ssn);
	setGrossSales(sales);
	setCommissionRate(rate);
	setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary < 0.0) {
		throw invalid_argument("Salary must be >= 0.0");
	}

	baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
	return baseSalary + (getCommissionRate() * getGrossSales());
}

string BasePlusCommissionEmployee::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "base-salaried commission employee: " << getFirstName() << ' '
		<< getLastName() << "\nsocial security number: " << getSocialSecurityNumber()
		<< "\ngross sales: "<< getGrossSales()
		<< "\ncommission rate: " << getCommissionRate()
		<< "\nbase salary: " << baseSalary << endl;
	return output.str();
}