#include <iostream>
using namespace std;

int myfunc();

int main(){
    int i = myfunc();
    return 0;
}

int myfunc(){
    int first;
    int second;
    cout << "first : ";
    cin >> first;
    cout << "second : ";
    cin >> second;
    while(first <= second){
        cout << "Loop - " << first << endl;
        ++first;
    }
    return 0;
}