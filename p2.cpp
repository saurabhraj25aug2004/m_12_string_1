#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string";
    cin>>str;
    int n =str.size();
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='i' ||str[i]=='e' ||str[i]=='o' ||str[i]=='u')
        {
            c++;
        }
    }
    cout<<"total number of consonant are : "<<n-c;
    return 0;
    }
    /*------------------------OUTPUT-----------------
    Input a string of length n and count all the consonants in the given string.
    Input : "pwians"
    Output : 4
    Input : "abdc"
    Output : 3
    --------------------------------------------------------
    */

