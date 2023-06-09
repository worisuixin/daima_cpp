#include<iostream>
using namespace std;

void selectSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        
        // 输出排序后的数组
        cout << "第" << i+1 << "轮排序后的数组为: [";
        for(int k=0; k<n; k++){
            if(k != n-1){
                cout << arr[k] << ", ";
            }else{
                cout << arr[k] << "]" << endl;
            }
        }
    }
}

int main(){
    int data1[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 
                 2, 4, 6, 8, 10,12,14,16,18,20};
    int len=sizeof(data1)/sizeof(data1[0]);
    
    // 输出原始数组
    cout << "原始数组为: [";
    for(int i=0; i<len; i++){
        if(i != len-1){
            cout << data1[i] << ", ";
        }else{
            cout << data1[i] << "]"<< endl;
        }
    }

    selectSort(data1,len);
    
    return 0;
}