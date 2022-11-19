#include<bits/stdc++.h>
using namespace std;
int main()
{
    // decleration of stack;

    stack<int>st;

    // input element using push() function;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    //checking stack is empty or not empty using empty function;

    cout<<"hecking stack is empty or not empty : "<<endl;
    if(st.empty())
        cout<<"Empty"<<endl<<endl;
    else
        cout<<"Not Empty"<<endl<<endl;

    //Find number of element using size() function

    cout<<"The size of the stack is : "<<endl<<st.size()<<endl<<endl;

    // using top() function, the last inputed element is the top element

    cout<<"The top or last element of the stack is : "<<endl<<st.top()<<endl<<endl;

    // erase the top element ( the last  element) of the stack using pop() function;


    st.pop();
    cout<<"The stack elements after poping are : "<<endl;
    while(!st.empty())  // (st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }

}
