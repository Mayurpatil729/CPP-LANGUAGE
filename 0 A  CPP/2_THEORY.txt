// Solution as follows

#include <iostream>
#include <string>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
  { 
   int X,Y;
   cin>>X;
   //Create a new variable Y for total distance. 5 days a week - Chef will travel 2*X - i.e. return trip walk to office
    Y = 2 * 5 * X;  
   //Output distance traveled for each test case
    cout<<Y<<endl;
   }
 return 0;
}








