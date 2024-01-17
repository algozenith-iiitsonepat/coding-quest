class RandomizedSet
{
private:
    vector<int> v;
    unordered_map<int, int> mp;

public:
    RandomizedSet()
    {
    }

    bool getNumber(int val)
    {
        if (mp.find(val) != mp.end())
        {
            return true;
        }

        return false;
    }

    bool insert(int val)
    {
        if (getNumber(val))
        {
            return false;
        }

        v.push_back(val);
        mp[val] = v.size() - 1;
        return true;
    }

    bool remove(int val)
    {
        if (getNumber(val))
        {
            auto it = mp.find(val);

            int index = it->second;

            v[index] = v.back();
            v.pop_back();

            mp[v[index]] = index;
            mp.erase(val);

            return true;
        }

        return false;
    }

    int getRandom()
    {
        int ri = rand() % v.size();
        return v[ri];
    }
};