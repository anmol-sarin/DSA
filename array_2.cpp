#include<iostream>
using namespace std;
//defining a function to print array
void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
}
int main(){
    //taking size as veriable is bad practice
    int n;
    cout<<"enter the size of an array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
    cout<<"array is :"<<endl;
    //calling the printing function
    printArray(arr,n);
}