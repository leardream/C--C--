#include "empty.h"

int main()
{
	Empty e1;
	const Empty e2 = e1;
	
	e1 = e2;
	
	Empty *p1 = &e1;				// e1.operator&();
	const Empty *p2 = &e2;
	return 0;
}
