class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP = 0;
        int pickM = 0;
        int pickG = 0;

        int travelP = 0;
        int travelG = 0;
        int travelM = 0;

        int lastP = 0;
        int lastG = 0;
        int lastM = 0;

       // int cnt=0;
      int cnt=0;
        
        
        for(auto i:garbage) {
           // i string
            
            for(auto it:i){
                 // it represents a character 
           
                if(it =='P') {
                    pickP++;
                    lastP = cnt;
                }
                else if(it =='G') {
                    pickG++;
                    lastG = cnt;
                }
                else if(it == 'M' ) {
                    pickM++;
                    lastM = cnt;
                }

            }
            cnt++;
             }
            
        for(int i=0; i<lastP; i++) {
            travelP += travel[i];
        }

        for(int i=0; i<lastG; i++) {
            travelG += travel[i];
        }

         for(int i=0; i<lastM; i++) {
            travelM += travel[i];
        }

        int ans = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);
        return ans;

       
        
    }
};