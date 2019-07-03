#ifndef WRAPPERS_H
#define WRAPPERS_H
#include<memory>
#include<first_degree.h>
#include<second_degree.h>
#include<third_degree.h>
using namespace std;

template <class T>
class wrappers final
{
public:
    wrappers(unique_ptr<Polynomial<T>> &);
    wrappers(Polynomial<T> &);
    T operator ()(T);
    unique_ptr<Polynomial<T>> pointer;
};

#endif // WRAPPERS_H
