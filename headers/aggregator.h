#ifndef AGGREGATOR_H
#define AGGREGATOR_H
#include<wrappers.h>
#include<queue>
#include<functional>
using namespace std;

template<class T>
class aggregator final
{
public:
    aggregator(deque<wrappers<T>> &, function<T(deque<wrappers<T>> &)>);
    static T sum(deque<wrappers<T>> &);
};

#endif // AGGREGATOR_H
