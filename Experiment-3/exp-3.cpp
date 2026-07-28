#include<bits/stdc++.h>
using namespace std;
void reverseString(string s)
{
    int i=0;
    int j=s.length()-1;
    while(i<=j)
    {
        swap(s[i++],s[j--]);
    }
    cout<<"The reverse string of s is :- "<<s<<endl;
}
bool palindrome(string s)
{
    int i=0;
    int j=s.length()-1;
    while(i<=j)
    {
        if(s[i++]!=s[j--]) return false;
    }
    return true;
}
void freqCount(string s)
{
    vector<int> freq(26,0);
    for(int i=0;i<s.length();i++) freq[s[i]-'a']++;
    for(int i=0;i<26;i++)
    {
        cout<<"The freq of character "<<char(i+'a')<<" in the string s is :- "<< freq[i]<<endl;
    }
}
int main()
{
    string s;
    cin>>s;
    string op;
    cin>>op;
    if(op=="reverse")
    {
        cout<<"The original string is :- " << s<<endl;
        reverseString(s);
    }
    else if(op=="palindrome")
    {
        bool status=palindrome(s);
        if(status) cout<<"The string is a palindromic string."<< endl;
        else cout<<"Tge string is not a palindromic string."<<endl;
    }
    else if(op=="freqCount")
    {
        freqCount(s);
    }
    return 0;
}
