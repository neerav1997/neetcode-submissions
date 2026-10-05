class MyHashMap {
private: vector<pair<int, int>> map;
public:
    MyHashMap() { 
    }
    
    void put(int key, int value) {
        for(pair<int, int>& p : map) {
            if(p.first == key) {
                p.second = value;
                return;
            }
        }
        map.push_back({key, value});
    }
    
    int get(int key) {
        for(pair<int, int>& p : map) {
            if(p.first == key) {
                return p.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int i = 0;
        for(pair<int, int>& p : map) {
            if(p.first == key) {
                map.erase(map.begin() + i);
            }
            i++;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */