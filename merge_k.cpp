//
// Created by lsc19 on 10/06/2019.
//
//
// Created by lsc19 on 2019-03-13.
//


/*
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int MAXN = 200500;
int array[MAXN], n;
long long cnt;
const long long mod = 1e9 + 7;

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
        int flag = p < mid - l && q < r - mid;
        if (al[p] <= ar[q] && flag || q == r - mid) {
            //归并判断的条件要注意
            arr[t] = al[p];
            p++;
            t++;
            continue;
        }
        if (al[p] > ar[q] && flag || p == mid - l) {
            cnt = (cnt + mid - l - p + mod) % mod;
            cout<<"L:"<<mid-l<<" p:"<<p<<" add:"<<mid-l-p<<endl;
            arr[t] = ar[q];
            q++;
            t++;

            continue;
        }
    }
}

void merge_sort(int arr[], int l, int r) {
    if (r - l < 2)return;
    merge_sort(arr, l, (l + r) / 2);w
    merge_sort(arr, (l + r) / 2, r);
    merge(arr, l, r);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    cnt = 0;
    merge_sort(array, 0, n);

    cout << endl;
    cout<<cnt<<endl;

}

 */


/*

 8
 4 2 3 1 9 6 5 0
 9
 8 7 9 7 1 5 8 1 7
 */
/*
364  637  341  406  747
995  234  971  571  219
993  407  416  366  315
301  601  650  418  355
460  505  360  965  516
648  727  667  465  849
455  181  486  149  588
233  144  174  557  67
746  550  474  162  268
142  463  221  882  576
604  739  288  569  256
936  275  401  497  82
935  983  583  523  697
478  147  795  380  973
958  115  773  870  259
655  446  863  735  784
3    671  433  630  425
930  64  266  235  187
2 84  665  874  80  45
848  38  811  267  575
*/
