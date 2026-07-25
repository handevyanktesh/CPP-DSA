class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;

        for(char ch:s){
            if(st.empty()) st.push(ch);
            else {
                if(st.top() == ch) {
                    st.pop(); 
                    continue;
                }
                else st.push(ch);
            }
        }
        s.erase();

        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());

        return s;
    }
};