#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//Pairs
void explainPair(){
    pair<int,int> p = {1,3};// here datatypes can be anything. 
    
    cout<<p.first<<" "<<p.second;

    pair<int, pair<int,int>> p = {1,{3,4}}; //Nested pairs.

    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;//1,4,3

    pair<int, int> arr[] = {{1,2} , {2,5} , {5,1} };

    cout<<arr[1].second;//5

}