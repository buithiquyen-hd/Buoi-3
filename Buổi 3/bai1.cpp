#include<iostream.h>
#include<iomanip.h>

using namespace std;
struct date
{
	int ngay,thang,nam;
};
class KH
{
	private:
		char hoten[20];
		date ngaysinh;
		char socm[10];
		char hokhau[30];
	public:
		friend istream &operator >> (istream &is ,KH &kh)
		{
			fflush(stdin);
			cout<<"\nNhap hoten :";
			is.getline(kh.hoten,20);
			cout<<"\nNhap ngay sinh :";
			is>>kh.ngaysinh.ngay;
			cout<<"\nNhap thang sinh :";
			is>>kh.ngaysinh.thang;
			cout<<"\nNhap nam sinh :";
			is>>kh.ngaysinh.nam;
			fflush(stdin);
			cout<<"\nNhap vao so chung minh :";
			is.getline(kh.socm,10);
			cout<<"\nNhap vao ho khau :";
			is.getline(kh.hokhau,30);
			return is;
		}
		
	
		char * gethokhau()
		{
			return hokhau;
		}
		int gettuoi()
		{
			return (2022 - ngaysinh.nam);
		}
		friend ostream &operator << (ostream &os ,KH& kh)
		{
			os<<setw(20)<<kh.hoten
			  <<setw(15)<<kh.ngaysinh.ngay
			  <<setw(1)<<"-"
			  <<setw(2)<<kh.ngaysinh.thang
    	      <<setw(1)<<"-"
			  <<setw(2)<<kh.ngaysinh.nam
			  <<setw(15)<<kh.socm
			  <<setw(20)<<kh.hokhau
			  <<setw(15)<<kh.gettuoi()<<endl;
			return os;
		}
		
};
void nhap(KH kh[] ,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap vao khach hang thu " <<i+1<< " :";
		cin>>kh[i];
	}
}

void xuat(KH kh[] ,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<kh[i];
	}
}
void kiemtra(KH kh[],int &n)
{
	cout<<"\nDANH SACH KHACH HANG HO KHAU O HA NOI:"<< endl;
	for(int i=0;i<n;i++)
	{
		if(strcmpi(kh[i].gethokhau() ,"HA NOI")==0)
		{
			cout<<kh[i];
		}
	}
}
void sapxep(KH kh[],int &n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(kh[i].gettuoi() < kh[j].gettuoi())
			{
				KH tmg =kh[i];
				kh[i] = kh[j];
				kh[j] = tmg;
			}
		}
	}
	cout<<"\n DANH SACH KHACH HANG GIAM DAN THEO TUOI LA: " << endl;
	xuat(kh,n);
}
int main()
{
	int n;
	cout<<"\nNhap vao so khach hang :";
	
	cin>>n;
	KH*kh = new KH[n];
	nhap(kh,n);
	kiemtra(kh,n);
	sapxep(kh,n);
}
