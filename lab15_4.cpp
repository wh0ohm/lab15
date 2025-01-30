#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a , int &b , int &c , int &d){
	int x = rand()%4;
	int fa , fb , fc , fd;
	fa = a;
	fb = b;
	fc = c;
	fd = d;
	if(x == 0){
		a = fb;
		b = fc;
		c = fd;
		d = fa;
	}
	else if(x == 1){
		a = fc;
		b = fd;
		c = fa;
		d = fb;
	}else if(x == 2){
		a = fd;
		b = fa;
		c = fb;
		d = fc;
	}else if(x == 3){
		a = fc;
		b = fa;
		c = fd;
		d = fb;
	}
}