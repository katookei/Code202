#ifndef _TUN_
#define _TUN_

class fraction
{
	int nu, de;
public:
	fraction();
	void initial(int x, int y);
	void sum(fraction b);
	void reduce(int x, int y);
	int gcd(int x, int y);
	
#endif 
