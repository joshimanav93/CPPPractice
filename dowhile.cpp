#include<iostream>
#include<vector>

using namespace std;

int main()
{
    char selection {};
    do {
        cout << "----------------------------" << endl;
        cout << "1. Do this"<< endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;

        cin >> selection;

        if(selection == '1')
            cout << "You chose 1. Do this" << endl;

        else if(selection == '2')
            cout << "You chose 2. Do that" << endl;

        else if(selection == '3')
            cout << "You chose 3. Do something else" << endl;

        else if(selection == 'Q' || selection == 'q') 
            cout << "Ok goodbye" << endl;
        
        else 
            cout << "Unknown option, try again" << endl;
    }
    while(selection != 'q' && selection != 'Q');

    return 0;
}