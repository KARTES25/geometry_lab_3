#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int is_more_then_0(){

		int r2;
	cout<<"enter radius (more than 0) ";
        cin>>r2;
       if (r2<=0)
		is_more_then_0(); else
		return(r2);
}
