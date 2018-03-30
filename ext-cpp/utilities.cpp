#include "utilities.hpp"
#include <iostream>

/** here are the parameters of the system **/
/** notice that the period must be longer 
enough wrt the propagation delays. Otherwise, 
deadlocks will appear in the model **/

/** time unit = microseconds **/

/** ~ 10 minutes would be enough **/
int INFINIT()
{
	return 1000 ; 
}

/** synchronisation period, fixed to 1 min **/
int PERIOD()
{ 
	return 60 * 1000 * 1000; 
}

//int MIN(int d1, int d2){ 
//	int d12 = (d1 < d2) ? d1 : d2; 
//	//int d34 = (d3 < d4) ? d3 : d4;
//	return d12; 
//}

int MIN(int d1, int d2, int d3, int d4, int d5){ 
	int d12 = (d1 < d2) ? d1 : d2; 
	int d34 = (d3 < d4) ? d3 : d4;
	int d45 = (d12 < d34) ? d12 : d34;
	return (d45 < d5) ? d45 : d5; 
}

/** FollowUp delay is uniform(10,20) 
This choice enforces the reception and sending 
of the Synch msg before the reception of the 
FollowUp msg **/
//int chooseFollowUpDelay()
//{ 
//	return  10 + (random() % 10); 
//}

void printer(int d){
	std::cout << "current time:  "<< d << std::endl;
}
