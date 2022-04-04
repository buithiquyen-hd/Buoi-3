#include<iostream.h>
#include<string.h>
using namespace std;
class DATHUC
{
	public:
		int a,b,c,d;
	public:
		DATHUC(int a =0,int b = 0,int c = 0,int d = 0)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
		}
		
		
		void nhap()
		{
			cout<<"\nNHap vao bac 3 = ";
			cin>>a;
			cout<<"\nNHap vao bac 2 = ";
			cin>>b;
			cout<<"\nNHap vao bac 1 = ";
			cin>>c;
			cout<<"\n\t - NHap vao bac 0 = ";
			cin>>d;
			
		}
};
int main()
{
	DATHUC dt[2];
	for(int i=0;i<2;i++)
	{
		cout<<"\nNHap vao da  thuc thu "<<i+1<<": \n";
		dt[i].nhap();
	}
	cout<<"\n TONG 2 DA THUC LA :\t";
	cout<<"("<<dt[0].a + dt[1].a <<"x3 ) + "<<"("<<dt[0].b + dt[1].b<<"x2 ) + "<<"("<<dt[0].c + dt[1].c<<"x ) + "<<"("<<dt[0].d+ dt[1].d<<") = 0 "<<endl;
	cout<<"\n HIEU 2 DA THUC LA :\t";
	cout<<"("<<dt[0].a - dt[1].a <<"x3 ) + "<<"("<<dt[0].b - dt[1].b<<"x2 ) + "<<"("<<dt[0].c - dt[1].c<<"x ) + "<<"("<<dt[0].d- dt[1].d<<") = 0 "<<endl;
	
}