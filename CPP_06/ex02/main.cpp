#include "Class.hpp"

int main(){
	Base* b;
	b = generate();
	Base& ref = *b;
	identify(b);
	identify(ref);
	delete b;
	return 0;
}