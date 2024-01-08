#include "Serializer.hpp"

int main(){
	Data		a;
	Data*		d;
	uintptr_t	t;
	
	std::cout << "Data member i value: " << a.i << std::endl;
	t = Serializer::serialize(&a);
	std::cout << "Data member i value: " << a.i << std::endl;
	std::cout << "data serialized: " << t << std::endl;
	d = Serializer::deserialize(t);
	std::cout << "data deserialized: " << d->i << std::endl; 
	return 0;
}