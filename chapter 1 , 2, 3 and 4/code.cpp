#include <iostream>
using namespace std;

int main()
{
    // int n = 0;
    // for (int i = 5; i >= n; i--)
    // {
    //     cout << i + 1 << " :";
    //     for (int j = 5; j >= i; j--)
    //     {
    //         cout << j + 1 << " ";
    //     }

    //     cout << endl;
    // };

    //    char n = 'D';
    //     for (char i = 'A'; i <=n ; i++)
    //     {
    //         cout << i  << " :";
    //         for (char j = i; j >= 'A'; j--)
    //         {
    //             cout << j << " ";
    //         }

    //         cout << endl;
    //     };

    // int n  = 4;
    // char num='A';
    // for (int i = 0; i <n; i++)
    // {
    //        cout << i + 1 << " :";
    //        for (int j  = 0; j <=i; j++)
    //        {
    //         cout<< num;
    //         num++;
    //        }

    //                 cout << endl;
    // }

    //   char n = 'D';
    //       for (char i = 'A';i <=n; i++)
    //       {
    //      cout << i << " :";
    //     //  spaces
    //     for (char j = 'A'; j < i ; j++)
    //     {
    //       cout<<" " ;   }
    //      // num
    //      for (int j = 0; j<=n-i; j++)
    //      {
    // cout <<(i)   ;  }

    //     cout <<endl;
    //       }

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " :";

    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j ;
    //     }

    //     cout << endl;
    // }

    // // top
    //     int n = 4;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << i << " :";

    //         for (int j = 0; j < n - i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //         if (i != 0)
    //         {
    //             for (int j = 0; j < 2 * i - 1; j++)
    //             {
    //                 cout << " ";
    //             }
    //             cout << "*";
    //         }
    //         cout<<endl;
    //     }

    //     // bottom
    //     for (int i = 0; i < n-1; i++)
    //     {
    //         cout << i << " :";

    //         for (int j = 0; j < i+1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //         if (i != n-2)
    //         {
    //             for (int j = 0; j < 2*(n-i)-5; j++)
    //             {
    //                 cout << " ";
    //             }
    //             cout <<"*";
    //         }
    //         cout<<endl;
    //     }

    //   butterefly pattern

    //   top
    int n;
    cout << "enter size of butterfly : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // cout << i << " :";

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //  bottom

    for (int i = 0; i < n; i++)
    {
        // cout << i << " :";

        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
