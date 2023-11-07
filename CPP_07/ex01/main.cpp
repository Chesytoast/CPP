#include <iostream>
#include "iter.hpp"

void	fadd(int& i){
	++i;
}

void	fsubstract(int& i){
	--i;
}

int main(){
	int tab[] = {1,2,3,4,5,6};
	
	iter(tab, 6, &fadd);
	for (int i =0; i < 6; i++)
		std::cout << tab[i] << std::endl;
	iter(tab, 6, &fsubstract);
	for (int i =0; i < 6; i++)
		std::cout << tab[i] << std::endl;
	return 0;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int const tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int>);
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }