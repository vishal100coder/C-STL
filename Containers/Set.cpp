// Set --> Stores elements in Sorted & Unique fashion
// TC = log(n)

void explainSet(){
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

   // begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as those of above

   // {1,2,3,4,5}
   auto it = st.find(3); // returns an iterator, which points to 3

   // {1,2,3,4,5}
   auto it = st.find(6); // here 6 is not in the set, so it points to the end+1 position of set

   // {1,4,5}
   st.erase(5); // erase 5 // takes logn time

   int cnt = st.count(4); // here cnt returns 1, if 4 is present in the set, else it returns 0

   auto it = st.find(3);
   st.erase(it); // erase the element which is present "it" position, takes constant time

   // {1,2,3,4,5}
   auto it1 = st.find(2);
   auto it2 = st.find(4);
   st.erase(it1,it2); // after erase {1,4,5} [first, last)

   // lower_bound() and upper_bound() function works in the same way, as in vector does
   // it's Syntax
   auto it = st.lower_bound(2);
   auto it = st.upper_bound(3);


}