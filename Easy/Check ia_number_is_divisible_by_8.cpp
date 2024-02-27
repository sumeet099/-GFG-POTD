//https://www.geeksforgeeks.org/problems/check-if-a-number-is-divisible-by-83957/

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        if(s.size()>=4){
            string str = s.substr(s.size()-4);
            return stoi(str) % 8 ==0 ? 1: -1;
        }
        else{
            return stoi(s) % 8==0 ? 1: -1;
        }
    }
};

// Time Complexity - O(1);
// Space Complexity - O(1);
