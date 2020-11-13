#include <iostream>
using namespace std;

int myfunc();

int main(){
    int i = myfunc();
    return 0;
}

int myfunc(){
    for(int first=10; first<20; first=first+1){
        cout << "value of first : " << first << endl;
        if(first > 16){
            break;
        }
    }
    return 0;
}