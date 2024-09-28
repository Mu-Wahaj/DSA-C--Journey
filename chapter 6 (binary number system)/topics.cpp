#include <iostream>
using namespace std;

// -----> decimal into binary code

//     int decimalNum(int n ){
//     int anwser=0;
//     int power = 1 ;
//     while (n>0)
//     {
//         int rem = n%2;
//         n= n/2;
//     anwser+=(rem*power);
//     power=power*10;

//     }
//     return anwser;

//     }
// int main()
// {
//     int n =108;
//     for (int i = 0; i <=n; i++)
//     {
//     cout<<"the decomal code of  " << i <<" " << " is " <<" "<<  decimalNum(i)<<endl;

//     }

//     return 0;
// }

//   -----> binary in to decimal

int decimalNum(int n)
{
    int anwser = 0;
    int power = 1;
    while (n > 0)
    {
        int rem = n % 10;
        anwser += (rem * power);
        n = n / 10;
        power = power * 2;
    }
    return anwser;
}
int main()
{

    cout << "deciaml of  " << 1100101 << " " << decimalNum(1100101);
    return 0;
}
