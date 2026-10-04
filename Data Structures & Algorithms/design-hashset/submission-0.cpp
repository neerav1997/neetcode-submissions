class MyHashSet {
private:
 vector<int> keySet;
public:
    MyHashSet() {    
    }
    
    void add(int key) {
        if(!contains(key))
        keySet.push_back(key);
    }
    
    void remove(int key) {
        for(int i =0 ; i<keySet.size(); i++) {
            if(keySet[i] == key) {
                keySet.erase(keySet.begin() + i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        for(const int& k : keySet) {
            if(k == key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */