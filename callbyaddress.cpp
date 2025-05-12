#include<iostream>
#include<conio.h>

//Call by address function example
using namespace std;

int add(int *, int *);

int main()
{
    int a = 5, b = 6;
    int sum = add(&a, &b);
    cout << "Sum of " << a << " and "<< b << " is " << sum;
    getch();
}

int add(int *p, int *q)
{
    return (*p + *q);
}