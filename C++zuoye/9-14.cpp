#include<iostream>
using namespace std;
template<typename T>
void bubble_sort(T arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        cout<<"传递后 "<<i+1<<": ";
        for(int k=0; k<n; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 
             2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(data1)/sizeof(data1[0]);

    cout<<"整理前：";
    for(int i=0; i<n; i++){
        cout<<data1[i]<<" ";
    }
    cout<<endl;

    bubble_sort(data1,n);

    cout<<"整理后: ";
    for(int i=0; i<n; i++){
        cout<<data1[i]<<" ";
    }
}