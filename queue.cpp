#include<bits/stdc++.h>
using namespace std;
int main()
{

    // declaration of queue;

    queue<int>q;

    // input element using push() function;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // print the size
     cout<<"The size of the queue is : "<<endl<<q.size()<<endl<<endl;

     // checking queue empty or  not ;

     cout<<"Check the queue empty or not :"<<endl;
     if(q.empty()) cout<<"The queue is empty!"<<endl<<endl;
     else cout<<"The queue is not empty!"<<endl<<endl;


     // print front element using front() function;


     cout<<"The front element is :"<<endl<<q.front()<<endl<<endl;


     // print back element using back() function;


     cout<<"The back element is :"<<endl<<q.back()<<endl<<endl;

    // use of pop() function;

    q.pop();
    cout<<"After poping the front element is :"<<endl<<q.front()<<endl<<endl;

    // printing the queue

    cout<<"Now the queue element are :"<<endl;
    while(!q.empty())  // (q.size()>0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl<<endl;


    // inputing element using emplace() function

    q.emplace(1);
    q.emplace(2);
    q.emplace(3);


    queue<int>q1;

    q1.push(5);
    q1.push(6);
    q1.push(7);
    q1.push(8);

    //swaping the q and q1 queue

    q.swap(q1);

     cout<<"After swaping the q queue element are :"<<endl;
     while(q.size()>0)
     {
         cout<<q.front()<<" ";
         q.pop();
     }
     cout<<endl<<endl;

     cout<<"After swaping the q1 queue element are :"<<endl;
     while(q1.size()>0)
     {
         cout<<q1.front()<<" ";
         q1.pop();
     }
     cout<<endl<<endl;


}
