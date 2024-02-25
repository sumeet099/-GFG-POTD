//https://www.geeksforgeeks.org/problems/power-set4302/

class Solution{
	public:
	    void f(int i,string &cur,string &s,multiset<string>&st,int n){

	        if(i==n){
	            st.insert(cur);
	            return;
	        }

	        // pick 
          cur.push_back(s[i]);
          f(i+1,cur,s,st,n);
	        cur.pop_back();
	        
	        //not pick
	        f(i+1,cur,s,st,n);
	    }

		vector<string> AllPossibleStrings(string s){
		    // Code here
		    multiset<string> st;
		    int n = s.size();
		    
		    string cur = "";
		    f(0,cur,s,st,n);
		    
		    vector<string> ans;
		    for(auto &x: st)if(x!="")ans.push_back(x);
		    return ans;
		}
};

// Time Complexity - O(2^n * log(2^n))    here n is 16 and under constraint satisfied extra log factor is required for lexiographical order so it is one of good solution
// Space Complexity - O(2^n)
