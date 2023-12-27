class Solution {
public:
    bool isPathCrossing(string path) {
       set<pair<int,int>>s;
        s.insert({0,0});
        pair<int,int>p={0,0};
        for(auto it:path){
            
            if(it=='N'){
                if(s.count({p.first,p.second+1})){
                    return 1;
                }
                s.insert({p.first,p.second+1});
                p.second++;
                
            }
            if(it=='E'){
                if(s.count({p.first+1,p.second})){
                    return 1;
                }
                s.insert({p.first+1,p.second});
                p.first++;
                
            }
            if(it=='S'){
                if(s.count({p.first,p.second-1})){
                   
                    return 1;
                }
                s.insert({p.first,p.second-1});
                p.second--;
                
            }
            if(it=='W'){
               if(s.count({p.first-1,p.second})){
                   
                    return 1;
                }
                s.insert({p.first-1,p.second});
                p.first--;
                
            }
            
        }
        return 0;
    }
};