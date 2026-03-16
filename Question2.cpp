#include<iostream>
#include<string>
using namespace std;
class Superman{
	 int Health;
	int Power;

public:
	//Parametrized Construtor with default values as well
	Superman(int Health=100,int Power=100):Health(Health),Power(Power){}

	//Method to Display the values
    void DisplaySupermaninfo() {
		cout << "Power :" << Power << endl;
		cout << "Health:" << Health << endl;
	}

	//Method to modify Health
	void setHealth(int newHealth) {
		this->Health = newHealth;
	}

	//Method to modify Power
	void setPower(int newPower) {
		this->Power = newPower;
	}
};


int main() {
	cout << "Object 1:" << endl;
	Superman S1(80,50);
	S1.DisplaySupermaninfo();
	S1.setHealth(90);
	S1.setPower(60);
	cout << "After modifying :" << endl;
	S1.DisplaySupermaninfo();

	cout << "Object 2:" << endl;
	Superman S2;
	cout << "Values set as default:" << endl;
	S2.DisplaySupermaninfo();




	return 0;
}