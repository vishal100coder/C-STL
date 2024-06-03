void explainPQ(){
    
    // Max Heap --> Tree Data structure inside 
    priority_queue<int>pq;
    
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout<<pq.top(); // prints 10

    pq.pop(); // {8,5,2}

    cout<<pq.top(); // prints 8

    // size, swap, empty functions are same as others


    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout<< pq.top(); // prints 2

}