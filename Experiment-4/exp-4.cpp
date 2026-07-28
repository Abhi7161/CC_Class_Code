#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> freq;
    int i=0;
    int j=0;
    int maxLen=0;
    while(j<s.length() && i<=j)
    {
        freq[s[j]]++;
        while(freq[s[j]]>1)
        {
            freq[s[i]]--;
            i++;
        }
        maxLen=max(maxLen,j-i+1);
        j++;
    }
    cout<<"The longest substring without repearing character is of length :- "<< maxLen<<endl;
}
