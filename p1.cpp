#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string ";
    cin>>str;
    for(int i=1;i<(int)str.size();i+=2)
    {
        str[i] ='#';
    }
    cout<<str;
    return 0;

}
/*------------------OUTPUT------------------------------
Enter the string saurabh
s#u#a#h
Press any key to continue . . .

Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 
0-based indexing.
Input : str = "Pbwcshkuiglhlds"
Output : "P#w#s#k#i#l#l#s"
input : str = "a"
Output : "a"
--------------------------------------------------------------

*/