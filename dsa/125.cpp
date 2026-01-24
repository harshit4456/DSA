// Valid palindrome

class Solution {
    private:
    bool faltunikalo(char s){
    if((s>='A'&&s<='Z')||(s>='a'&&s<='z')||(s>='0'&&s<='9')){
        return 1;
    }
    else return 0;
}
char tolowercase(char s){
    if((s>='a'&&s<='z')||(s>='0'&&s<='9')){
        return s;}
        else{
            char temp=s-'A'+'a';
            return temp;
        }
        
}
bool checkpalendrom(string s){
    int st=0;
    int end=s.length()-1;
    while(st<=end){
        if(s[st]!=s[end]){
            return false;
        }
        else{
            st++;
            end--;
        }
        
    }
    return true;
}
public:

    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(faltunikalo(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.length();i++){
            temp[i]=tolowercase(temp[i]);
        }
        return checkpalendrom(temp);
    }
};
