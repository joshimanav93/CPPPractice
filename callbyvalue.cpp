#include<iostream>
#include<conio.h>

//Call by value function example
using namespace std;
int add(int, int); 
int main()
{
    
    int a = 5, b = 6;
    int s = add(a,b);
    cout << "sum of "<< a << " and " << b << " is " << s;
}

int add(int x, int y)
{
    return(x + y);
}
