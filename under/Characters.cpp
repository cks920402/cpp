#include <iostream>
using namespace std;

int myfunction(){
    char ch;
    cin >> ch;
    if(ch == 'A'){
        cout << " Press " << ch << " Character!" << endl;
    }

    cin >> ch;
    cout << int(ch) << " Press " << ch << " Character!" << endl;
    cin >> ch;
    cout << int(ch) << " Press " << ch << " Character!" << endl;
    cin >> ch;
    cout << int(ch) << " Press " << ch << " Character!" << endl;
    return 0;
}