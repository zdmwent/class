//类 类名的一个大写，类有数据成员，函数成员，public，private。数据成员初始化有三种方法，私有时可以调用函数赋值，或函数名
//和类名相同的默认为结构函数。使用类时，要想一个名称为：类+名称。使用类中的成员：类::成员  名称.名称。
#include <iostream>

#include <cstring>

using namespace std;

class Phone

{
public:
    char brand[20];

    float cpu;

    int memo;

    float size;

//public:

    void call()

    {
        cout << brand << " is calling" << endl;
    }

    void sendMessage()

    {
        cout << brand << " is sending message using cpu " << cpu << "HZ" << endl;
    }

    void surfInternet()

    {
        cout << brand << " is surfing internet" << endl;
    }

    Phone(const char b[], float c, int m, float s)

    {
        strcpy_s(brand, b); cpu = c; memo = m; size = s;
    }

   /* Phone(const Phone& ph)

    {

        strcpy(brand, ph.brand);

        strcat(brand, "plus");

        cpu = ph.cpu + 14;

        memo = ph.memo;

        size = ph.size - 0.2;

    }*/

};

int main()

{
    Phone ph1("iphon", 2376, 64, 5.7);

    //Phone ph2(ph1);

    cout << "ph1:" << endl;

    ph1.call();

    ph1.call();

    ph1.sendMessage();

    ph1.surfInternet();
    

   /* cout << "ph2:" << endl;

    ph2.call();

    ph2.sendMessage();

    ph2.surfInternet();
*/
    return 0;

}