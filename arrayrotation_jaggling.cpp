/*
Name:Rahul chauhan
username:rahul2000
*/
#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
if(b==0)
    return a;
else
    return GCD(b,a%b);

}
void Left_arrayrotation(int arr[],int d,int n){
int i,temp=0;
for(i=0;i<GCD(n,d);i++){
    temp=arr[i];
    int j=i;
    while(1){
        int k=j+d;
        if(k>=n)
           k=k-n;
        if(k==i) break;

        arr[j]=arr[k];
        j=k;
        }
        arr[j]=temp;
}
}

int main()
{
    int i,n,d;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    Left_arrayrotation(arr,d%n,n);
     for(i=0;i<n;i++)
        cout<<arr[i]<<" ";

return 0;
}
/*Time Complexity:O(n)
Space:O(1)
*/
