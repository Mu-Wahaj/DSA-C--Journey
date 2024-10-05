#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //     // vectors
    //     vector<int>vec={1,2,3};
    //     cout<<vec[0]<<endl;
    //     // for each loop
    //     vector<char>vector={'a','c','d','g','f'};
    // for (char val:vector)
    // {
    // cout<<val<<endl;
    // }
    // vector functions :::
    // size
    // push back
    // pop back
    // front
    // back
    // at
    vector<int> vectors = {1, 2, 3, 3, 3, 4, 5, 6};
    cout << "size of vector is :: " << vectors.size() << endl;
    for (int val : vectors)
    {
        cout << val << endl;
    }
    vectors.push_back(18); // add a value
    cout << " after pushing a value size of vector is :: " << vectors.size() << endl;
    vectors.pop_back(); // remove a value
    cout << " after poping  a value size of vector is :: " << vectors.size() << endl;
    cout << vectors.front() << endl; // print the  front/first value
    cout << vectors.back() << endl;  // print the  end/back value
    cout << vectors.at(5) << endl;   // print the  specific  value  at some index
    //  size and capcity of a vector when we push somthing i.e capcity incarese with 2x 
    vector<int> ve;
    ve.push_back(0);
    ve.push_back(1);
    ve.push_back(2);
    cout << ve.size() << endl;
    cout << ve.capacity() << endl;
    return 0;
}