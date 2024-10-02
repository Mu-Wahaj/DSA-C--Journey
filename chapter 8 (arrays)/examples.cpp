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


void reverseArray(int array[],int size){
int start=0 , end=size-1;

while (start<end)
{
    swap(array[start],array [end]);
    start++;
    end--;
}
}

int main()
{
    // finding smallest and largest of an array
    int marks[5] = {90, 56, 78, 45, 76};
    int siz = 5;
    int index = 0;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < siz; i++)
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
    int sz = 7;
    int n;
    cout << "enter  anumber you want to find" << " ";
    cin >> n;

    cout << LinearSerach(arr, sz, n) << endl;

        


        // reversing the array 


    int array[] = {2, 4, 5, 6, 7, 8, -3};
int size = 7;
int smallestval = INT_MAX;
reverseArray(array,size);
for (int i = 0; i < size; i++)
{
 smallest =min(array[i],smallestval);
    cout<<array[i]<<" ";
}
cout<<"\n"<< smallestval;
cout<<endl;


    return 0;
}