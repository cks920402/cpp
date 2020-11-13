#include <iostream>
using namespace std;

int myfunc();

int main(){
    int i = myfunc();
    return 0;
}

int myfunc(){
    int first = 10;
    while(first < 20){
        cout << "value of first : " << first << endl;
        ++first;
    }
    return 0;
}