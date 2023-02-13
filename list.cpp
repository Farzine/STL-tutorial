#include<bits/stdc++.h>
using namespace std;
int main()
{
    //take input from push_back() function;

    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    //print the element by iterator function;

    cout<<"print the element by iterator function; "<<endl;
    list<int>::iterator it;
    for( it = li.begin(); it!= li.end(); it++)
        cout<<*it<<" ";
    cout<<endl<<endl;

    //print the element using auto iterator;


    cout<<"print the element using auto iterator; "<<endl;
    for( auto it: li)
        cout<<it<<" ";
    cout<<endl<<endl;

    //using push_front we can insert the element from front;


    cout<<"using push_front we can insert the element from front; "<<endl;
    li.push_front(5);
    li.push_front(6);
    li.push_front(7);

    for( auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;


    //printing the first and last element of list;

    cout<<"The first element of the list by using front() function is : "<<endl;
    cout<<li.front()<<endl<<endl;
    cout<<"The last element of the list by using back() function is : "<<endl;
    cout<<li.back()<<endl<<endl;


    //erase first and last element using pop_front() and pop_back() function;

    cout<<"After erasing the first element using pop_front(), the list is now : "<<endl;
    li.pop_front();
    for( auto it: li)
        cout<<it<<" ";
    cout<<endl<<endl;

    cout<<"After erasing the last element using pop_back(), the list is now : "<<endl;
    li.pop_back();
    for( auto it: li)
        cout<<it<<" ";
    cout<<endl<<endl;


    // use size() function to know the size;

    cout<<"The size of the list is : "<<endl;
    cout<<li.size()<<endl<<endl;


    //clear the list using clear() function;

    li.clear();
    cout<<"After clear the list using clear() function the list is : "<<endl;
    for( auto it: li)
        cout<<it<<" ";
    cout<<endl<<endl;

    //checking if the element empty or not using empty function;

    cout<<"Checking if the element empty or not using empty function : "<<endl;
    if(li.empty())
        cout<<"The list is empty"<<endl<<endl;
    else
        cout<<"The list is not empty"<<endl<<endl;


    //Inserting element using insert() , advance() and iterator function;

    cout<<"Inserting element using insert() , advance() and iterator function :"<<endl;
    it = li.begin();
    advance(it,0); //3 is index number;
    li.insert(it,5);  //5 is the value in index 3;

    //insert use push_back() function method to insert element in the list;

    advance(it,1);
    li.insert(it,5,4);  //we can insert 4, 3 times in index 1;
    for(auto it: li)
        cout<<it<<" ";
    cout<<endl<<endl;

    //remove element using erase() function;

    cout<<"after erasing index 3 element by erase function then the remain list is :"<<endl;
    advance(it, 3); //3 is index number
    li.erase(it);
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;


    //erasing multiple value using erase and iterator dunction;

    cout<<"After erasing index 0 to 3 element, the remaining list is : "<<endl;
    list<int>::iterator it2;
    it =li.begin();
    it2 = li.begin();
    advance(it2,3);
    li.erase(it, it2);
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;


    //romove list element using remove() function;


    cout<<"After removing 4 from the list using remove() function : "<<endl;
    li.remove(4);  //4 is not the index here, 4 is the index value or element, if there are multiple 4 , it can also remove those;
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;

    li.remove(5);  //clear the list

    li ={1,2,3,4,5,6}; //taking new element into the list;

    // reverse the list using reverse() function;


    cout<<"After reversing th list, the list is : "<<endl;
    li.reverse();
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;

    li.clear(); // clear the list;

    li={6,2,1,5,3,4}; //taking new list element;

    // sorting the list using sort() function;

    cout<<"After sorting the list using sort() function : "<<endl;
    li.sort();
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;


    // unique function work;

    it = li.begin();
    advance(it,3);
    li.insert(it,4,3);
    cout<<"The list is : "<<endl;
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;

    cout<<"After using unique function the list is : "<<endl;
    li.unique(); //pasa pasi same number thakle sekhan theke shudhu 1 ta number nei
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;


    //swap one list to another using swap;

    list<int> li2 ={7,8,9,10,11,12};

    cout<<"Before swaping"<<endl;
    cout<<"li list element : "<<endl;
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;
    cout<<"li2 list element :"<<endl;
    for(auto it : li2)
        cout<<it<<" ";
    cout<<endl<<endl;

    li.swap(li2);

    cout<<"After swaping"<<endl;
    cout<<"li list element : "<<endl;
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;
    cout<<"li2 list element :"<<endl;
    for(auto it : li2)
        cout<<it<<" ";
    cout<<endl<<endl;

    // merge function;

    cout<<"After merging li2 to li the list is : "<<endl;
    li.merge(li2); // 2 ta list jkhn merge korbo tokhn seta sorted akare merge hobe r je list take marge korbo seta clear hoye jabe;
    for(auto it : li)
        cout<<it<<" ";
    cout<<endl<<endl;

  return 0;


  // complete the list tutorial of list in stl;

}
