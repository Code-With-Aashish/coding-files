#include <iostream>
using namespace std;
class base
{
protected: // means the private varable are inharitaded.
	int a;

private:
	int b;

public:
	base() {}
};
/*						public Derivation     /   private Derivation     /   protected Drivation
1.private Members       Not Inharitade        /   Not Inharitade         /   Not Inharitade
2.protected Members     Protacted             /   Private                /   Protected\{private}
3.public Members        Public                /   Private                /   Private
*/
class derive : protected base // protected visiblity mode : In protected any varable or function is inharitade. In the derived classes.
{

public:
	void setdata()
	{
		a = 90;
		cout << a;
	}
};

int main()
{
	base b;
	derive d;
	d.setdata();

	return 0;
}