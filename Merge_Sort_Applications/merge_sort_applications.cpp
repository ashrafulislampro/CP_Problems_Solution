#include <bits/stdc++.h>
using namespace std;

void merge_f(int l, int r, int mid, vector<int> &arr){
  // we know that 
  // array [l to mid] is sorted
  // array [mid+1 to r] is sorted
  // we have to merge these two sorted array to arr[l to r]
  vector<int> tmpL, tmpR;
  // Copy data into temporary array;
  for(int i = l; i <=mid; i++)tmpL.push_back(arr[i]);
  for(int i = mid+1; i <= r; i++)tmpR.push_back(arr[i]);
  
  // arr[l to r] = merge version of tmpL and tmpR
  int curIdx = l;   // ++ kre kre r porjanto jabo...
  int L = 0, R = 0;
  while(L < tmpL.size() && R < tmpR.size())
  {
    if(tmpL[L] < tmpR[R])
      arr[curIdx] = tmpL[L], curIdx++, L++;
    else
      arr[curIdx] = tmpR[R], curIdx++, R++;
  }
    
  while(L < tmpL.size())
    arr[curIdx] = tmpL[L], curIdx++, L++;
  while(R < tmpR.size())
    arr[curIdx] = tmpR[R], curIdx++, R++;
}


void divide_f(int l, int r, vector<int> &arr){
  // array [l to r] sort kra lagbe...
  if(l >= r)return;
  
  int mid = (l +r)/2;   // [left to mid], [mid + 1 to right]
  divide_f(l, mid, arr);
  divide_f(mid+1, r, arr);
  merge_f(l, r, mid, arr);
}


int main() 
{
    vector<int> arr = {8,7,6,5,4, 3, 2, 1};
    divide_f(0, arr.size()-1, arr);
    
    // after sorting the array;
    for(int i = 0; i < arr.size(); i++){
      cout<<arr[i]<<" \n"[i+1 == arr.size()];
    }
    
    return 0;
}