#include <iostream>

using namespace std;

int main() {
	int test1,test2,midexam,finalexam,total;
	string grade;
	
	cout << "This is a program to calculate your final grade based on your cumulative result throughout the year";
	cout << "\nEnter your first test score graded out of 10: ";
    cin >> test1;
	cout << "\nEnter your second test score graded out of 10: ";
    cin >> test2;
	cout << "\n Enter your mid exam score graded out of 30: ";
	cin >> midexam;
	cout << "\n Enter your final exam score graded out of 50: ";
	cin >>finalexam;

	total = test1 + test2 +midexam +finalexam;

    switch(total) {
  	case 90 ... 100:
  		grade = "A+";
  		break;
  	case 83 ... 89:
  		grade = "A";
  		break;
  	case 80 ... 82:
  		grade = "A-";
  		break;
  	case 75 ... 79:
  		grade = "B+";
  		break;
  	case 70 ... 74:
  		grade = "B";
  		break;
  	case 65 ... 69:
  		grade = "B-";
  		break;
  	case 60 ... 64:
  		grade = "C+";
  		break;
  	case 55 ... 59:
  		grade = "C";
  		break;
  	case 50 ... 54:
  		grade = "C-";
  		break;
  	case 40 ... 49:
  		grade = "D";
  		break;
  	case 0 ... 39:
  		grade = "F";
  		break;
  	default:
  		grade = "NG";
  		break;
    }

	cout << "Test1\t Test2 \t Midexam \t FinalExam \t Total\t Final\n" 
		 << "(10%)\t (10%)\t (30%)\t\t (50%)\t\t (100%)\t Grade \n" 
		 << test1 <<"\t  " << test2 <<"\t  " << midexam << "\t\t  " << finalexam << "\t\t " << total << "\t  "<< grade << endl;
	
	return 0;
}