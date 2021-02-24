//
// Created by lsc19 on 2019-03-12.
//


/*
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int MAXN = 1024;
int arr[MAXN],n;
void print(){
    for (int i = 0; i <n ; ++i) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void quick_sort1(int l,int r){
    if(r-l<2)return;
    int p=l,q=r-1;
    while(p!=q){
        if((arr[p]>arr[q]&&p<q)||(arr[p]<arr[q]&&p>q)){
        //交换的条件要注意
            swap(arr[p],arr[q]);
            swap(p,q);
            print();
        }
        if(p>q)q++;
        else q--;
    }
    //if(q==l)q++;
    quick_sort1(l,q);
    //为避免q==l的情况直接sort(q+1,r)
    quick_sort1(q+1,r);

}


int main() {
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    quick_sort1(0,n);
    for (int i = 0; i <n ; ++i) {
        cout<<arr[i]<<" ";
    }`  3
    cout<<endl;


}
 */


/*
 10
 10 18  4 3 6 12 1 9 18 8

 8
 4 2 3 1 9 6 5 0
 */









