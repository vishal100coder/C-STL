// Map --> {key, value} pair. Keys r unique, but values can duplicate. 
// Both key and value can be of any datatype
// Map stores unique keys in sorted order
// TC = log(n)

void explainMap(){
    map<int, int> mpp;

    map<int, pair<int,int>> mpp;

    map< pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3,1});

    mpp.insert({2,4});

    mpp[{2,3}] = 10;
    {
        {1,2}
        {2,4}
        {3,1}
    }
     
    for(auto it : mpp){
        cout<< it.first << " " << it.second <<endl;
    }

    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints 0 or null

    auto it = mpp.find(3); // gives the iterator "it", 3 is key 
    cout << *(it).second;

    auto it = mpp.find(5); // if key 5 is present in map, then it points to end()+1 

    // This is the syntax

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap , size , empty, are same as above
}

void explainMultiMap(){
    // everything same as map, only it can store multiple duplicate keys in sorted order
    // only mpp[key] cannot be used here
}

void explainUnorderedMap(){
    // TC = O(1), in worst case TC = O(n)
    // Stores key-value pairs in random order
    // same as set and unordered set difference
}