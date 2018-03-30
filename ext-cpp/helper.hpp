#ifndef H_HPP 
#define H_HPP
#include <iostream>
#include <string>
#include <queue>
#include <cstdlib> 


using namespace std;

typedef queue <int> QU;

void add(QU &q, int i);
void walk(QU &q);
void popq(QU &q);
int getq(QU &q);
bool Q_Check(QU &q);
int len(QU &q);


#endif
