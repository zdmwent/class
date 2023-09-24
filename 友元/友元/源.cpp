// 注意顺序：友元类函数要放在被友元类的下面
#include<iostream>
using namespace std;

class University
{
public://                               友元类函数可以其类中的数据成员。单向性
	//friend void Person::visit_univ();//添加友元函数，friend void +函数名/类名::函数名，这类函数使用时不需要用类名引出
	friend class Room;//添加友元类，friend class + 类名
	University(string b,int a)//第三种初始化数据成员,结构函数法
	{
		time=a;
		name = b;
	}
private:
	string name;
	int time;
};

class Room

{
public:

	Room(string myname)

	{

		name = myname;

	}

	void display(const University& u)
	{
		cout << "name:" << u.name << endl;

		cout << "time:" << u.time << endl;
	}

	friend class Person;

private:

	string name;

};

class Person

{

public:

	Person(string name)

	{
		person_name = name;
	}

	void visit(const Room& room) {

		cout << "My name is " << person_name << endl;

		cout << "I‘m going to visit Room " << room.name << endl;
	}

	void visit_univ() {

	}

	friend class Room;

private:

	string person_name;

};



int main()

{
	Room my_room("H1_424");

	Person myfriend("Zhang San");

	University daxue("zut",99);

	myfriend.visit(my_room);

	my_room.display(daxue);

	return 0;
}

/*#include<iostream>
using namespace std;
class Time;
class Date {
public:
	int year, month, day;
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	friend void display(const Date&, const Time&);
};
class Time {
public:
	int hour, minute, second;
	Time(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	}
	friend void display(const Date&, const Time&);
};
void display(const Date& d, const Time& t)
{
	cout << d.year << "/" << d.month << "/" << d.day << endl;
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}
int main()
{
	void display(const Date&, const Time&);
	int year, month, day;
	cout << "请依次输入年月日:" << endl;
	cin >> year >> month >> day;
	Date d1(year, month, day);

	int hour, minute, second;
	cout << "请依次输入时分秒:" << endl;
	cin >> hour >> minute >> second;
	Time t1(hour, minute, second);
	display(d1, t1);
	return 0;
}*/