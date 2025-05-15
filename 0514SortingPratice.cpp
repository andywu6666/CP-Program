/* Question : OJ Number */
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
 
int arr[MAXN];

void merge(int left, int right)
{
    //Terminal Condition
    if (left >= right) return;

    //Divide
    int mid = left + (right - left) / 2;
    merge( left , mid );
    merge( mid + 1 , right );

    //copy
    int L[MAXN], R[MAXN], now = 0;
    for (int i = left; i <= mid ; i++)
    {
        L[now++] = arr[i];
    }
        now = 0;
    
    for (int i = mid + 1 ; i <= right ; i++)
    {
        R[now++] = arr[i];
    }

    //Merge
    int idx_L = 0, idx_R = 0;
    for (int i = left; i <=right; i++)
    {
        if(idx_L > mid - left) arr[i] = R[idx_R++];
        else if( idx_R > right - (mid + 1)) arr[i] = L[idx_L++];
        else if( L[idx_L] <= R[idx_R] ) arr[i] = L[idx_L++];
        else arr[i] = R[idx_R++];
    }
}


int main(){

    int n;
    while (cin >> n){
    for (int i = 0; i < n; i++) cin >> arr[i];

    merge( 0 , n - 1 );

    //Output
    for (int i = 0; i < n; i++)
    cout << arr[i] << " \n"[i==n-1];
    }
    return 0;
}



