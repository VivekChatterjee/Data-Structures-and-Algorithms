class Solution {
public:
    // a to z = 97 to  122
    // A to Z = 65 to 90
    // string makeGood(string s) {
    //     int n=s.size();
    //     for(int i=0; i<n-1; i++)
    //     {
    //         if(s[i]>=97)
    //         {
    //             if(s[i]-'a' == s[i+1]-'A')
    //             {
    //                 s.erase(s.begin()+i);
    //                 s.erase(s.begin()+i);
    //                 if(i!=0) i-=2;
    //                 else i--;
    //             }
    //         }
    //         else
    //         {
    //             if(s[i]-'A' == s[i+1]-'a')
    //             {
    //                 s.erase(s.begin()+i);
    //                 s.erase(s.begin()+i);
    //                 if(i!=0) i-=2;
    //                 else i--;
    //             }
    //         }
    //     }
    //     return s;
    
    string makeGood(string s) {
        int i=0;
        while(i<(int)s.size()-1)
        {
            // cout<<i<<" "<<s.size()<<endl;
            if(abs(s[i+1]-s[i]) == 32)
            {
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                if(i!=0)
                   i--;
            }
            else
            {   
                i++;
            }
        }
        return s;
    
    }
};