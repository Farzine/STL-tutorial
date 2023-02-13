#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    /* 1st lesson


    vector<int>g1;
    for(int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout<<"Output of begin and end : "<<endl;
    for(auto i= g1.begin(); i!=g1.end();i++)
        cout<<*i<<" ";//noticed this method carefullay
    cout<<"\n Output of the cbegin and cend : "<<endl;
    for(auto i= g1.cbegin(); i!= g1.cend(); i++)
        cout<<*i<<" ";
    cout<<"\n Output of the rbegin and rend : "<<endl;
    for(auto i= g1.rbegin(); i!= g1.rend(); i++)
        cout<<*i<<" ";
    cout<<"\n Output of the crbegin and crend : "<<endl;
    for(auto i= g1.crbegin(); i!= g1.crend(); i++)
        cout<<*i<<" ";

        */
/*
// lesson 2

vector<int>g1;
for(int i=1; i<=5;i++)
    g1.push_back(i);
cout<<"Size : "<<g1.size()<<endl;
cout<<"Capacity : "<< g1.capacity()<<endl;
cout<<"Max_size : "<<g1.max_size()<<endl;

// resize the vector

g1.resize(4);
cout<<"Size : "<<g1.size()<<endl;

//check if the vector is empty or not

if(g1.empty()== false)
    cout<<"The vector is not empty"<<endl;
else cout<<"The vector is empty"<<endl;

// shrinks the vector

g1.shrink_to_fit();
cout<<"\nVector elements are : \n";
for(auto i= g1.begin(); i!= g1.end(); i++)
    cout<<*i<<" ";

*/

/*

//lesson 3

// element access in vector

vector<int> g1;
for(int i = 1; i <= 10; i++)
    g1.push_back(i*10);
cout<<"\n Reference Operator [g] : g1[2] ="<<" "<<g1[2];
 cout<<"\nat : g1.at(4) = "<<g1.at(4)<<endl;
cout<<"front : g1.front() = "<<g1.front()<<endl;
cout<<"back : g1.back() = "<<g1.back()<<endl;

//pointer to the first element

int *pos = g1.data();
cout<<"\nThe first element is : "<<*pos;

*/

// modifier in vector

vector<int>v;

// fill the array with 10 five times

v.assign(5,10);
cout<<"The vector elements are : ";
for(int i = 0; i< v.size();i++)
    cout<<v[i]<<" ";
// insert 15 to the last position
 v.push_back(15);
 int n = v.size();
 cout<<"\nThe last element is : "<<v[n-1];

 // remove last element

 v.pop_back();
 // print the vector
 cout<<"\nThe vector element are : ";
 for(int i= 0; i< v.size(); i++)
    cout<<v[i]<<" ";

// insert 5 at the begining
v.insert(v.begin(),5);
cout<<"\nThe first element is : "<<v[0];

// remove the first element
v.erase(v.begin());
cout<<"\nThe first element is : "<<v[0];

//insert at the begining

 v.emplace(v.begin(),5);
 cout<<"\n The first element is : "<<v[0];
 // insert 20 at the end
 v.emplace(v.end(),3); // v.empalce_back(3);
 n= v.size();
 cout<<"\n The last element is : "<<v[n-1];

 // erase the vector
 v.clear();
 cout<<"\n Vector size after erase : "<<v.size();

 //two vector to perform swap
 vector<int> v1,v2;
 for(int i= 1; i< 5; i++)
    v1.push_back(i);
for(int i= 5; i< 10; i++)
    v2.push_back(i);

    cout<<"\n Vector 1 is : ";
    for(int i= 0; i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<"\nVector 2 is : ";
    for(int i= 0; i< v2.size(); i++)
        cout<<v2[i]<<" ";
    // swap v1 and v2

    v1.swap(v2);
    cout<<"\n After swap \n vector 1 : ";
    for(int i =0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<"\n Vector 2 : ";
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";



}
