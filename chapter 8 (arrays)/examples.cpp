#include <iostream>
using namespace std;

int LinearSerach(int arr[], int sz, int n)
{

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == n)
        {
            return i; // your index is
        }
    }

    return -1; // NOT found
}

int main()
{
    // finding smallest and largest of an array
    int marks[5] = {90, 56, 78, 45, 76};
    int size = 5;
    int index = 0;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
            index = i;
        }

        //   built in shostcuts
        //    smallest= min(marks[i],smallest);
        //    largest= max(marks[i],largest);
    }
    cout << "smalllest = " << smallest << "  \t index = " << index << endl;



    // find the targeted valur in the array and return its index
    int arr[] = {2, 4, 5, 6, 7, 8, -3};
    int sz = 8;
    int n;
    cout << "enter  anumber you want to find";
    cin >> n;

    cout << LinearSerach(arr, sz, n) << endl;

    return 0;
}