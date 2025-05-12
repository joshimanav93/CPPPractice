#include<iostream>
#include<conio.h>

//Call by reference function example
using namespace std;

int add(int &, int &);

int main()
{
    int a;
    a = 5L;
    int b = 6;
    int sum = add(a, b);
    cout << "Sum of " << a << " and "<< b << " is " << sum << endl;
    getch();
}

int add(int &x, int &y)
{
    return (x + y);
}