#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Vectors r containers which are dynamic in nature, i.e u can always increase the size of a vector whenever u wish to . Cant do this in Arrays.
// Vectors are used where u dont know the size of a particular data structure that will be required.

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);// emplace_back is faster than push_back

    vector <pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);// emplace_back automatically identifies 1,2 as a pair, so no need for culry braces.

    vector<int> v(5,100);//{100,100,100,100,100}

    vector<int> v10(5);// container of size 5, filed with garbage values or 0's.
    v10.push_back(1);//{0,0,0,0,0,1}

    vector<int> v1(5,20);// {20,20,20,20,20}

    vector<int> v2(v1);// it is like v2=v1, a copy of v1 is stored inside a new vector v2.


    vector<int>::iterator it = v.begin();// Defining a iterator, 
    // An iterator is a pointer-like object representing an element's position in a container
    // Iterator "it" points to the memory address, where the elememt is present
    //eg: v = {20,10,15,6,7}. here "it" points to v[0].

    it++; // "it" points to v[1].
    cout<<*(it)<<" ";//value at location "it", i.e 10

    it = it + 2; //"it" points to v[3].
    cout<<*(it)<<" ";// prints 6
    

    //Let's consider v = {10,20,30,40}
    vector<int>::iterator it = v.end(); // here "it" points to the memory location just after 40. 

    vector<int>::iterator it = v.rend(); // here "it" points to the memory location just before 10.

    vector<int>::iterator it = v.rbegin(); //here "it" points to the memory location of 40, it++ means it "it" points to 30 now.

    cout<<v[0]<<" "<<v.at(0); // prints 10

    cout<<v.back()<<" "; // prints 40

    // Loop to print the entire vector
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }

    // Loop to print the entire vector using iterator(mostly used)
    for(auto it = v.begin(); it!= v.end(); it++){
        cout<<*(it)<<" ";
    }
    
    // Loop to print the entire vector w/o using iterator here it is a variable, not a iterator
    for(auto it:v){
        cout<<it<<" ";
    }
     
    //{10, 20, 12, 23}
    v.erase(v.begin() + 1);//{10, 12, 23}

    //{10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35} {start, end}, here end is not included

    //Insert Function
    vector<int>v(2,100); // {100,100}
    v.insert(v.begin(), 300); // {300,100,100}
    v.insert(v.begin() +1, 2,10); // {300, 10, 10, 100, 100}

    vector<int>copy(2,50); //{50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50, 50, 300, 10, 10, 100, 100}

    //{10, 20}
    cout<<v.size();//2

    //{10, 20}
    v.pop_back();//{10}

    // v1 --> {10,20}
    // v2 --> {30, 40}
    v1.swap(v2); // v1 --> {30, 40} , v2 --> {10, 20}

    v.clear(); // erases the entire vector

    cout<<v.empty(); // return true if vector is empty, else return false

}