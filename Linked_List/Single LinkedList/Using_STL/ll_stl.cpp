// Online C++ compiler to run C++ program online
#include <iostream>
#include <list>
using namespace std;

void printList(list<int> ll){           //function to print the elements of the list
    list<int>:: iterator itr;                         //iterator is used to traverse the list
    for(itr=ll.begin();itr!=ll.end();itr++){             //begin() returns an iterator to the first element of the list
                                                              //end() returns an iterator to the element following the last element of the list
        cout<<(*itr)<<" ->";             //
    }
    cout<<"NULL"<<"\n";
}


int main() {
   
   list<int> ll;
   
   ll.push_front(3);   
   ll.push_front(2);   //push_front adds an element at the front of the list
  ll.push_front(1);
   ll.push_back(4);  //push_back adds an element at the end of the list
   ll.pop_front();     //pop_front removes the first element of the list
   ll.pop_back();         //pop_back removes the last element of the list
   printList(ll);
   cout<<"Size is : "<<ll.size()<<endl;    //returns the number of elements in the list
   cout<<"Head is : "<<ll.front()<<endl;            //returns the first element of the list
   cout<<"tail is : "<<ll.back()<<endl;      //returns the last element of the list
   

    return 0;
}