//#include<iostream>
//using namespace std;
//class stringinfo {
//	
//	char* str=NULL;
//	int lenght;
//
//public:
//	stringinfo(const char* str) {
//		this->lenght = strlen(str);
//		this->str = new char[lenght+ 1];
//		int i = 0;
//		for ( i = 0; i < lenght; i++) {
//			this->str[i] = str[i];
//		}
//		this->str[i] = '\0';
//		
//
//	}
//	~stringinfo() {
//		cout << "Destructor is called!"<<endl;
//	}
//	void display() {
//		cout << "Str:"<<str<<endl;
//		cout << "lenght:" << lenght << endl;
//	}
//};
//int main() {
//	char array[] = {"asghar"};
//	stringinfo S1(array);
//	S1.display();
//
//	array[0] = 'M';
//	array[1] = 'o';
//	S1.display();
//
//
//
//
//	return 0;
//}
//
//
//    
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////// Constructor
//    //StringInfo(const char* input) {
//    //    length = strlen(input);        
//    //    str = new char[length + 1];    
//    //    strcpy(str, input);          
//    //}
//	
//
//
////
//// // manual copy
////for (int i = 0; i < length; i++) {
////	str[i] = input[i];
////}
////
////str[length] = '\0';  // null terminator
//
//
//
//
//    //// Destructor
//    //~StringInfo() {
//    //    delete[] str;   
//    //}
//
//
////
////class StringInfo {
////private:
////    char str[100];  // fixed size
////    int length;
////
////public:
////    StringInfo(const char* input) {
////        length = 0;
////
////        // manual copy
////        while (input[length] != '\0') {
////            str[length] = input[length];
////            length++;
////        }
////        str[length] = '\0';
////    }
////
////    void display() {
////        cout << "String: " << str << endl;
////        cout << "Length: " << length << endl;
////    }
////};
////
////
////#include <string>
////
////class StringInfo {
////private:
////    string str;
////    int length;
////
////public:
////    StringInfo(const string& input) {
////        str = input;           // deep copy automatically
////        length = str.length();
////    }
////
////    void display() {
////        cout << "String: " << str << endl;
////        cout << "Length: " << length << endl;
////    }
////};