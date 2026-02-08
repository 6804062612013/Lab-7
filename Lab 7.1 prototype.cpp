double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int); // need to create parameter's variables in function body
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a=1, b=1, c=1, d=1, e=1;
  	double r=1.0, s=1.0, t=1.0, u=1.0, v=1.0;
  	//function calling (a-k)
  	functionM(); //a 
  	a = functionM(); //b
  	b = functionN(a, b); //c
  	r = functionO(r,a,s,b); //d
  	s = functionP(a,b,c,d,e); //e not Pass functionP can receive only 4 parameters
  	u = functionM(); //f
  	c = d + functionN(r,s); //g
	t = s * functionO(r, a, r, a); //h
	a = v + functionP(r, s, t, t); //i
	functionP(functionN(a, a), s, t, t+r); //j
	v = functionP(functionN(a, a), s, t, t+r); //k
}
double functionM(void){
	return 1.0;
}
int functionN(int n, double x){
	double k;
	k = n+x;
	return k; //return k cast to integer
}
double functionO(double, int, double, int){  // create parameter's variables
	return 1.0; 
}
double functionP(int a, int n, int b, int c){
	return 1.0;
}




