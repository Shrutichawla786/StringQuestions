Q.Reverse each word in a given string
linnk-->https://www.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1
code->string reverseWords (string s)
    {
        //code here.
        string ans="";
        string temp="";
        int n= s.length()-1;
        int i=0;
        while(i<=n){
            if(s[i]=='.'){
                reverse(temp.begin() , temp.end());
                ans=ans+temp;
                ans=ans+'.';
                temp="";
                i++;
            }
            else{
                temp=temp+s[i];
                i++;
            }
        }
        reverse(temp.begin() , temp.end());
        ans= ans+temp;
        return ans;
    }

Expected Time Complexity:O(|S|).
Expected Auxiliary Space:O(|S|).
