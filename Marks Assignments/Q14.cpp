#include<iostream>
using namespace std;
int mid,found=0;;
int main()
{
    int i,l,j,key,res;
    int binarysearch(int[],int,int,int);
    cout<<"enter array length";
    cin>>l;
    int arr[l];
    cout<<"enter array elements";
    for(int i=0;i<l;i++)
    cin>>arr[i];
    i=0;
    j=l-1;
    cout<<"enter value you want to search";
    cin>>key;
    res=binarysearch( arr,i,j,key);
    if(found==1)
    cout<<"value found at index"<<res<<endl;
    else
    cout<<"value not found";
}
int binarysearch(int arr[],int i,int j,int key)
{
    
    if(i>j)
    return -1;
    mid=i+(j-1)/2;
    if(key==arr[mid]){
    found=1;
    return mid;}
    else if(key<arr[mid])
    return binarysearch(arr,i,mid-1,key);
    else
    return binarysearch(arr,mid+1,j,key);
}