// #include <iostream>
//
///* run this program using the console pauser or add your own getch,
///system("pause") or input loop */
//
// using namespace std;
//
// void swap(int &a, int &b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
// void bubbleSort(int *arr, int sz) {
//	for (int i  = 0; i < sz - 1; ++i) {
//		for (int j = 0; j < sz - 1 - i; ++j) {
//			if (arr[j] < arr[j + 1]) swap(arr[j], arr[j + 1]);
//		}
//	}
//}
//
// int main(int argc, char** argv) {
//	int arr[] = {323, 12, 21, 32, 43, 11, 2, 102, 23, 54, 12};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; ++i) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	bubbleSort(arr, sz);
//	for (int i = 0; i < sz; ++i) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

// #include <iostream>
// #include <cstdlib>
//
// using namespace std;
//
// int main(int argc, char **argv) {
//	cout << "Hello World!" << endl;
//	return EXIT_SUCCESS;
// }

// #include <iostream>
// #include <cstdio>
// #include <cstdlib>
// #include <cstring>

// using namespace std;
//
// class CAnimal {
//	public:
//		char name[32];
//		int age;
//		char sex;
//
//		void cry(const char *voice) {
//			cout << name << ":" << voice << endl;
//		}
// };
//
// int main(int argc, char *argv[]) {
//	CAnimal cat;
//	cat.age = 1;
//	memset(cat.name, 0, sizeof(cat.name));
//	strcpy(cat.name, "Judy");
//	cat.cry("Meow~~");
//	return EXIT_SUCCESS;
// }

/*#include <iostream>

using namespace std;

int main(void) {
  cout << "Hello World!" << endl;
  return 0;
}*/

#include <iostream>
#include <string>

using namespace std;

class Person {
 public:
  void print() {
    cout << "name: " << _name << endl;
    cout << "age: " << _age << endl;
  }
 protected:
  string _name;
  int _age;
};

class Student : public Person {
 public:
  void set_age(int age) { _age = age; }
  int get_age() { return _age; }
  
 protected:
  int _stuid; 	
};

class Teacher : public Person {
 protected:
  int _jobid;
};

int main() {
  
  return 0;
}