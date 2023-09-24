//添加一个地址为静态成员，静态成员要初始化
#include <iostream>
using namespace std;

class Package
{
public:

    Package(int nID,string dz)
    {
        m_nID = nID;

       
        br = dz;
        //strcpy_s(br, dizhi);

        //br = dizhi;

        m_nCount++;

    }

    Package(Package& p);

    int GetID() { return m_nID; }

    static string Getdizhi()
    { 
        //br = dz;
        return br;
    }

    static int GetCount()

    {
        return m_nCount;
    }

    ~Package()

    {
        m_nCount--;

    }

private:

    int m_nID;

    // static char br[20];
    static string br;

    static int m_nCount;

};


Package::Package(Package& p)

{

    m_nID = p.m_nID;

    m_nCount++;

}


int Package::m_nCount = 0;
string Package::br = "a";

int main()

{

    Package A(2,"jj");

    cout << A.GetID() << endl;

    A.Getdizhi();

    A.GetCount();
    cout << A.Getdizhi() << endl;
    cout << Package::GetCount() << endl;

    Package B(2, "dhdhd");

    cout << B.GetID() << endl;

    B.Getdizhi();

    B.GetCount();

    cout << B.Getdizhi() << endl;
    cout << Package::GetCount() << endl;

    return 0;
}

