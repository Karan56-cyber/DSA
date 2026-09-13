class Solution {
public:
    bool isPalindrome(int x) {
     int rem,temp=x;
     long long reverse=0;
     if(x<0){
        return false;
        }
     while(x!=0){
        rem=x%10;
        reverse=reverse*10+rem;
        x=x/10;
     }
     if(temp==reverse){
        return true;
     }
     else{
        return false;
     }
    }
};