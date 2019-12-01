
/*
 条款38:通过复合塑模出has-a，或者“根据某物实现出”

 在应用域，对象间表现出 has-a的关系
 在实现域，对象间表现出 is-implemented-in-terms-of 的关系(根据某物实现出)

 */

#include <list>

using namespace std;

template<typename T>
class Set {
public:
    bool member(const T& item) const;
    void insert(const T& item);
    void remove(const T& item);
    std::size_t size() const;
    
private:
    std::list<T> rep;
};

typename<typename T>
bool Set<T>::member(const T& item) const {
    return std::find(rep.begin(), rep.end(), item) != rep.end();
}

template<typename T>
bool Set<T>::insert(const T& item) {
    if (!member(item)) rep.push_back(item);
}

template<typename T>
void Set<T>::remove(const T& item) {
    typename std::list<T>::iterator it = std::find(rep.begin(), rep.end(), item);
    if (it != rep.end()) rep.erase(it);
}

template <typename T>
std::size_t Set<T>::size() const {
    return rep.size();
}

