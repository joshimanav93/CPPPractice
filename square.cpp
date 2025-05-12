#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
#include<ctime>

using namespace std;

int main()
{
    string part1 {"C++"};
    string part2 {"is a powerful"};
    string sentence;
    
 

    sentence = part1 + " " + part2 + " language";
    cout << sentence << endl;

    double_t value = time(nullptr);
    cout << "Value: " << value << endl;

    int x;
    cout << "Enter a number" << endl;
    cin >> x;
    int sq = x*x;
    cout << "Square of " << x << " is " << sq;
    getch();
}  