void explainList(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4}

    ls.emplace_front(3); // {3,5,2,4}

    // Rest functions are same as vector
    // Begin, end, rbegin, rend, clear, insert, size, swap
}