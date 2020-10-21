#include <iostream>

__interface Strategy
{
public:
	int doOperation(int num1, int num2);
};

class OperationAdd : public Strategy
{
public:
	int doOperation(int num1, int num2) {
		return num1 + num2;
	}
};

class OperationSub : public Strategy
{
public:
	int doOperation(int num1, int num2) {
		return num1 - num2;
	}
};


class OperationMultiply : public Strategy {
public:
	int doOperation(int num1, int num2) {
		return num1 * num2;
	}
};

class Context {
private:
	Strategy* strategy;

public:
	Context(Strategy* stragegy) {
		this->strategy = stragegy;
	}

	int executeStrategy(int num1, int num2) {
		int result = this->strategy->doOperation(num1, num2);
		return result;
	}
};

int main() {
	Context context = Context(new OperationAdd());
	std::cout << "10 + 5 = " << context.executeStrategy(10, 5) << '\n';
	context = Context(new OperationSub());
	std::cout << "10 - 5 = " << context.executeStrategy(10, 5) << '\n';
	context = Context(new OperationMultiply());
	std::cout << "10 * 5 = " << context.executeStrategy(10, 5) << '\n';
}