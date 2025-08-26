// changing const value using const cast function 

#include <iostream>

int main(){

    const int age {34};

    std::cout << "&age : " << &age << std::endl;
    std::cout << "age : " << age << std::endl;
    std::cout << std::endl;
    
    int* year = const_cast<int*>(&age);
    *year = 20;

    std::cout << "&age : " << &age << std::endl;
    std::cout << "age : " << age << std::endl;
    
    std::cout << "year : " << year << std::endl;
    std::cout << "*year : " << *year << std::endl << std::endl << std::endl;
    
    
    int non_const_value {22};
    const int const_value = non_const_value;

    std::cout << "non_const_value : " << non_const_value << std::endl;
    std::cout << "const_value : " << const_value << std::endl;
  
    return 0;
}