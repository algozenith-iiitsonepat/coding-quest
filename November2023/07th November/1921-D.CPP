class Solution
{
    public:
        /*We will sort the vector according to time i.e. We will be sorting monster according to their arrival time towards point 0 */
        static bool cmp(pair<int, int> &p1, pair<int, int> &p2)
        {
            double a = p1.first / (p1.second *1.0);
            double b = p2.first / (p2.second *1.0);
            return a < b;
        }
    int eliminateMaximum(vector<int> &dist, vector<int> &speed)
    {
        vector<pair<int, int>> p;
        int n = dist.size();
        for (int i = 0; i < n; i++)
        {
            p.push_back({ dist[i],
                speed[i] });
        }
        sort(p.begin(), p.end(), cmp);
        for (int i = 0; i < n; i++)
        {
           	// dist=speed*time;
           	// Here i represents the time, p[i].first represents the distance and p[i].second represents the speed
            int temp = p[i].first - i *p[i].second;
           	// If at any points we are unable to kill a monster then we simply return i;
            if (temp <= 0)
                return i;
        }
        return n;
    }
};