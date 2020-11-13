#include <iostream>
using namespace std;

int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);

int myfunc(){
    int first, second;
    cout << "input : first = ";
    cin >> first;
    cout << "input : second = ";
    cin >> second;

    cout << "----------" << endl;
    cout << "+ Addition Result : " << Addition(first, second) << endl;
    cout << "+ Subtraction Result : " << Subtraction(first, second) << endl;
    cout << "+ Multiplication Result : " << Multiplication(first, second) << endl;
    cout << "+ Division Result : " << Division(first, second) << endl;
    cout << "----------" << endl;
    cout << "Do you want to continue the calculation" << endl;

    char ch;
    cin >> ch;

    if(ch == 'N'){
        cout << "End the calculation" << endl;
    }
    else{
        myfunc();
    }

    return 0;
}

int Addition(int first, int second){
    int a = first + second;
    return a;
}

int Subtraction(int first, int second){
    int b = first - second;
    return b;
}

int Multiplication(int first, int second){
    int c = first * second;
    return c;
}

int Division(int first, int second){
    int d = first / second;
    return d;
}