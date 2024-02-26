Q.Remove Consecutive Characters
link-->https://www.geeksforgeeks.org/problems/consecutive-elements2306/1
code-->string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans="";
        for(int i=0;i<S.length();i++){
            if(S[i]!=S[i+1]){
                ans.push_back(S[i]);
            }
        }
        return ans;
    }
Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(|S|).
