
/*

In today's problem, we need to complete the class SeatManager.
To check the lowest number which is need to be reversed, I used set
where I stored all the elements and if any element is reserved, then
we will delete the element else insert the element.

*/

class SeatManager {
    int n;
    set<int> s;
public:
    SeatManager(int n) {
        this->n=n;
        for(int i=1; i<=n; i++){
            s.insert(i);
        }
    }
    
    int reserve() {
        int x=*s.begin();
        s.erase(s.begin());
        return x;
    }
    
    void unreserve(int seatNumber) {
        s.insert(seatNumber);
    }
};