#include<iostream>
#include<string>
using namespace std;
// is-a 상속, 단일상속
class tanKwang {
public:
	void doCppHomework(){
		for (int i = 0; i < cpp_homework; i++) {
			cout << "Do c++ homework!!!\n";
		}
	}
protected:
	int cpp_homework;
};
class Gangjun : public tanKwang {
public:
	Gangjun() {
		cpp_homework = 0;
	}
	Gangjun(int cnt) {
		cpp_homework = cnt;
	}
};

// has-a 상속, 다중상속
class CPU {
public:
	CPU() {
		manufacturer = "";
		series = "";
	}
	CPU(string m, string s){
		manufacturer = m;
		series = s;
	}
	void cpuInfo() {
		cout << "CPU manufacturer: "<< manufacturer << endl;
		cout << "CPU series: " << series << endl;
	}
private:
	string manufacturer,series;
};
class RAM {
public:
	RAM() {
		manufacturer = "";
		memory = 0;
	}
	RAM(string m, int me) {
		manufacturer = m;
		memory = me;
	}
	void ramInfo() {
		cout << "RAM manufacturer: " << manufacturer << endl;
		cout << "RAM series: " << memory << endl;
	}
private:
	string manufacturer;
	int memory;
};
class computer{
public:
	computer(string cpu_manufacturer, string cpu_series, string ram_manufacturer, int ram_memory) {
		CPU1 = { cpu_manufacturer, cpu_series };
		RAM1 = { ram_manufacturer, ram_memory };
	}
	CPU CPU1;
	RAM RAM1;
};
// 삼중상속
class Animal {
public:
	void howOldAreYou(){
		cout << "I'm " << age << "years old.\n";
		// 동물도 나이는 있음;;
	}
protected:
	int age;
};
class Person : public Animal{
public:
	void whatIsYourName() {
		cout << "My name is " << name <<"\n";
	}
protected:
	string name;
};
class Korean : public Person {
public:
	Korean() {
		age = 0;
		name = "";
	}
	Korean(int a, string n) {
		age= a;
		name = n;
	}
	void DoYouKnow() {
		cout << "Do you know kimchi?\n";
	}
};
int main() {
	Gangjun Cho = 5;
	Cho.doCppHomework();

	computer newcom = {"Intel","i7","Samsung",16};
	newcom.CPU1.cpuInfo();
	newcom.RAM1.ramInfo();

	Korean KimMinSu = { 17, "김민수" };
	KimMinSu.howOldAreYou();
	KimMinSu.whatIsYourName();
	KimMinSu.DoYouKnow();
}
