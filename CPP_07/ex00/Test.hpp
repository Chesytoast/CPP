#ifndef TEST_HPP
#define TEST_HPP

#include <string>
#include <iostream>

class Test {
    private:
        Test();

    public:
        std::string _str;
        int         _nb;
        Test(std::string str, int nb);
        Test(Test const& other); 
        Test& operator=(Test const& other);
		bool	operator>(const Test& other) const;
		bool	operator<(const Test& other) const;
        ~Test();
};

std::ostream& operator<<(std::ostream& out, const Test& arg);

#endif
