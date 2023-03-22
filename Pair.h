//
// Created by Vijay on 22/03/23.
//

#ifndef C___PAIR_H
#define C___PAIR_H


#include <iostream>

using namespace std;

template<typename K, typename V>
class Pair {
public:
    Pair() = default;
    Pair(K key, V value);

    K getKey() const;
    V getValue() const;
private:
    K key;
    V value;
};

template<typename K, typename V>
K Pair<K, V>::getKey() const {
    return key;
}

template<typename K, typename V>
V Pair<K, V>::getValue() const {
    return value;
}

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value):key(key), value(value) {}

template<typename K, typename V>
ostream& operator<< (ostream& stream, const Pair<K, V>& pair) {
    return stream << pair.getKey() << "=" << pair.getValue();
}


#endif //C___PAIR_H
