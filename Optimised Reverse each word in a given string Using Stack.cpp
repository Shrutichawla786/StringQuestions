Q.Reverse each word in a given string
link-->https://www.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1
code-->string reverseWords (string s)
    {
        //code here.
        stack<char>ch;
        string temp;
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                ch.push(s[i]);
            }
            else{
                while(!ch.empty()){
                     temp.push_back(ch.top());
                     ch.pop();
                }
               temp.push_back('.');
            }
            
        }
        while(!ch.empty()){
                temp.push_back(ch.top());
                ch.pop();
         }
        return temp;
    }
Expected Time Complexity:O(|S|).
Expected Auxiliary Space:O(|S|).
