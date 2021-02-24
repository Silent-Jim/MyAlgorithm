//
// Created by lsc19 on 03/04/2019.
//
/*
#include <iostream>
using namespace std;
const int MAXN=10010;
int array[MAXN];
void adjust_heap(int arr[],int p,int len ){
    int temp=arr[p];
    for (int i = 2*p+1; i <len ; i=2*i+1) {
        if(i+1<len&&arr[i]>arr[i+1])i++;
        if(arr[i]<temp){
            arr[p]=arr[i];
            p=i;
        }else break;
    }
    arr[p]=temp;
}
void heap_sort(int arr[],int n){
    for (int i = n/2-1; i >=0 ; i--) {
        adjust_heap(arr,i,n);
    }
    for (int i = n-1; i >0 ; i--) {
        swap(arr[0],arr[i]);
        adjust_heap(arr,0,i);
    }

}

void adjust_heap1(int arr[],int p,int len){
    int temp=arr[p];
    for (int i = 2*p+1; i <len ; i=2*i+1) {
        if(i+1<len&&arr[i]>arr[i+1])i++;
        if(arr[i]<temp){
            arr[p]=arr[i];
            p=i;
        }else break;
    }
    arr[p]=temp;
}
void heap_sort1(int arr[],int n){
    for (int i = n/2-1; i >=0 ; i--) {
        adjust_heap1(arr,i,n);
    }
    for (int i = n-1; i >=0 ; i--) {
        swap(arr[i],arr[0]);
        adjust_heap1(arr,0,i);
    }
}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n ; ++i) {
       cin>>array[i];
    }
    heap_sort1(array,n);
    for (int i = 0; i <n ; ++i) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

}
 */
/*
 10
 10 18  4 3 6 12 1 9 18 8

 8
 4 2 3 1 9 6 5 0
 */




