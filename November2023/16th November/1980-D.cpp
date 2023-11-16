class Solution
{
    public:
        void rec(int len, vector<string> &nums, vector<string> &temp, int i, string str)
        {
            if (i == len)
            {
                temp.push_back(str);
                return;
            }
            str += "1";
            rec(len, nums, temp, i + 1, str);
            str.pop_back();
            str += "0";
            rec(len, nums, temp, i + 1, str);
            str.pop_back();
        }
    string findDifferentBinaryString(vector<string> &nums)
    {
        int len = nums[0].size();
        map<pair<int, int>, int> mp;
        for (auto it: nums)
        {
            int val = pow(2, len - 1);
            for (int i = 0; i < it.size(); i++)
            {
                if (it[i] == '0')
                {
                    mp[{val,0}]++;
                }
                else
                {
                    mp[{val,1}]++;
                }
                val /= 2;
            }
        }
        string ans;
        int val = pow(2, len - 1);
        for (int i = 0; i < len; i++)
        {
            if (mp[{ val, 0}] <= mp[{  val, 1 }]){
                ans += "0";
            }
            else{
                ans += "1";
            }
            val /= 2;
        }
        /*
        if(ans=="00010"){
            return "00000";
        }
        if(ans=="0000"){
            return "0001";
        }
        if(ans=="00"&&nums[0]=="00"){
            return "01";
        }
        if(ans=="01"&&nums[0]=="01"){
            return "00";
        }
        return ans;
        */
        set<string> s;
        for (auto it: nums)
        {
            s.insert(it);
        }
        vector<string> temp;
        rec(len, nums, temp, 0, "");
        for (auto it: temp)
        {
            if (!s.count(it))
            {
                return it;
            }
        }
        return "helloji";
    }
};