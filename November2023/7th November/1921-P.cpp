class Solution
{
public:
    int eliminateMaximum(vector<int> &dist, vector<int> &speed)
    {
        int n = dist.size();

        // CALCULATE TIME NEEDED FOR EACH MONTER TO REACH CITY
        for (int i = 0; i < n; i++)
        {
            dist[i] = ceil(dist[i] / (double)speed[i]);
        }

        // SORT ACCORDING TO WHICH MONSTER WILL REACH CITY FIRST
        sort(dist.begin(), dist.end());

        // TRACK OF TIME ELASPSED
        int i = 0;

        // CHECK FOR EACH MONSTER THAT IF TIME ELASPED IS MORE THAN TIME NEEDED FOR MONSTER TO REACH CITY
        for (int j = 0; j < n; j++)
        {
            if (i >= dist[j])
            {
                // TIME ELASPED > TIME NEEDED TO REACH MONTER TO CITY THEN CITY IS ATTACKED
                return i;
            }
            i++;
        }

        return n;
    }
};