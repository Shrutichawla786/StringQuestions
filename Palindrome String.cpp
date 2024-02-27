Q.Palindrome String
link-->https://www.geeksforgeeks.org/problems/palindrome-string0817/1
code-->int isPalindrome(string S)
	{
	    // Your code goes here
	    stack<char>s;
	    for(int i=0;i<S.length();i++){
	        s.push(S[i]);
	    }

	    for(int i=0;i<s.size();i++){
	        if(S[i]!=s.top()){
	            return false;
	        }
	        s.pop();
	    }
	    return true;
	}
Expected Time Complexity: O(Length of S)
Expected Auxiliary Space: O(1)
