//#include<iostream>
//#include<string>
//using namespace std;
//class Empolyee {
//	static int nextEmpolyeeID;
//	const int  ID=generateemployeeID();
//	float const MAX_salary = 5000;
//	float salary;
//	string name;
//
//public:
//	Empolyee(int salary,string name) {
//		this->name = name;
//		this->salary = salary;
//		setsalary();
//		cout << "Empolyee-->ID:"<<ID<<"Name:" << name << " with salary:" << this->salary << " is added! " << endl;
//	}
//	static int  generateemployeeID(){
//		nextEmpolyeeID++;    //Access only static 
//		return nextEmpolyeeID;
//	}
//	void setsalary() {
//		if (salary > MAX_salary) {
//			cout <<this->name<<"'s salary exceeded by MAX salary.So setting equal to MAX salary!" << endl;
//			salary = MAX_salary;
//			
//		}	
//		return;
//	}
//
//	void displayEmployeeInfo() {
//		cout << "Employees's ID:" << ID << endl;
//		cout << "Name:" << name << endl;
//		cout << "Salary:" << salary << endl;
//	}
//};
//int Empolyee::nextEmpolyeeID;//initialize 0 by default
//
//int main() {
//	Empolyee A(2000,"Ali");
//	Empolyee B(4000, "Hassan");
//	Empolyee C(6000, "Hussain");
//	cout << endl;
//	A.displayEmployeeInfo();
//	cout << endl;
//	B.displayEmployeeInfo();
//	cout << endl;
//	C.displayEmployeeInfo();
//
//
//
//	return 0;
//}