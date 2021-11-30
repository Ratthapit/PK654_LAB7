#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string name[] = {"Luffy","Zoro","Sanji","Nami","Naruto","Sakura","All Might","Saitama","Eren","Mikasa"};
	int id[] = {123,196,225,329,420,451,515,666,690,787};
	double gpa[] = {1.50,2.12,4.00,3.69,2.50,2.76,3.54,2.14,3.50,1.88};

    	int i,j;
	double x,GPA;
	string y="";
	
    for(i=0;i<10;i++){
    	for(j=0;j<9;j++){
    		if(id[j]>id[j+1]){
    			x=id[j]; 
    			id[j]=id[j+1];
    			id[j+1]=x; 
    			
    			x=gpa[j];
    			gpa[j]=gpa[j+1];
    			gpa[j+1]=x;
    			
    			y=name[j];
    			name[j]=name[j+1];
    			name[j+1]=y;
			}
		}
	}
	
	cout <<"Please input GPA: " ;
	cin>>GPA;
	
	for(i=0;i<10;i++){
		if(gpa[i]>=GPA){
			cout <<id[i]<<"	"<<name[i]<<gpa[i]<<"\n";
		}
	}
		
	return 0;
}
