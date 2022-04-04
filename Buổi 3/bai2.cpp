#include<iostream.h>
#include<iomanip.h>

using namespace std;
class GV
{
	private:
		char hoten[30];
		int tuoi;
		char bangcap[20];
		char chuyennganh[20];
		float bacluong;
	public:
	friend istream &operator >> (istream &is,GV &gv)
	{
		fflush(stdin);
		cout<<"\nNhap ho ten :";
		is.getline(gv.hoten,30);
		cout<<"\nNhap vao so tuoi :";
		is>>gv.tuoi;
		fflush(stdin);
		cout<<"\nNhap vao bang cap :";
		is.getline(gv.bangcap,20);
		cout<<"\nNhap vao chuyen nganh :";
		is.getline(gv.chuyennganh,20);
		cout<<"\nNhap vao bac luong :";
		is>>gv.bacluong;
		return is;
	}
	float tienluong()
	{
		return bacluong * 610;
		
	} 
	friend ostream operator << (ostream &os,GV &gv)
	{
		os<<setw(20)<<gv.hoten
		<<setw(15)<<gv.tuoi
		<<setw(20)<<gv.bangcap
		<<setw(20)<<gv.chuyennganh
		<<setw(15)<<gv.bacluong
		<<setw(15)<<gv.tienluong()<<endl;
	}
	char * getchuyennganh()
	{
		return chuyennganh;
	}
};
void bang()
{
	cout<<setw(20)<<"HO TEN"
		<<setw(15)<<"TUOI"
		<<setw(20)<<"BANG CAP"
		<<setw(20)<<"CHUYEN NGANH"
		<<setw(15)<<"BAC LUONG"
		<<setw(15)<<"TIEN LUONG";
}
void sapxep(GV gv[],int &n)
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmpi(gv[i].getchuyennganh(),gv[j].getchuyennganh())>0)
			{
				GV tg = gv[i];
				gv[i] = gv[j];
				gv[j] = tg;
			}
		}
	}
	cout<<"\n DANH SACH TANG DAN THEO CHUYEN NGANH LA:" << endl;
	bang();
	 	for(int i=0;i<n;i++)
		{
			cout<<gv[i];
		}
}
int main()
{
	int n;
	cout<<"\n Nhap vao so giao vien :";
	cin>>n;
	GV *gv = new GV[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap vao giao vien  thu "<<i+1<<":";
		cin>>gv[i];
	}
	
	sapxep(gv,n);
}