// Date

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1={1,2,3,4,5};
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1[0]<<endl;

    v1.insert(v1.begin()+1,9);
    cout<<v1[0]<<endl;

    cout<<v1.capacity()<<endl;
    v1.push_back(9);
    cout<<v1.capacity()<<endl;
    v1.push_back(9);
    v1.push_back(9);
    cout<<v1.capacity()<<endl;

    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    
    cout<<v1.capacity()<<endl;
    cout<<v1.size()<<endl;
    
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.shrink_to_fit();
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
    
    return 0;

// coded by Mayur
}
