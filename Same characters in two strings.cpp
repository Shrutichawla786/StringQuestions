Q.Same characters in two strings
link-->https://www.geeksforgeeks.org/problems/c-corresponding-position-in-the-two-strings-that-hold-exactly-the-same-characters5013/1
code->int sameChar(string A, string B)
    {
        // code here 
        int count=0;
        for(int i=0;i<A.length();i++){
            if(tolower(A[i])==tolower(B[i])){
                count++;
            }
        }
        return count;
    }
};
Expected Time Complexity: O(N) where N is the length of strings A and B.
Expected Auxiliary Space: O(1)
