class FoodRatings {
public:
    unordered_map<string,set<pair<int,string>>>mp;
    unordered_map<string,int>m;
    unordered_map<string,string>m2;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n=foods.size();
        for(int i=0;i<n;i++){
            mp[cuisines[i]].insert({-ratings[i],foods[i]});
            m[foods[i]]=ratings[i];
            m2[foods[i]]=cuisines[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        string temp=m2[food];
        auto &it=mp[temp];
        int currating=m[food];
        if(currating==newRating){
            return ;
        }
        it.erase({-currating,food});
        it.insert({-newRating,food});
         m[food]=newRating;
        
    }
    
    string highestRated(string cuisine) {
        return mp[cuisine].begin()->second;
       
       
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */