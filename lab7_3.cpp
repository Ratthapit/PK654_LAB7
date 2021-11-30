#include<iostream>
using namespace std;

int adiff(int A,int B){	
	int a,b;
	
	if(A==B){
    		return 0;
		}
		
	if(A==-B){
    		return 180;
		}
		
	if(A>=0&&B>=0){
		a=A%360;
		b=B%360;
	}
	if(A<=0&&B<=0){
		a=-A%360;
		b=-B%360;
	}
	if(A>0&&B<0){
		a=A%360;
		b=(360+B)%360;
	}
	
	if(A<0&&B>0){
		a=(360+A)%360;
		b=B%360;
	}
	
	
	if(a==b){
    	return 0;
	}
		
	if(a>b){
    	if(a-b>180){
    		return 360-(a-b);
		}
		else{
			return a-b;
		}
	}
		
	if(b>a){
    	if(b-a>180){
    		return 360-(b-a);
		}
		else{
			return b-a;
		}
	}
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
