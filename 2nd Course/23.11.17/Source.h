#include "manager.h"
using namespace std;

int main()
{
	Files myManager;
	myManager.assignFile("test.txt");
	myManager.pushBackString(0, "Hello!");
	myManager.assignFile("test1.txt");
	cout << myManager.getNameOfFile(0) << endl;
	cout << myManager.getCountOfFiles() << endl;
	myManager.pushBackString(1, "Hello world!");
	myManager.pushBackString(1, "Hello world!");
	myManager.deleteFile(0);
	cout << myManager.getNameOfFile(0) << endl;
	cout << myManager.getCountOfFiles() << endl;
	myManager.printFile(0);
	myManager.popBackString(0);
	myManager.printFile(0);
	system("pause");
	return 0;
}