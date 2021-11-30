#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++; 
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string z){
	int i = 0, L = z.size();
	string y = "";
	while(i < L){
		y += toupper(z[i]);
		i++;
	}
	return y;	
}

int main(){
    cout << "Input text: ";
    string x;
    cin >> x;
    
	string z=func1(x);
    cout << "Reversed text: "<<z<<"\n";
    
    x=func2(x);
    z=func3(z);
    
    cout << "Palindrome: ";
    if(x==z){
    	cout << "Yes";
	}
	else{
		cout << "No";
	}
    
    return 0;
}