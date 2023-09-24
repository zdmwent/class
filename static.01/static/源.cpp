//添加地址为正常成员，不需要初始化，可以直接赋值
#include <iostream>
using namespace std;

class Package
{
public:

    Package(int nID, string  dizhi)
    {
        m_nID = nID;

        //strcpy(br, dizhi);

        br = dizhi;

        m_nCount++;

    }

    Package(Package& p);

    int GetID() { return m_nID; }

     void Getdizhi() { cout << br << endl; }

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

    //char br[20];
     string br;

    static int m_nCount;

};


Package::Package(Package& p)

{

    m_nID = p.m_nID;

    m_nCount++;

}


int Package::m_nCount = 0;

int main()

{

    Package A(1, "sss");

   cout << A.GetID() << endl;

    A.Getdizhi();

    A.GetCount();

    cout << Package::GetCount() << endl;

    Package B(2, "dhdhd");

    cout << B.GetID() << endl;

    B.Getdizhi();

    B.GetCount();

    cout << Package::GetCount() << endl;

    return 0;
}

