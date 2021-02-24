//
// Created by lsc19 on 2019-03-13.
//

/*
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int MAXN = 1024;
int array[MAXN], n;

void merge(int arr[], int l, int r) {
    int mid = (l + r) / 2;
    int al[mid - l];
    int ar[r - mid];
    for (int i = l; i < mid; ++i) {
        al[i - l] = arr[i];
    }
    for (int i = mid; i < r; ++i) {
        ar[i - mid] = arr[i];
    }
    int p = 0, q = 0, t = l;
    while (p < mid - l || q < r - mid) {
        int flag=p < mid - l && q < r - mid;
        if (al[p] < ar[q]&&flag || q == r - mid) {
            //归并判断的条件要注意
            arr[t] = al[p];
            p++;
            t++;
            continue;
        }
        if (al[p] >= ar[q]&&flag || p == mid - l) {
            arr[t] = ar[q];
            q++;
            t++;
            continue;
        }
    }
}

void merge_sort(int arr[], int l, int r) {
    if (r - l < 2)return;
    merge_sort(arr, l, (l + r) / 2);
    merge_sort(arr, (l + r) / 2, r);
    merge(arr, l, r);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    merge_sort(array, 0, n);
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;


}
/*

 8
 4 2 3 1 9 6 5 0
 9
 8 7 9 7 1 5 8 1 7
 */

