#include "CountingVisitor.h"
#include <iostream>;
#include <string>




CountingVisitor::CountingVisitor()
{
}


CountingVisitor::~CountingVisitor()
{
}

void CountingVisitor::visit(std::string s)
{
	number_of_nodes++;
	type_of_nodes += s +" ";
}

void CountingVisitor::show()
{
	std::cout << "Ilosc wezlow to: " << number_of_nodes<<"\n";
	std::cout << "Typy, ktore zostaly zliczone to: "<< "\n " << type_of_nodes << "\n";
}

