#ifndef TEST_HPP
#define TEST_HPP

#include <string>

class Test {
    private:
        Test();

    public:
        std::string _str;
        int         _nb;
        Test(std::string str, int nb);
        Test(Test const& other); 
        Test& operator=(Test const& other);
        ~Test();

};

#endif
