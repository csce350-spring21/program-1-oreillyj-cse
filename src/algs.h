#ifndef ALGS_H
#define ALGS_H

#include <algorithm>
#include <queue>
using std::swap;

//your include, if you want...
#include  <iostream>


template<typename T>
void heapsort(std::vector<T>& V){
    using std::cout;
    using std::endl;
    auto S = V;
    std::sort(V.begin(),V.end());
    cout<<endl<<"S=";
    for (T x : S) 
	cout<<x<<',';
    cout<<std::endl<<"V=";
    for (T x : V)
	cout<<x<<',';
    cout<<endl;

    std::priority_queue<T> q1;
    for(T x : S) 
	q1.push(x); //O(log n) for last half of nodes...

    auto S2 = S;
    std::priority_queue<T> q2(S2.begin(),S2.end());

    cout<<"q1=";
    while(!q1.empty()){
        cout<<q1.top()<<',';
        q1.pop(); //O(log n) for these...
    }
    cout<<endl<<"q2=";
    while(!q2.empty()){
        cout<<q2.top()<<',';
        q2.pop();
    }
    cout<<endl;

    auto cmp=
	[](const T& a, const T&b){return a>b;}; //lambda function

    std::priority_queue <T,std::vector<T>,decltype(cmp) > q_rev (cmp);

    for(T s: S) 
	q_rev.push(s);

    cout<<"q_rev=";
    while(!q_rev.empty()){
        cout<<q_rev.top()<<',';
        q_rev.pop(); //O(log n) for these...
    }
    cout<<endl; 

}



bool are_anagrams(std::string a, std::string b){
	return true;
}


#endif
