void explainExtra(){
    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>);

    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};
    // sort it according to second element
    // if second element is same, then sort it according to first element but in descending
    sort(a, a+n, comp);
    // {{4,1} , {2,1} , {1,2}};

    bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second<p2.second) return true;
        if(p1.second>p2.second) return false;
        // they are same

        if(p1.first>p2.first) return true;
        return false;
    }

    int num = 7;
    int cnt = __builtin_popcount(); // Return number of 1's(set bits) in binary of 7. return 3

    long long num = 654345676543345;
    int cnt = __builtin_popcountll(); // for long long numbers

    // Print all permutations of the string

    string s = "123";// string should be in sorted order in order to print all the permutations
    sort(s.begin(), s.end());
    do{
        cout<< s << endl;
    } while(next_permutation(s.begin(), s.end()));

    // find max min in array
    
    int max = *max_element(a,a+n);
    int min = *min_element(a,a+n);

}