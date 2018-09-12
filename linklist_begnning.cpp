/*
Name:Rahul Chauhan
Username:rahul2000
*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int Data;
    Node* Next;
};
struct Node* Head;
void Insert_At_Beginning(int x);
void Print();
void Insert_At_Beginning(int x)
{
    struct Node* Refrence=(Node*)malloc(sizeof(struct Node));
    Refrence->Data=x;
    Refrence->Next=Head;
    Head=Refrence;

}
void Print()
{
    struct Node* Ref=Head;
    cout<<"List is : ";
    while(Ref!=nullptr)
        {
            cout<<Ref->Data<<" ";
            Ref=Ref->Next;
        }
        cout<<endl;
}
int main()
{   int Number;
    string name;
    cout<<"Enter User Name:"<<endl;
    getline(cin,name);
    cout<<"How Many Elements Wants To Enter "<<name<<" :"<<endl;
    cin>>Number;
    for(int index=0; index<Number;index++){
            int Element;
            cout<<"Enter The Element In The List:"<<endl;
            cin>>Element;
            Insert_At_Beginning(Element);
            Print();
    }
    return 0;
}
