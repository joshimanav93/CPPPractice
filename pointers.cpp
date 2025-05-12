#include<iostream>
#include<string>
using namespace std;

int main()
{
    // string s1 {"Frank"};
    // string s2 {"Frank"};

    // string *p1 {&s1};
    // string *p2 {&s2};
    // string *p3 {&s1};

    // cout << (p1 == p2) << endl; //false
    // cout << (p1 == p3) << endl; //true


    // int score {10};
    // int *score_ptr {&score};

    // cout << "score: " << score << endl;

    // cout << "*score_ptr: " << *score_ptr << endl;

    // cout << "score_ptr: " << score_ptr << endl;

    int scores[] {100, 95, 89};
    cout << "Value of scores[0]: " << scores[0] << endl;
    cout << "Value of scores: " << scores << endl;
    cout << "Value of &scores: " << &scores << endl;

    int *scr_ptr{scores};
    cout << "Value of scr_ptr: " << scr_ptr << endl;
    cout << "Value of *scr_ptr: " << *scr_ptr << endl;
    cout << "Value of &scr_ptr: " << &scr_ptr << endl;

    // while(*scr_ptr != -1)
    // {
    //     cout << *scr_ptr << endl;
    //     scr_ptr++;
    // }

    // cout << "\n---------------" << endl;
    // scr_ptr = scores;
    // while(*scr_ptr != -1)
    // {
    //     cout << *scr_ptr++ << endl;
    // }
    
    cout << "Array subscript notation---" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "Pointer subscript notation---" << endl;
    cout << scr_ptr[0] << endl;
    cout << scr_ptr[1] << endl;
    cout << scr_ptr[2] << endl;
    
    cout << "Pointer offset notation---" << endl;
    cout << *scr_ptr << endl;
    cout << *(scr_ptr + 1) << endl;
    cout << *(scr_ptr + 2) << endl;

    cout << "Array offset notation---" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
}