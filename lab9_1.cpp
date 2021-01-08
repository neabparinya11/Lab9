#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	int i=1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" <<i<< "]: ";
		cin >> grade;
		if(grade=='0'){
			i--;
		break;
		}//The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			count[0]+=1;
			i++;//Do something
		}else if(grade=='B'){ // if grade is B
			count[1]+=1;
			i++;//Do something
		}else if(grade=='C'){
		     count[2]+=1;
		     i++;
		}else if(grade=='D'){
			 count[3]+=1;
			 i++;
		}else if(grade=='F'){
			 count[4]+=1;
			 i++;//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout<<"Wrong input. Please input again."<<endl;
		//Do something
		}  
	}while(true);
	
	
	cout << "In total "<<i<<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}