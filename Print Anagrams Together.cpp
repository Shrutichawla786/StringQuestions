Q.Print Anagrams Together
link-->https://www.geeksforgeeks.org/problems/print-anagrams-together/1
code-->vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
       map<string , vector<string>>mp;
        for(int i=0;i<string_list.size();i++){
            string s= string_list[i];
            sort(s.begin() , s.end());
            mp[s].push_back(string_list[i]);
        }
        int ind=0;
        vector<vector<string>>ans(mp.size());
         for(auto x:mp){
            auto v= x.second;
            for(int i =0 ;i<v.size();i++){
                ans[ind].push_back(v[i]);
            }
            ind++;
        }
        return ans;
    }

Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.

