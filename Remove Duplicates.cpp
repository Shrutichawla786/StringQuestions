Q.Remove Duplicates
link-->https://www.geeksforgeeks.org/problems/remove-duplicates3034/1
code->string removeDups(string S) 
	{
	    // Your code goes here
	    string ans="";
	    set<char>st;
	    for(int i=0;i<S.length();i++){
	        if(st.find(S[i])==st.end()){
	            st.insert(S[i]);
	            ans.push_back(S[i]);
	        }
	    }
	    return ans;
	}
Expected Time Complexity: O(|s|)
Expected Auxiliary Space: O(S)
