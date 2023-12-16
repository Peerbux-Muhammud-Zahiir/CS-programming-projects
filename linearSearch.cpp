#include <iostream>
using namespace std;

int linearSearch(int array[],int size,int key){
    for(int i=0;i<size;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;

}

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element at index "<<i<<endl;
        cin>>array[i];
    }

    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    int result= linearSearch(array,n,key);
    if(result==-1){
        cout<<"Element not found"<<endl;
    }else{
        cout<<"The element that you want is find at index "<<result<<endl;
    }
    
    return 0;
}