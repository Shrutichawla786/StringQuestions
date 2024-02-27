Q.Substrings with same first and last characters
link-->https://www.geeksforgeeks.org/problems/substrings-with-similar-first-and-last-characters3644/1
code->int countSubstringWithEqualEnds(string s)
	{
	    // Your code goes here
	    int count=0;
	    unordered_map<char , int>mp;
	    for(auto it : s){
	        mp[it]++;
	        count+=mp[it];
	    }
	    return count;
	}
};

Expected Time Complexity: O(|str|)
Expected Auxiliary Space: O(|str|)
