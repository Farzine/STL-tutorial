#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declaring priority queue

    priority_queue<int> pq;  // default priority is higher element

    //input element

    for(int i=1; i<=4; i++)
    {
        pq.push(i);
    }

    // checking priority queue empty or not

    if(pq.empty()) cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;

    // print size with size function

    cout<<pq.size()<<endl;

    //  default priority te amra queue te jeta boro element thakbe seta top a thakbe orthat decreasing order

    cout<<pq.top()<<endl; // output = 4

    pq.pop();
    cout<<pq.top()<<endl; // output = 3

    // to get priority queue in increasing we have to initialized the priority queue like below

    priority_queue<int , vector<int>, greater<int> >pq1;
    pq1.push(3);
    pq1.push(4);
    pq1.push(1);
    pq1.push(5);
    pq1.push(2);

    cout<<pq1.top()<<endl;

  // swap() , vector ar moto
  // emplace(), pusher moto

}
