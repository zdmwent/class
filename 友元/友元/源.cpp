// ע��˳����Ԫ�ຯ��Ҫ���ڱ���Ԫ�������
#include<iostream>
using namespace std;

class University
{
public://                               ��Ԫ�ຯ�����������е����ݳ�Ա��������
	//friend void Person::visit_univ();//�����Ԫ������friend void +������/����::�����������ຯ��ʹ��ʱ����Ҫ����������
	friend class Room;//�����Ԫ�࣬friend class + ����
	University(string b,int a)//�����ֳ�ʼ�����ݳ�Ա,�ṹ������
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

		cout << "I��m going to visit Room " << room.name << endl;
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
	cout << "����������������:" << endl;
	cin >> year >> month >> day;
	Date d1(year, month, day);

	int hour, minute, second;
	cout << "����������ʱ����:" << endl;
	cin >> hour >> minute >> second;
	Time t1(hour, minute, second);
	display(d1, t1);
	return 0;
}*/