#include <iostream>
using namespace std;

int binarySearch(int array[],int size,int key){
    int lowerBound=0;
    int upperBound=size-1;
    while(lowerBound<=upperBound){
        int mid=(lowerBound+upperBound)/2;
        if(array[mid]==key){
            return mid;
        }else if(array[mid]<key){
            lowerBound+=1;
        }else{
            upperBound-=1;
        }

    }
    return -1;

}
int main(){
    int n;
    cout<<"Input size of array"<<endl;
    cin>>n;

    int array[n];
    cout<<"Enter values in asc"<<endl;
    for(int i=0;i<n;i++){ 
        cout<<"Enter element at index "<<i<<endl;
        cin>>array[i]; 
    }
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;

    int result = binarySearch(array,n,key);
    if(result==-1){
        cout<<"error 404,not found"<<endl;
    }else{
        cout<<"The element you were looking for is found at index "<<result<<endl;
    }
    return 0;
}