#include <iostream>
#include <string>
#include <vector>
using namespace std;

class snowday {
private:
	string date;
	double temp;
	int depth;
public:
	snowday();
	snowday(string argDate, double argTemp, int argDepth);

	


	void setDate(string arg);
	void setTemp(double arg);
	void setDepth(int depth);

	


	string getDate(void);
	double getTemp(void);
	int getDepth(void);


	void display();
};

void printWeek(vector<snowday> arg);



int main(void) {



	cout << "\t\t\t\t\t*****Week at Aspen... the forecast for the week*****\n\n" << endl;


	vector<snowday> week;

	string tempDate;
	double tempTemp;
	double tempDepth;

	for (int i = 0;i < 7;i++) {
		cout << "Enter a date: ";
		getline(cin, tempDate);
		
		cout << "Enter the temperature: ";
		cin >> tempTemp;
		cin.ignore();

		cout << "Enter the depth: ";
		cin >> tempDepth;
		cin.ignore();
		cout << endl;
		week.push_back(snowday(tempDate, tempTemp, tempDepth));
		
	}


	printWeek(week);


	

	return 0;
}


void printWeek(vector<snowday> arg) {
	for (int i = 0; i < arg.size(); i++) {
		arg[i].display();
		cout << endl;

	}
	
}
snowday::snowday() { 
	setDate("01 - 01 - 2001");
	setTemp(-273);
	setDepth(-1);
}

snowday::snowday(string argDate, double argTemp, int argDepth) { 
	setDate(argDate);
	setTemp(argTemp);
	setDepth(argDepth);
}



void snowday::display() {
	cout << "Date: " << date << endl;
	cout << "Temp: " << temp << " degrees F" << endl;
	cout << "Depth: " << depth << " inches" << endl;
}



void snowday::setDate(string arg) {
	date = arg;
}

void snowday::setTemp(double arg) {
	temp = arg;
}

void snowday::setDepth(int arg) {
	depth = arg;
}



string snowday::getDate(void) {
	return date;
}

double snowday::getTemp(void) {
	return temp;
}

int snowday::getDepth(void) {
	return depth;
}