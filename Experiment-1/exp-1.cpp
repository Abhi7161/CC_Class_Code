#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr,int target,int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]<target) start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int linearSearch(vector<int> &arr,int target,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    int index1=linearSearch(arr,target,n);
    if(index1==-1) cout<<"The element was not present in the array ."<<endl;
    else cout<<"The element is present at index " << index1<< " in the array"<<endl;
    int index2=binarySearch(arr,target,n);
        if(index2==-1) cout<<"The element was not present in the array ."<<endl;
    else cout<<"The element is present at index " <<index2<< " in the array"<<endl;
}
