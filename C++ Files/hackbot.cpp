#include <bits/stdc++.h>
using namespace std;
string input;
stack<char> operate;
vector<int> rpn;
int main()
{
    cin >> input;
    // make a reverse polish notation in vector rpn
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '[')
        {
            operate.push(input[i]);
        }
        else if (input[i] == ']')
        {

            while (operate.top() != '[')
            {

                rpn.push_back(operate.top() - '0');
                operate.pop();
            }
            // pop out '['
            operate.pop();
        }
        else if (input[i] == '1' || input[i] == '2' || input[i] == '3')
        {

            if (operate.empty() || operate.top() == '[')
            {
                operate.push(input[i]);
                continue;
            }

            if (input[i] < operate.top())
            {
                rpn.push_back(operate.top() - '0');
                operate.pop();
            }
            operate.push(input[i]);
        }
        else
        {
            rpn.push_back(20);
        }
    }
    while (!operate.empty())
    {
        rpn.push_back(operate.top() - '0');
        operate.pop();
    }
    int index = 0;
    int temp;
    while (rpn.size() > 2)
    {
        index++;
        if (rpn[index] == 1)
        {
            temp = (rpn[index-1] + rpn[index-2]) * 1.04;
            rpn.erase(rpn.begin()+ index-2,rpn.begin() + index);
            rpn.insert(rpn.begin() + index,temp);
            index = 0;
        }else if (rpn[index] == 2)
        {
            temp = (rpn[index-1] + rpn[index-2]) * 1.08;
            rpn.erase(rpn.begin()+ index-2,rpn.begin() + index);
            rpn.insert(rpn.begin() + index,temp);
            index = 0;
        }else if (rpn[index] == 3)
        {
            temp = (rpn[index-1] + rpn[index-2]) * 1.16;
            rpn.erase(rpn.begin()+ index-2,rpn.begin() + index);
            rpn.insert(rpn.begin() + index,temp);
            index = 0;
        }
       
        
    }
    cout << *rpn.begin()   ;
}