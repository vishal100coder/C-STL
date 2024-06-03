// MultiSet --> Stores elements in Sorted order

void explainMultiSet(){
    // Everything is same as set, it only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's are erased

    int cnt = ms.count(1); // count number of occurences of 1, here cnt=0
    
    // {1,1,1}
    ms.erase(ms.find(1)); // only a single 1 erased, here iterator points to the first occurence of 1

    ms.erase(ms.find(1), ms.find(1)+2); // erases remaining 2 1's also
    // rest all functions are same as set
}