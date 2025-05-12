//REQUIREMENT: Create an dynamic array on heap and dynamically allocate values to it using pointer function

#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0);
void display_array(const int *myarray, size_t size);

int main()
{
    int *myarray{nullptr};
    size_t size;
    int init_value {};

    cout << "\nHow many integers would you like to allocate: ";
    cin >> size;
    cout << "\nWhat value would you like them to initialize to: ";
    cin >> init_value;

    myarray = create_array(size, init_value);

    cout << "\n------------------" << endl;
    display_array(myarray, size);

    delete[] myarray;
    return 0;
}

void display_array(const int *myarray, size_t size)
{
    for(size_t i{0}; i < size; i++)
    {
        cout << myarray[i] << "\t";
    }
    cout << endl;
}

int *create_array(size_t size, int init_value)
{
    int *new_storage{nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i < size; i++)
    {
        new_storage[i] = init_value;
    }
    return new_storage;
}