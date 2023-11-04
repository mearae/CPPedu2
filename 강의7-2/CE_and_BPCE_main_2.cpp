//#include <iostream>
//#include <iomanip>
//#include "CommissionEmployee.h"
//#include "BasePlusCommissionEmployee.h"
//using namespace std;
//
//int main() {
//	BasePlusCommissionEmployee basePlusCommissionEmployee{
//	"Bob", "Lewis", "333-33-3333", 5000, .04, 300 };
//
//	CommissionEmployee* commissionEmploeePtr{ &basePlusCommissionEmployee };
//
//	string firstName{ commissionEmploeePtr->getFirstName() };
//	string lastName{ commissionEmploeePtr->getLastName() };
//	string ssn{ commissionEmploeePtr->getSocialSecurityNumber() };
//	double grossSales{ commissionEmploeePtr->getGrossSales() };
//	double commissionRate{ commissionEmploeePtr->getCommissionRate() };
//
//	double baseSalary{ commissionEmploeePtr->getBaseSalary() };
//	commissionEmploeePtr->setBaseSalary(500);
//}