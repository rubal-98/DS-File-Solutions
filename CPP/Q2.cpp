#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,j,flag=0;
    cout<<"Enter the no of elements you want in an array";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element you want to search in the array";
    cin>>j;
    for(i=0;i<n;i++){
        if(a[i]==j){
            flag=1;
            cout<<"Element found at index "<<i;
            break;
        }
    }
    if(flag==0)
        cout<<"Element is not in the array";


}
