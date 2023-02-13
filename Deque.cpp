#include<bits/stdc++.h>
using namespace std;
int main()

{
    //deque is vary similar to vector;

    // declaration of deque;

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);


    //print the deque using size() and at() function;


    cout<<"The deque element are : "<<endl;
     for(int i=0; i<dq.size(); i++ )
     {
         cout<<dq.at(i)<<" " ;  // dq[i] ;
     }
     cout<<endl<<endl;


     //using push_front() function to put element in the font of deque;

     cout<<"After insert some element using push_front() function, the deque is : "<<endl;
     dq.push_front(0);
      for(int i=0; i<dq.size(); i++ )
     {
         cout<<dq.at(i)<<" " ;  // dq[i] ;
     }
     cout<<endl<<endl;


     // print the first element in the deque using front() function;

     cout<<"The front element is : "<<endl;
     cout<<dq.front()<<endl<<endl;

      // print the last element in the deque using back() function;

      cout<<"The back element is : "<<endl;
      cout<<dq.back()<<endl<<endl;


      // deleting front element using pop_front() function;

      cout<<"After deleting front element the deque is : "<<endl;
      dq.pop_front();
      for(int i=0; i<dq.size(); i++ )
     {
         cout<<dq.at(i)<<" " ;  // dq[i] ;
     }
     cout<<endl<<endl;


    // deleting back element using pop_back() function;

      cout<<"After deleting back element the deque is : "<<endl;
      dq.pop_back();
      for(int i=0; i<dq.size(); i++ )
     {
         cout<<dq.at(i)<<" " ;  // dq[i] ;
     }
     cout<<endl<<endl;


     // checking deque empty or not;

     cout<<"checking deque empty or not :"<<endl;
     dq.clear();   //clearing  the deque

     if(dq.empty())
        cout<<"Deque is empty;"<<endl<<endl;
     else
        cout<<"Deque is not empty;"<<endl<<endl;

      // inserting new element in the deque

      dq.push_back(1);
      dq.push_back(2);
      dq.push_back(3);
      dq.push_back(4);
      dq.push_back(5);


       //erase element using erase() function through iterator

       deque<int>::iterator it,it2;

        it = dq.begin()+3;
        it2 = dq.end();
        dq.erase(it,it2);

    cout<<"After erasing the deque is :"<<endl;
        for(int i=0; i<dq.size(); i++ )
     {
         cout<<dq.at(i)<<" " ;  // dq[i] ;
     }
     cout<<endl<<endl;

     // use of insert() function;

     it = dq.begin()+3;

     dq.insert(it,2,4);
     cout<<"after inserting 4 in position 4 for 2 times, the deque is :"<<endl;
     for(int i=0; i<dq.size(); i++ )
     {
         cout<<dq.at(i)<<" " ;  // dq[i] ;
     }
     cout<<endl<<endl;


}
