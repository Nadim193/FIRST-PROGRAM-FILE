#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"size : ";
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(j=n-1;j>=0;j--)
{
 cout<<a[j]<<" ";
}
}

