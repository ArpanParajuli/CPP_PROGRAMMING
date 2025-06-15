#include <iostream>


class Parent{


    public:

    


};


 class Child{

};

// lamda function 



int x = [](int y) {
    std::cout << "Hello from lambda! with arg" << y <<std::endl;
    return 42;
}(10);

int main(){


    // x(10);


}