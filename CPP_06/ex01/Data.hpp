#ifndef DATA_HPP
#define DATA_HPP

class Data {
    private:

    public:
        int i;
        Data();
        Data(Data const& other); 
        Data& operator=(Data const& other);
        ~Data();
};

#endif
