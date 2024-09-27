#include <bits/stdc++.h>
using namespace std;

////------Merge function-------
void merge(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
	  int left[n1], right[n2];            //////-----Taking two array to hold the values of sorted given arrays
	
    for (int i = 0; i < n1; i++)        /////-----copying values from 0 to mid
		  left[i] = arr[low + i];
	  for (int i = 0; i < n2; i++)        ////----copying values from mid+1 to the end
		  right[i] = arr[mid + 1 + i];

	
      int i = 0, j = 0;
	  for (int k = low; k <= high; k++)   ////---- merging and copying value to the given array
	  {
		  if (i >= n1)
			  arr[k] = right[j++];
		  else if (j >= n2)
		  	arr[k] = left[i++];
		  else if (left[i] <= right[j])
			  arr[k] = left[i++];
		  else
			  arr[k] = right[j++];
	  }

}

////--------Merge_sort-----------------
void merge_sort(int v[], int lb, int ub){
    if(lb < ub){
        int mid = (lb+ub)/2;
        merge_sort(v, lb, mid);
        merge_sort(v, mid+1, ub);
        merge(v, lb, mid, ub);
    }
}

int main(){
    int v[] = {2, 4, 7, 3, 5, 6, 4, 1, 0, 5, 3, 8, 9, 6, 8, 12};
    int len=16-1;
    merge_sort(v, 0, len);

    for(int i:v){
        cout<<i<<" ";
    }
}
