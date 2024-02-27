Q.Find first repeated character
link-->https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1
code-->string firstRepChar(string s)
{
    //code here.
    string ans="";
    unordered_map<char , int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
        if(mp[s[i]]>1){
            ans.push_back(s[i]);
            return ans;
        }
    }
    return "-1";
}
Expected Time Complexity: O(|S|) 
Expected Auxiliary Space: O(S)
