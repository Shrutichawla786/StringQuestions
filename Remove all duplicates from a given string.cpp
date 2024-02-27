Q.Remove all duplicates from a given string
link-->https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1
code-->string removeDuplicates(string str) {
	    // code here
	    set<char>st;
	    string ans="";
	    for(int i=0;i<str.length();i++){
	        if(st.find(str[i])==st.end()){
	            st.insert(str[i]);
	            ans.push_back(str[i]);
	        }
	      
	    }
	    return ans;
	}
};
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
