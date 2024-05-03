#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n =s.size();
    int x =0;
    for(int i=0;i<n;i++)
    {
        x *= 10;
        x +=(s[i] -48);
    }
    cout<<x;

}
/*---------------------------output----------------------
input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12
--------------------------------------------------------------
*/













/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int x =stoi(s);
    cout<<x+3;
    return 0;
}

*/