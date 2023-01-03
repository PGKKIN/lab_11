#include<iostream>
using namespace std;

int main(){
    int n=1;
    char grade;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
	   if(grade=='0')
	   {
	       n-=1;
	       break;
	   }
	    
		cout << "Student [" <<n<< "]: ";
		cin >> grade; 
		if(grade=='A')
		{
		    count[0]+=1;
		} 
		else if(grade=='B')
		{
		    count[1]+=1;    
		} 
		else if(grade=='C')
		{
		    count[2]+=1;
		}
		else if(grade=='D')
		{
		    count[3]+=1;
		}
		else if(grade=='F')
		{
		    count[4]+=1;
		}
		
		else if(grade!='0' && grade!='A' && grade!='B' && grade!='C' && grade!='D' && grade!='F' )
		{
		    cout<<"Wrong input. Please input again.\n";
		    n-=1;
		} 
		n+=1;
	}while(true);
	
	
	cout << "In total " <<n-1<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;