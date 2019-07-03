#include "aggregator.h"
#include<iostream>
using namespace std;

template< class T>
aggregator<T>::aggregator(deque<wrappers<T>> &dq, function<T(deque<wrappers<T>> &)> func)
{
    func(dq);
}
template<class T>
T aggregator<T>::sum(deque<wrappers<T>> &dq)
{
    T sum = 0;
    T x_value = 1;       //tutaj wpisujemy x ktory bedzie podstawiany do rownan z kontenera
    while(!dq.empty()){
        sum = sum + dq.front().operator()(x_value);    //tutaj jest wykorzystany ten przeładowany operator, przykładowo jest 1
        dq.pop_front();
    }
    cout<<"suma wszystkich wielomianow po podstawieniu "<<x_value<<": " << sum << endl;
    return sum;
}
