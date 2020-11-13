#include <iostream>
using namespace std;

// #include "under/NameSpacesUsingOthers.cpp"
#include "under/NameSpacesUsingOthers.hpp"
// using namespace third_space;

// namespace third_space{
//     void func();
// };

// void funcOutside();

int main(){

    third_space::func();
    funcOutside();

    return 0;
}
