class Solution {
public:
    int maxDiff(int num) {
        stack<int>st1,st2;
        int w=num;
        int x;
        while(num>0)
        {
            x=num%10;
            st1.push(x);
            st2.push(x);
            num/=10;
        }
        int p=-6,q=-7;
        int count=0;
        while(!st1.empty())
        {
            if(st1.top()!=9)
            {
                p=st1.top();
                break;
            }
            st1.pop();
        }
        while(!st2.empty())
        {
            count++;
            if(st2.top()!=1 && st2.top()!=0)
            {
                q=st2.top();
                break;
            }
            st2.pop();
        }
        num=w;
        string first,second;
      
        while(num>0)
        {
           int z=num%10;
            if(z==p)
            {
                first='9'+first;
            }
            else
            {
                first=to_string(z)+first;
            }
            num/=10;
        }
        num=w;
         while(num>0)
        {
           int z=num%10;
            if(z==q)
            {
               if(count==1)
               {
                second='1'+second;
               }
               else
               {
                second='0'+second;
               }
            }
            else
            {
                second=to_string(z)+second;
            }
            num/=10;
        }
      int one=stoi(first);
      int two=stoi(second);
       return one-two;
    }
};