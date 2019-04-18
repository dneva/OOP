#include<iostream>
#include<string>
#include <vector>
using namespace std;

class book
{
private:
	string name, author;
	int year;
public:
	book(string name, string author, int year)
	{
		this->name = name;
		this->author = author;
		this->year = year;
	}
	book(string name, string author)
	{
		this->name = name;
		this->author = author;
	}
	string getName() {
		return name;
	}
	string getAuthor() {
		return author;
	}
	int getYear() {
		return year;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAuthor(string author) {
		this->author = author;
	}
	void setYear(int year) {
		this->year = year;
	}
};
class Group
{
	string name;
	int countOfMembers, countExams;
public:
	void setName(string name) {
		this->name = name;
	}
	void setMembers(int countOfMembers) {
		this->countOfMembers = countOfMembers;
	}
	void setExams(int countExams) {
		this->countExams = countExams;
	}
	string getName() {

		return name;
	}
	int getMembers() {
		return countOfMembers;
	}
	int getExams() {
		return countExams;
	}
};
class Auto {
	string brand, model;
	int year;
public:
	void setBrand(string brand) {
		this->brand = brand;
	}
	void setModel(int model) {
		this->model = model;
	}
	void setYear(int year) {
		this->year = year;
	}
	string getBrand() {
		return brand;

	}
	string getModel() {
		return model;
	}
	int getYear() {
		return year;
	}
};
class Vector {
	double module;
	double x1, x2, y1, y2;
public:
	Vector(double x2, double y2)
	{
		this->x1 = 0;
		this->y1 = 0;
		this->x2 = x2;
		this->y2 = y2;
	}
	void setStartPoint(double x1, double y1) {
		this->x1 = x1;
		this->y1 = y1;
	}
	void setEndPoint(double x2, double y2) {
		this->x2 = x2;
		this->y2 = y2;
	}

	double getModule() {
		return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	}
};
class Librar {
	int countBooks;
	vector<book> books;
public:
	void setCountBooks(int countBooks) {
		this->countBooks = countBooks;
	}
	void addBook(book a) {
		books.push_back(a);
	}
	int getCountBooks() {
		return countBooks;
	}
};
int main()
{
	setlocale(0, "rus");
	book firstBook("������ � ���������", "��������");
	firstBook.setYear(1967);
	cout << "�����: " << firstBook.getAuthor() << "\n�������� �����: " << firstBook.getName() << "\n���: " << firstBook.getYear() << endl;
	system("pause");
	return 0;
}