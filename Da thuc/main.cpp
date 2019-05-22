#include<iostream>
 
using namespace std;
 
#include<math.h>
 
class DaThuc
{
    int iN;
    float *arrHeSo;
public:
    DaThuc()
    {
        iN=0;
        arrHeSo=NULL;
    }
    DaThuc(int n, float *heso)
    {
        iN = n;
        arrHeSo=new float[iN+1];
        for(int i=0;i<=iN;i++)
            arrHeSo[i]=heso[i];
    }
    DaThuc(const DaThuc &x)//phuong thuc thiet lap sao chep
    {
        iN=x.iN;
        arrHeSo=new float[iN+1];
        for(int i=0;i<=iN;i++)
            arrHeSo[i]=x.arrHeSo[i];
    }
    DaThuc(int x)//chuyen kieu bang phuong thuc thiet lap
    {
        iN=0;
        arrHeSo=new float[1];
        arrHeSo[0]=(float)x;
    }
    friend istream& operator>> (istream& is, DaThuc &x)
    {
        cout<<"Nhap so bac cua da thuc a: ";
        is>>x.iN;
        x.arrHeSo=new float[x.iN+1];
        cout<<"Nhap mot mang lan luot cac he so: ";
        for(int i=0;i<=x.iN;i++)
            is>>x.arrHeSo[i];
        return is;
    }
    friend ostream& operator<< (ostream& os, DaThuc x)
    {
        //os<<x.iN<<endl;       
        for(int i=0;i<=x.iN;i++)
            os<<x.arrHeSo[i]<<" ";
        return os;
    }
    float operator() (float x)//tinh gia tri da thuc
    {
        float kq=0;
        float luythua=1.0;
        for(int i=0;i<=iN;i++)
        {
            kq=kq+arrHeSo[i]*luythua;
            luythua=luythua*x;
        }
        return kq;
    }
         
    friend DaThuc operator+ (DaThuc a, DaThuc b)
    {
        DaThuc kq;
        if(a.iN>=b.iN)
            kq=b.TinhTong(a);       
        else
            kq=a.TinhTong(b);
        return kq;
    }
    DaThuc TinhTong(DaThuc a)
    {
        DaThuc kq;
        kq.iN=a.iN;
        kq.arrHeSo=new float[kq.iN+1];
        for(int i=0;i<=iN;i++)
            kq.arrHeSo[i]=arrHeSo[i]+a.arrHeSo[i];
        for(int i=iN+1;i<=a.iN;i++)
            kq.arrHeSo[i]=a.arrHeSo[i];
        return kq;
    }
     
    DaThuc& operator= (const DaThuc &x)//toan tu gan
    {
        delete arrHeSo;
        iN=x.iN;
        arrHeSo = new float[iN+1];
        for(int i=0;i<=iN;i++)
            arrHeSo[i]=x.arrHeSo[i];
        return *this;
    }
    float& operator[] (int index)//toan tu tra ve he so
    {
        return arrHeSo[index];
    }
    ~DaThuc()//phuong thuc huy bo
    {
        delete arrHeSo;
    }
};
int main()
{
    DaThuc a;
    cin>>a;
    float heso[4]={1.0,2.0,3.0,4.0};
    DaThuc b(3,heso);
    cout<<endl<<"Da thuc a la: ";
    cout<<a;
    cout<<endl<<"Da thuc b la: ";
    cout<<b;
    cout<<endl<<"Gia tri cua bieu thuc a(1.5): ";
    cout<<a(1.5); //operator() - tinh gia tri bieu thuc 
    cout<<endl<<"Tong cua a+b= ";
    DaThuc kq=a+b;//DaThuc + Da Thuc
    cout<<kq;
    cout<<endl<<"Tong cua a+3= ";
    kq=a+3;//DaThuc + int
    cout<<kq;
    cout<<endl<<"Tong cua 4+a= ";
    kq=4+a;//int + DaThuc
    cout<<kq;
    cout<<endl<<"He so dau tien cua a: ";
    cout<<a[0];//operator[]
    cout<<endl<<"He so dau tien cua a sau khi cap nhat: ";
    a[0]=6;//operator[]
    cout<<a[0]<<endl;   
 
    return 0;
}