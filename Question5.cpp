//#include<iostream>
//using namespace std;
//class StringHolder {
//	char* string_ptr=NULL;
//public:
//	StringHolder(const char* string_ptr) {
//		
//		this->string_ptr = new char[strlen(string_ptr) + 1];
//		int i;
//		for (i = 0; i < strlen(string_ptr); i++) {
//			this->string_ptr[i] = string_ptr[i];
//		}
//
//		this->string_ptr[strlen(string_ptr)] = '\0';
//
//	}
//	StringHolder(const StringHolder &obj) {//copy constructor with deep copy
//		
//		this->string_ptr = new char[strlen(obj.string_ptr) + 1];
//		int i ;
//		for (i = 0; i < strlen(obj.string_ptr); i++) {
//			this->string_ptr[i] = obj.string_ptr[i];
//		}
//
//		this->string_ptr[strlen(obj.string_ptr)] = '\0';
//	}
//
//	StringHolder(const StringHolder& obj,int over) {//copy constructor with shallow copy
//		this->string_ptr = obj.string_ptr;
//	}
//	
//	void setstring(char* str) {
//		int i;
//		for (i = 0; i < strlen(str); i++) {
//			this->string_ptr[i] = str[i];
//
//	    }
//		string_ptr[i] = '\0';
//
//	}
//	~StringHolder() {
//		cout << "Destructor is called!" << endl;
//		
//		string_ptr = NULL;
//	}
//	void display() {
//		cout << this->string_ptr<<endl;
//	}
//};
//int main() {
//	StringHolder S1("asghar");
//	S1.display();
//	StringHolder S2(S1,3);
//	S2.display();
//
//	char array[] = "ahmed";
//	S1.setstring(array);
//	S1.display();
//	S2.display();
//
//
//	return 0;
//}
//
//
