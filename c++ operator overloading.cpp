#include<iostream>
using namespace std;
class abc{
	int a,b,c;
	public:
		abc(int x, int y, int z){
			a=x;
			b=y;
			c=z;
		}
		void show(){
			cout<<a<<endl<<b<<endl<<c;
		}
		int operator -()
		{
			a=-a;
			b=-b;
			c=-c;
		}
};
main(){
	abc a1(10,20,30);
	abc a2(-10,-20,-30);
	
	-a1;
	-a2;
	a1.show();
	cout<<endl;
	a2.show();
}
