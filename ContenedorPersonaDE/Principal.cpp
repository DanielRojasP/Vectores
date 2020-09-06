#include "Control.h"

void main(){
	//Control c;
	//c.controlPrincipal();
	//OTRA FORMA
	Control *c2 = new Control;
	c2->controlPrincipal();
	delete c2;
}