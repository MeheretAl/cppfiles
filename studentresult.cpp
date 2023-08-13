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

    if (total >= 90) {
		grade = "A+";
	} else if (total >= 83 && total < 90) {
		grade ="A";
	} else if (total >= 80 && total < 83) {
		grade = "A-";
	} else if (total >= 75 && total < 80) {
		grade = "B+";
	} else if (total >= 75 && total < 80) {
		grade = "B+";
	} else if (total >= 70 && total < 75) {
		grade = "B";
	} else if (total >= 65 && total < 70) {
		grade = "B-";
	} else if (total >= 60 && total < 65) {
		grade = "C+";
	} else if (total >= 50 && total < 60) {
		grade = "C";
	} else if (total >= 45 && total < 50) {
		grade = "C-";
	} else if (total >= 40 && total < 45) {
		grade = "D";
	} else if (total >= 30 && total < 40) {
		grade = "Fx";
	} else if (total >= 0 && total < 30) {
		grade = "F";
	} else if (total < 0) {
		grade = "Error";
		cout << "Please run the program again with valid inputs";
	} else if (total > 100) {
		grade ="Error";
		cout << "Please run the program again with valud inputs";
	}

	cout << "Test1\t Test2 \t Midexam \t FinalExam \t Total\t Final\n" 
		 << "(10%)\t (10%)\t (30%)\t\t (50%)\t\t (100%)\t Grade \n" 
		 << test1 <<"\t  " << test2 <<"\t  " << midexam << "\t\t  " << finalexam << "\t\t " << total << "\t  "<< grade << endl;
	
	return 0;
}