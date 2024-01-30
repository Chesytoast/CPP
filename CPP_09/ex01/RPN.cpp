#include "RPN.hpp"

int	sum(int x, int y) {return (x + y);}
int	diff(int x, int y) {return (x - y);}
int	prod(int x, int y) {return (x * y);}
int	quot(int x, int y) {return (x / y);}

bool isoperand(int c){
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

void	executeOperation(char operand, std::stack<int>& stack){
	int y = stack.top();
	stack.pop();
	int x = stack.top();
	stack.pop();
	switch (operand){
	case '+':
		stack.push(sum(x, y));
		break;
	case '-':
		stack.push(diff(x, y));
		break;
	case '*':
		stack.push(prod(x, y));
		break;
	case '/':
		if (y == 0)
			throw ZeroDivisionError();
		stack.push(quot(x, y));
		break;
	default:
		break;
	}
}

void	calculationLoop(std::string input, std::stack<int>& stack){
	std::stringstream ss(input);
	
	int buff, type;
	char operand;
	while (!ss.eof()){
		type = ss.peek();
		if (type == EOF)
			break;
		if (isdigit(type)){
			ss >> buff;
			if (ss.fail())
				throw FormatError();
			stack.push(buff);
		} else if (isoperand(type)){
			ss >> operand;
			if (ss.fail())
				throw FormatError();
			if ((type == '-') && isdigit(ss.peek())){
				ss >> buff;
				buff *= -1;
				if (ss.fail())
					throw FormatError();
				stack.push(buff);
			}
			else if (stack.size() >= 2)
				executeOperation(operand, stack);
			else
				throw OperationError();
		}else if (isspace(type)) ss.ignore(); 
		else
			throw FormatError();
	}
}