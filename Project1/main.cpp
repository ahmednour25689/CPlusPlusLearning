using namespace std;
#include <iostream>
#include <fstream>
#include "DateType.h"
DateType today;
DateType anotherDay;
void showDateType(){
	today.Initialize(9,24,23);
	anotherDay.Initialize(9,25,2003);
	cout << "today is" << today.GetDay()<<endl;
	cout << "another today is" << anotherDay.GetDay() << endl;
}
void test(){
	int t;
	cin >> t;
}
void handlefiles(){
	int intValue;
	float realValue;
	ifstream indata;
	ofstream outData;
	indata.open("input.dat");
	outData.open("output.dat");
	indata >> intValue;
	indata >> realValue;
	outData << "the input are"
		<< intValue << "and"
		<< realValue << endl;
}
int main(){
	//int i;
	//cout << "hello from windows";
	//cin >> i;
	//test();
	//handlefiles();
	/*ifstream indata;
	indata.open("Data.dat");
	if (!indata){
		cout << "error";
		int o;
		cin >> o;
		return 1;
	}*/
	showDateType();
	int x; 
	cin >> x;
	return 1;
}


