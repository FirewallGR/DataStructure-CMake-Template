#include "../lib_parser/parser.hpp"

void main() {
	string expression;

	cout << "Enter expression: " << endl;
	cin >> expression;

	Parser parser(expression);
	parser.printPostfix();

	cout << endl;

	cout << "Result : " << parser.calculate() << endl;

	//CustomStack<CustomStack<int>> stackOfStacks;
	//CustomStack<int> tmp;
	//tmp.push(10);
	//stackOfStacks.push(tmp);
	//cout << stackOfStacks.top();
}