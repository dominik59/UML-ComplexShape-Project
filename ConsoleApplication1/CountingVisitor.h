#include <string>
#ifndef COUNTING_VISITOR
#define COUNTING_VISITOR
class CountingVisitor
{
public:
	CountingVisitor();
	~CountingVisitor();
	void visit(std::string s);
	void show();

private:
	int number_of_nodes =0;
	std::string type_of_nodes;
};
#endif
