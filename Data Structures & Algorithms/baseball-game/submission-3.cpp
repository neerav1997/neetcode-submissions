class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> arr;
        for(const string &s : operations) {
            if(s == "+") {
                arr.push_back(arr[arr.size() - 1] + arr[arr.size() - 2]);
            } else if(s == "C") {
                arr.pop_back();
            } else if(s == "D") {
                arr.push_back(arr[arr.size() - 1] * 2);
            } else {
                arr.push_back(stoi(s));
            }
        }
        int summ = 0;
        for(int &i : arr) {
            summ += i;
        }
        return summ;
    }
};