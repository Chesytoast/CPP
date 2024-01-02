#include <iostream>
#include "iter.hpp"

void	fadd(int& i){
	++i;
}

void	fsubstract(int& i){
	--i;
}


class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << " ";
  return;
}

int main(){
	int tab[] = {1,2,3,4,5,6};
	
	iter(tab, 6, &fadd);
	iter(tab, 6, print<int>);
	std::cout << std::endl;
	iter(tab, 6, &fsubstract);
	iter(tab, 6, print<int>);
	std::cout << std::endl;

	std::cout << "Complex test" << std::endl << std::endl;
	int tab3[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab3, 5, print<const int>);
	std::cout << std::endl;
	iter( tab2, 5, print<Awesome>);
	std::cout << std::endl;

	return 0;
}