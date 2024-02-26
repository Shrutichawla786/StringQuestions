Q.Wildcard string matching
link-->https://www.geeksforgeeks.org/problems/wildcard-string-matching1126/1
code-->bool solve( int i , int j , string& wild , string & pattern){
        if(i<0 && j<0){
            return true;
        }
        if(i<0 && j>=0){
            return false;
        }
        if(i>=0 && j<0){
            for(int p=0;p<=i;p++){
                if(wild[p]!='*'){
                    return false;
                }
            }
            return true;
        }
        if(wild[i]==pattern[j] || wild[i]=='?'){
            return solve(i-1 , j-1 , wild , pattern);
        }
        if(wild[i]=='*'){
            return solve(i , j-1 , wild , pattern)| solve(i-1 , j , wild , pattern);
            
        }
        return false;
    }
    bool match(string wild, string pattern)
    {
        // code here
        int n= wild.length();
        int m= pattern.length();
        return solve(n-1 , m-1 , wild , pattern);
        
    }
Expected Time Complexity: O(length of wild string * length of pattern string)
Expected Auxiliary Space: O(length of wild string * length of pattern string)
