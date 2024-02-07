Q.Reverse words in a given string

link->https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
code-> string reverseWords(string s) 
    { 
        // code here 
        string ans="";
        string temp="";
        int i=s.length()-1;
        while(i>=0){
            if(s[i]=='.'){
                reverse(temp.begin() , temp.end());
                ans= ans+temp;
                ans=ans+'.';
                temp="";
                i--;
            }
            else{
                temp=temp+s[i];
                i--;
            }
        }
        reverse(temp.begin() , temp.end());
        ans= ans+temp;
        return ans;
    } 

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(1)
