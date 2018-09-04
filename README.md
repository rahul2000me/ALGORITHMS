/*
Name:Rahul Chauhan
username:rahul2000
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,d,temp=0;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    temp=arr[0];
    for(int j=0;j<(d%n);j++){
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];}
    arr[i]=temp;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
/*
complexity:O(n*d%n)
space:O(1)
*/
