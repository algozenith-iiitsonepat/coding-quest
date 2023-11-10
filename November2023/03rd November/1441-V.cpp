
/*
In today's problem, initially we have an empty stack and an stream
of integrs 1,2,3....n in that order. We want to make a target array
in the stack from bottom to top.

In the constraints, it is given that target array is strictly
increasing.

So, we will check every element of the stream whether it is in
the target array or not.
If the element is present, then we will push the element to the
stack.
If the element is not present, then we will first push the element so that
the element will be removed from the stream and then pop the element so that
the element will be removed from the stack.
Hence, we will get our solution.

*/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        for(int i=1, j=0; i<=n && j<target.size(); i++){
            ans.push_back("Push");
            if(target[j] == i){
                j++;
            }else{
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};