#include<bits/stdc++.h>
using namespace std;

bool check(string &str)
{
    int  n =str.size();
    int i=0;
    int j =n-1;
    while(i<=j)
    {
        if(str[i]!=str[j])  return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string str;
    cout<<"Enter the string ";
    cin>>str;
    cout<<(check(str)?"yes":"no");
    return 0;
}


/*-----------------OUTPUT-------------------------------
Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes
-----------------------------------------------------------
*/