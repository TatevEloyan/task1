#include <iostream>
#include <utility> 
using namespace std;

double side(pair <double, double> x, pair <double, double> y){
	double s;
	s = sqrt(abs(pow((x.first - y.first),2)+pow((x.second - y.second),2)));
	return s;
}

void order(double *a, double *b, double *c){
	double mi, lo, hi; 
	 if (*a > *b) {   
      mi = *a;    
      lo = *b;   
   } else {
      mi = *b;  
      lo = *a;  
   } 
   if (mi > *c) { 
      hi = mi;    
      if(lo > *c){         
         mi = lo;                
         lo = *c;
      }
	  else {
         mi = *c;      
      }         
   }else hi = *c;
   *a = lo, *b = mi, *c = hi;
}
int main(){

	pair <double,double> p1;
	pair <double,double> p2;
	pair <double,double> p3;

	cout<<"Input the coordinates"<<endl;
	cin>>p1.first>>p1.second;
	cin>>p1.first>>p2.second;
	cin>>p1.first>>p3.second;
	double a = side(p1, p2);
	double b = side(p1, p3);
	double c = side(p2, p3);
	
	if (a == b == c)
		cout<<"The  triangle is acute"<<endl;

	else order(&a, &b, &c);

	if(pow(a, 2) + pow(b,2) == pow(c,2))
		cout<<"The  triangle is right"<<endl;

	else if(pow(a, 2)+pow(b,2) > pow(c,2))
		cout<<"The  triangle is acute"<<endl;

	else cout<<"The  triangle is obtuse"<<endl;

	system ("pause");
return 0;}