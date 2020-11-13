#include <iostream>
using namespace std;

#include "under/FunctionWithParam.cpp"
extern int max(int, int);

int main(){
    int first, second, result;
    cout << "first : ";
    cin >> first;
    cout << "second : ";
    cin >> second;

    result = max(first, second);
    cout << "Max value is : " << result << endl;
    cout << "Max value is : " << max(second, first) << endl;
    return 0;
}