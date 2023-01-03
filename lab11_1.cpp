#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int std_count=1;
	string grade;
	cout<<"Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" <<std_count<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if (!(grade>="A" && grade<="D" || grade == "F" || grade=="0")){
			cout<<"Wrong input. Please input again."<<endl; continue;
		}
		std_count++;
		if(grade == "0") break;
		if(grade == "A") // if grade is A
			count[0]++;//Do something
		else if(grade == "B") // if grade is B
			count[1]++;//Do something
		//and so on ... for grade = C, D, F	
		else if(grade == "C") // if grade is B
			count[2]++;// grade is wrong input
		else if(grade == "D") // if grade is B
			count[3]++;
		else if(grade == "F") // if grade is B
			count[4]++;	//Do something
	}while(true);
	
	
	cout << "In total "<<std_count-2<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}

