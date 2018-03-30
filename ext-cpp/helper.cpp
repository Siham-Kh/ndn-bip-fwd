#include <iostream> 
#include "helper.hpp"
#include <cstdlib> 


void add(QU &q, int i){
	q.push (i); 
}


void walk(QU &q){
	for (int i =0; i <= q.size()+1; i++){
		cout << "order " << i+1 << " is " << q.front () << endl;
		q.pop ();
	}
}


void popq(QU &q){ 
	q.pop();
}


bool Q_Check(QU &q){
	return !q.empty();
}


int getq(QU &q){
	return q.front();
}


int len(QU &q){
	return q.size();
}


/**
int main(){

QU q;
std::cout << "Check " << Q_Check(q) << std::endl;
add(q, 1);
//add(q, 2);

std::cout << "Check " << Q_Check(q) << std::endl;

return 1;

}
**/

