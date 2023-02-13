#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declaring string

    string str;

     // Taking string input using getline()

    getline(cin,str);  //This function is used to store a stream of characters as entered by the user in the object memory.

   // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

     // Inserting a character
    str.push_back('s');   // This function is used to input a character at the end of the string

    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Deleting a character
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    // Initializing string
    string str1 = "geeksforgeeks is for geeks";

    // Displaying string
    cout << "The initial string is : ";
    cout << str1 << endl;

     // Resizing string using resize()
    str1.resize(13);     //This function changes the size of the string, the size can be increased or decreased.

    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str1 << endl;

    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str1.capacity() << endl;  // This function returns the capacity allocated to the string, which can be equal to or more than the size of the string

   // Displaying length of the string
    cout << "The length of the string is :" << str1.length()
         << endl;

  // Decreasing the capacity of string
    // using shrink_to_fit()
    str1.shrink_to_fit();     //This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters has to be made.

   // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str1.capacity() << endl;

    // Initializing string`
    string str2 = "geeksforgeeks";

     // Declaring iterator
    std::string::iterator it;

    // Declaring reverse iterator
    std::string::reverse_iterator it1;
    cout<<"Str:"<<str2<<"\n";

    // Displaying string
    cout << "The string using forward iterators is : ";
    for (it = str2.begin(); it != str2.end(); it++){
        if(it == str2.begin()) *it='G';
        cout << *it;
    }
    cout << endl;

    str2 = "geeksforgeeks";

    // Displaying reverse string
    cout << "The reverse string using reverse iterators is "
            ": ";
    for (it1 = str2.rbegin(); it1 != str2.rend(); it1++){
        if(it1 == str2.rbegin()) *it1='S';
        cout << *it1;
    }
    cout << endl;

     str2 = "geeksforgeeks";

     //Displaying String
  cout<<"The string using constant forward iterator is :";
  for(auto it2 = str2.cbegin(); it2!=str2.cend(); it2++){
        //if(it2 == str.cbegin()) *it2='G';
        //here modification is NOT Possible
        //error: assignment of read-only location
        //As it is a pointer to the const content, but we can inc/dec-rement the iterator
        cout<<*it2;
  }
  cout<<"\n";

   str2 = "geeksforgeeks";
  //Displaying String in reverse
  cout<<"The reverse string using constant reverse iterator is :";
  for(auto it3 = str.crbegin(); it3!=str.crend(); it3++){
        //if(it2 == str.cbegin()) *it2='S';
        //here modification is NOT Possible
        //error: assignment of read-only location
        //As it is a pointer to the const content, but we can inc/dec-rement the iterator
        cout<<*it3;
  }
  cout<<"\n";

   // Initializing 1st string
    string str11 = "geeksforgeeks is for geeks";

    // Declaring 2nd string
    string str22 = "geeksforgeeks rocks";

    // Declaring character array
    char ch[80];

    // using copy() to copy elements into char array
    // copies "geeksforgeeks"
    str11.copy(ch, 13, 0);    //This function copies the substring in the target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied, and starting position in the string to start copying.

    // Displaying char array
    cout << "The new copied character array is : ";
    cout << ch << endl;

     // Displaying strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str11 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str22 << endl;

    // using swap() to swap string content
    str11.swap(str22);

    // Displaying strings after swapping
    cout << "The 1st string after swapping is : ";
    cout << str11 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << str22 << endl;

    return 0;

}
