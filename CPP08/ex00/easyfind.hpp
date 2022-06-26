#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(const T &cont, int ent){
    typename T::const_iterator it = std::find(cont.begin(), cont.end(), ent);
    if (it == cont.end())
        throw std::out_of_range("Won't find the element");
    return it;
}

#endif