class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;
        int sum=0;
        for(string op:operations)
        {
            if(op!="+" && op!="D" && op!="C")
            {
                int num = stoi(op);
                st.push(num);
                sum+= num;

            }
            else if(op=="C")
            {
                int x= st.top();
                st.pop();
                sum-= x;
            }
            else if(op=="D")
            {
                int x= st.top()*2;
                st.push(x);
                sum += x;
            }
            else
            {
                int first= st.top();
                st.pop();

                int s = first+ st.top();

                st.push(first);
                st.push(s);

                sum+= s;
            }
        }
        return sum;
        
    }
};