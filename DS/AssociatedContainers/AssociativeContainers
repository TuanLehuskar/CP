Set: A container that stores unique elements in a sorted order. It automatically sorts the elements according to a specified comparison function (default is less than <)
Ex: std:set<int> mySet;

Map: A container stores key-value pairs in a sorted order based on the keys. It automatically sorts the elements according to a specified comparison function (default is less than <)
- Each key in map must be unique, but different keys can have the same value.
- The elements are sorted by the key, not the value
Ex: std::map<int, std::string> myMap; 
    // Inserting key-value pairs
    myMap[1] = "apple";
    myMap[2] = "banana";
    // Displaying elements
    for (auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

Multiset: Similar to Set but it allows duplicate elements. Elements in a multiset are stored in sorted order according to a comparison function (default is less-than <).
Ex: std::multiset<int> myMultiset = {10, 20, 20, 30, 40};

    // Inserting a duplicate element
    myMultiset.insert(20);

    // Displaying elements
    for (int num : myMultiset) {
        std::cout << num << " ";  // Output: 10 20 20 20 30 40
    }

Multimap: Similar to Map, but it allows multiple values to be associated with the same key.
- The keys are sorted in sorted order.
- std::multimap<int, std::string> myMultimap;

    // Inserting key-value pairs with duplicate keys
    myMultimap.insert({1, "apple"});
    myMultimap.insert({1, "banana"});
    myMultimap.insert({2, "cherry"});

    // Displaying elements
    for (auto& pair : myMultimap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

