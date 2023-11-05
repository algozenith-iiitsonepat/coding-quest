/*  
  If k is greater than the size of the array then only the maximum element will win.
  We take set of all indexes.
  
  We take two pointers i and j represeting the two elements which we are comparing if the ith element
  is greater than the jth element then we increase its frequency by one. If at any time it becomes k 
  we simply return that element. 
  
  We erase the element which is smaller at a particular iteration then we use set to find the next index 
  for comparision.
  
*/
class Solution
{
    public:
        int getWinner(vector<int> &arr, int k)
        {
            if (k >= arr.size())
            {
                return* max_element(arr.begin(), arr.end());
            }
            else
            {
                map<int, int> mp;
                int i = 0, j = 1;
                int n = arr.size();
                set<int> s;
                for (int i = 0; i < n; i++)
                {
                    s.insert(i);
                }
                while (i < n && j < n)
                {
                    if (arr[i] > arr[j])
                    {
                        mp[arr[i]]++;
                        if (mp[arr[i]] == k)
                        {
                            return arr[i];
                        }
                        s.erase(j);
                        s.erase(i);
                        j = *s.begin();
                    }
                    else
                    {
                        mp[arr[j]]++;
                        if (mp[arr[j]] == k)
                        {
                            return arr[j];
                        }
                        s.erase(j);
                        s.erase(i);
                        i = *s.begin();
                    }
                }
            }
            return* max_element(arr.begin(), arr.end());
        }
};