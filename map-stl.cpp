#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    /*
     Some basic functions associated with Map:

      begin() = Returns an iterator to the first element in the map.
      end() = Returns an iterator to the theoretical element that follows the last element in the map.
      size()  = Returns the number of elements in the map.
      max_size() = Returns the maximum number of elements that the map can hold.
      empty() = Returns whether the map is empty.
      pair insert(keyvalue, mapvalue) = Adds a new element to the map.
      erase(iterator position) = Removes the element at the position pointed by the iterator.
      erase(const g)= Removes the key-value ‘g’ from the map.
      clear() = Removes all the elements from the map.
      */
      map<string, int> m;  // create a map string to integer
      // inserting some value into the map
      m["one"] = 1;
      m["two"] = 2;
      m["three"] = 3;
       //get an iterator  to access the map element
       map<string,int>::iterator it = m.begin();
       while(it!=m.end())
       {
           cout<<(*it).first<<" "<<(*it).second<<endl; // or, cout << it->first << " "<< it->second <<endl;
           it++;
       }
      /*
      output :
          one 1
          three 3
          two 2
        */

        // Print the values in the map
        cout << "Key: one, Value: " << m["one"] << endl;
        cout << "Key: two, Value: " << m["two"] << endl;
        cout << "Key: three, Value: " << m["three"] <<endl;

        /* output :
            Key: one, Value: 1
            Key: two, Value: 2
            Key: three, Value: 3
        */

         // Check if a key is in the map
        if (m.count("four") > 0)
        {
            cout <<"Key 'four' is in the map" << endl;
        }
        else
        {
            cout <<"Key 'four' is not in the map" << endl;
        }

        // output : Key 'four' is not in the map

       cout<<m.size()<<endl; // print the size of map, output= 4
       map<int , int>m1; // empty map container
       //insert elements in random order
       m1.insert(pair<int ,int>(1,40));
       m1.insert(pair<int ,int>(2,30));
       m1.insert(pair<int ,int>(3,60));
       m1.insert(pair<int ,int>(5,20));
       m1.insert(pair<int ,int>(4,50));
       m1.insert(pair<int ,int>(6,50));

       m1[7]=10; // another way of inserting a value in a map  || 7 is key and 10 is value
       // printing map m1
       map<int, int>::iterator itr;
    cout << "\nThe map m1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = m1.begin(); itr != m1.end(); ++itr)
        {
        cout << '\t' << itr->first << '\t' << itr->second<< '\n';
        }
    /* output :
        The map m1 is :
        KEY     ELEMENT
        1       40
        2       30
        3       60
        4       50
        5       20
        6       50
        7       10
        */
        // assigning the elements from m1 to m2
        map<int, int> m2(m1.begin(), m1.end());

        // remove all elements up to element with key=3 in m2

       cout << "\n m2 after removal of elements less than key=3 : \n";

       cout << "\t KEY \tELEMENT \n";

       m2.erase(m2.begin(), m2.find(3));
       for (itr = m2.begin(); itr != m2.end(); ++itr)
        {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
        }

       /* output :
          m2 after removal of elements less than key=3 :
         KEY    ELEMENT
        3       60
        4       50
        5       20
        6       50
        7       10
       */
       // remove all elements with key = 4
       int num;
       num = m2.erase(4);
       cout << "\n m2.erase(4) : ";
       cout << num << " removed \n";
       cout << "\t KEY \t ELEMENT \n";
       for (itr = m2.begin(); itr != m2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second<< '\n';
       }
       /* output :
        m2.erase(4) : 1 removed
        KEY    ELEMENT
          3    60
          5    50
          6    50
          7    10
        */
        // lower bound and upper bound for map m1 key = 5
         cout << "m1.lower_bound(5) : "<< "\t KEY = ";
         cout << m1.lower_bound(5)->first << '\t';
         cout << "\t ELEMENT = " << m1.lower_bound(5)->second<< endl;
         cout << "m1.upper_bound(5) : "<< "\t KEY = ";
         cout << m1.upper_bound(5)->first << '\t';
         cout << "\t ELEMENT = " << m1.upper_bound(5)->second<< endl;
        /* output:
          m1.lower_bound(5) :     KEY = 5        ELEMENT = 50
          m1.upper_bound(5) :     KEY = 6        ELEMENT = 50
        */


        // Take any two maps
        map<int, char> map1;
        map<char, int> map2;

        map1[1] = 'a';
        map1[2] = 'b';
        map1[3] = 'c';
        map1[4] = 'd';

        map2['w'] = 1;
        map2['y'] = 2;
        map2['z'] = 3;

        // Print the associated element
        cout << "Element at map1[2] = "<< map1.at(2) << endl;

        cout << "Element at map2['w'] = "<< map2.at('w') << endl;
        /* output :
            Element at map1[2] = b
            Element at map2['w'] = 1
        */

        /*
        for swaping two map:
        map1.swap(map2)
       OR
        swap(map1, map2)
        */


        /* insert () function in map :

           // insert elements in random order
          mp.insert({ 2, 30 });
          mp.insert({ 1, 40 });

          // inserts all elements in range
          // [begin, end) in mp1

          mp1.insert(mp.begin(), mp.end());
          */

          /* for find() function

          // Insert elements in random order
        m.insert({ 2, 30 });
        m.insert({ 1, 40 });
        m.insert({ 3, 20 });
        m.insert({ 4, 50 });

        int s1=2; //element1 to find (exist in the map)
        int s2=5; //element2 to find (does not exist in the map)

        cout << "Element "<<s1;
        if(m.find(s1)!=m.end())
            {
                //if the element is found before the end of the map
                cout<<" : found : Value : "<<m[s1]<<endl;
                //if the element is present then you can access it using the index
            }
        else cout<<" : Not found"<<endl;
        */

        /* for "=" operator:

            // insert elements in random order
        mp.insert({ 2, 30 });
        mp.insert({ 1, 40 });
        mp.insert({ 4, 50 });

        // = operator is used to copy map
        copymp = mp;  // map mp' value is copied in copymp
        */

   return 0;
}
