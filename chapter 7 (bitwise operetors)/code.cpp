#include<iostream>
using namespace std;
int main()
{
//  ---->  bitwise AND 
    int a =10,b=13;
    cout << (a & b) << endl; // 8

    // ----> Bitwise Or
    int c= 15 , d = 16;
    cout<< (c | d)<<endl; // 31

    // --- > bitwise XOR 
     int f=3 , e  = 7;
     cout<< (f^e )<<endl; // 6 

     // --- > bitwise left shift
     int aa= 3;
     cout<< (aa<<3) << endl; //24
     // --- > bitwise right shift
     int bb= 10;
     cout<< (bb>>2) << endl; //2

    return 0;
}

