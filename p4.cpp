#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string ";
    cin>>str;
    int n =str.size();
    if(n%2!=0) cout<<"invalid input";
    else
    {
        reverse(n/2+str.begin(),str.end());
    }
    cout<<str;
    return 0;

}
/*----------------OUTPUT-----------------------------
nput a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe
Input :str = "pwians"
Output : pwisna
--------------------------------------------------------
*/