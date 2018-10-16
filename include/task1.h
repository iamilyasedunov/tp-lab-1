
unsigned long nod(unsigned int a,unsigned b)
{
	    if (b==0) return a;
	        else return nod(b,a%b);
}

unsigned long nok(unsigned int n1, unsigned n2)
{
	    return n1*n2 / nod(n1, n2);
}


