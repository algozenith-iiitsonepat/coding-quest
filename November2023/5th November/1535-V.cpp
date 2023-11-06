
/*

If we observe our problem, then we can minimize our constraints of k from 10^9 
to the length of n. As we can observe, if k is greater then length of array,
answer will always be maximum element of array as it will becom first element
of array and it will not allow any swaps as it will bw the biggest element in 
each operations. 

For cases k less than size of array, we will check for every subset of length
k will its 2nd element is maximum of the subset or not. TO do this in O(nlogn),
I used set as shown below. 

*/

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k>=arr.size()) return *max_element(arr.begin(),arr.end());
        set<int> s;
        for(int i=0; i<=k; i++){
            s.insert(arr[i]);
        }
        if(max(arr[0],arr[1]) == *prev(s.end())) return max(arr[0],arr[1]);
        for(int i=k+1; i<arr.size(); i++){
            // cout<<arr[i-k-1]<<' '<<arr[i]<<endl;
            s.erase(arr[i-k-1]);
            s.insert(arr[i]);
            if(arr[i-k+1] == *prev(s.end())) return arr[i-k+1];
        }
        return *max_element(arr.begin(),arr.end());
    }
};