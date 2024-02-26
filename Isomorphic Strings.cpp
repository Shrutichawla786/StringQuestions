Q.Isomorphic Strings
link-->https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1
code-->bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int n1= str1.length();
        int n2= str2.length();
        if(n1!=n2){
            return false;
        }
        int m1[256]={};
        int m2[256]={};
        for(int i=0;i<n1;i++){
            if(!m1[str1[i]] && !m2[str2[i]]){
                m1[str1[i]]=str2[i];
                m2[str2[i]]=str1[i];
            }
            else if( m1[str1[i]]!= str2[i]){
                return false;
            }
        }
        return true;
        
    }
Expected Time Complexity: O(|str1|+|str2|).
Expected Auxiliary Space: O(Number of different characters).
