class Solution {
public:
    /*
       We need atleast max(abs(sx-fx),abs(sy-fy)) time to reach the final cell . After that we can reach the final stpes in 
       any number of steps;
       
       There is a special edge case which i missed during the contest if the final and initial points are same and time is 1 then we        can't reach the last point.
    */
  
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
      
       
         int a2=max(abs(sx-fx),abs(sy-fy));
                    
                  if(sx==fx&&sy==fy&&t==1){
                      return false;
                  } 
        return t>=a2;
    }
};