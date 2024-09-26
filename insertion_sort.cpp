#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>& v){
    int len = v.size();
    for(int i=1; i<len; ++i){
        int temp = v[i];
        int j=i-1;
        while(j>=0 && v[j]>temp){
            v[j+1] = v[j];
            --j;
        }
        v[j+1]=temp;
    }
}

int main(){
    vector<int> v = {2, 4, 7, 3, 5, 6, 4, 1, 0, 5, 3, 8, 9, 6, 8, 12};
    insertion_sort(v);

    for(int i:v){
        cout<<i<<" ";
    }
}
