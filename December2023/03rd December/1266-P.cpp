class Solution
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        int tt = 0;
        int x = 0;
        int y = 1;

        if (points.size() == 1 || 0)
        {
            return tt;
        }

        for (int i = 0; i < points.size() - 1; i++)
        {
            int timeNeededX = abs(points[i][x] - points[i + 1][x]);
            int timeNeededY = abs(points[i][y] - points[i + 1][y]);

            tt = tt + max(timeNeededX, timeNeededY);
        }

        return tt;
    }
};