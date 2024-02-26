Q.Transform String
link-->https://www.geeksforgeeks.org/problems/transform-string5648/1
code-->int transform (string A, string B)
    {
        //code here.
        unordered_map<char , int>mp;
        for(int i=0;i<A.length();i++){
            mp[A[i]]++;
        }
        for(int j=0;j<B.length();j++){
            mp[B[j]]--;
        }
        int count=0;
        int n=A.length()-1;
        int m= B.length()-1;
        for(auto it:mp){
            if(it.second!=0){
                return -1;
            }
        }

            while(n>=0 && m>=0){
                while(n>=0 && A[n] !=B[m]){
                    count++;
                    n--;
                }
                n--;
                m--;
                
            }
        return count;
    }
Expected Time Complexity: O(N) where N is max(length of A, length of B) 
Expected Auxiliary Space: O(N)  
