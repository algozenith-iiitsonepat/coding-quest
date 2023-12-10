class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n){
            cnt+=(n%2==1);
            n/=2;
        }
        return cnt;
    }
};