//#include <iostream>
//#include <cstring>
//class Stringclass {
//private:
//	char** strings;
//	int size;
//public:
//	Stringclass(int arraySize) {
//		// Constructor to initialize the StringArray with a given size
//		size = arraySize;
//		strings = new char*[size];
//
//		for (int i = 0; i < size; i++) {
//			strings[i] = new char[18];
//		}
//
//		for (int i = 0; i < size; i++) {
//			for (int j = 0; j < 18; j++) {
//				strings[i][j] = '0';
//			}
//		}
//
//
//	}
//	~Stringclass() {
//		// Destructor to free the dynamically allocated memory
//
//		for (int i = 0; i < size; i++) {
//			delete[] strings[i];
//		}
//		delete[] strings;
//
//	}
//	void setString(int index, const char* str) {
//		// Method to set a string at a specific index
//		int i;
//		for( i=0;i<strlen(str);i++)
//		strings[index][i] = str[i];
//		strings[index][i] = '\0';
//
//	}
//	const char* getString(int index) {
//		// Method to get the string at a specific index
//		return &(strings[index][0]);
//		  
//	}
//};
//int main() {
//	Stringclass stringArray(3);
//	stringArray.setString(0, "Hello");
//	std::cout << "String at index 0: " << stringArray.getString(0) <<
//		std::endl;
//	return 0;
//}