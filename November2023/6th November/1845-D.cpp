/*
We create a set and with reserve the smalles value with the help of s.begin(). It basically
returns the smallest unreserved seat and when we have to unreserve the seat we will insert
it back to the set.
*/
class SeatManager
{
    public:
        set<int> s;
    SeatManager(int n)
    {

        for (int i = 1; i <= n; i++)
        {
            s.insert(i);
        }
    }

    int reserve()
    {
        int value = *s.begin();
        s.erase(s.begin());
        return value;
    }

    void unreserve(int seatNumber)
    {
        s.insert(seatNumber);
    }
};

/**
 *Your SeatManager object will be instantiated and called as such:
 *SeatManager* obj = new SeatManager(n);
 *int param_1 = obj->reserve();
 *obj->unreserve(seatNumber);
 */