#include<iostream>
using namespace std;
int MissingNo(int arr[],int n)
{
int total=(n+1)*(n+2)/2;
for(int i=0;i<n;i++)
{
total-=arr[i];
}
return total;
}
int main()
{
int arr[]={1,2,3,5,6};
cout<<"The Missing number is :"<<MissingNo(arr,5);
}
