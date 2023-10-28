#include <iostream>

bool posit(int n);
bool bigger(int a, int b);
int gcd(int a, int b);
void swp(int & a, int & b);
void prn(unsigned char c);

int main()
{
	typedef  unsigned char uc;
	int pa{ 0 }, pb{ 0 }, pc{ 0 };
	unsigned char qa{ 0 };
	std::cout << "\nEnter whole number to say if it's positive : ";
	std::cin >> pa;
	std::cout << pa << " is " << (posit(pa)? "positive":"negative") << std::endl;
	std::cout << "\nEnter whole number to say if it's bigger than previous one  : ";
	std::cin >> pb;
	std::cout << pb << " is " << (bigger(pa,pb) ? "bigger" : "not bigger")<< " than "<< pa << std::endl;
	std::cout << "gcd of " << pa << " and " << pb << " = " << gcd(pa, pb) << std::endl;
	if (bigger(pa,pb))
	{
		std::cout << "pa pb" << pa << "   " << pb << std::endl;
		swp(pa, pb);
		std::cout << "pa pb" << pa << "   " << pb << std::endl;
	}
	std::cout << "gcd of " << pa << " and " << pb << " = " << gcd(pa, pb) << std::endl;
	qa = pa & 0xff;
	std::cout << pa << " & " << 0xff << " = " << (int)qa << " "<< qa << std::endl;
	std::cout << qa << " % " << 10 << " = " << qa % 10 << std::endl;
	qa = qa % 10;
	std::cout << qa + '0' << " is the digit that corresponds to previous line." << std::endl;
	qa = qa + '0';
	std::cout << qa << " is the digit." << std::endl;
	std::cout << "\nNow prnt char optimized... \n";
	for (uc k = 0; k < (uc)255; k++)
	{
		//uc toclfu = (unsigned char)k;
		//prn(toclfu);
		prn(k);
	}
	std::cout << "\nBack printing ... \n";
	// try to print c, then wait, then erase c, then wait, then print c and d ... and so on
	// screen must appear .......  c    then
	//                    .......       then
	//                    .......  cd   then
	//                    .......  c    then
	//                    .......       then
	//                    .......  cde  then  ...

		
	std::cin.get();
	return 404390548;
}

bool posit(int n)
{
	return (n >= 0);
}

bool bigger(int a, int b)
{
	return b > a;
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void swp(int & a, int & b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void prn(unsigned char c)
{
	if (c < '0')
		std::cout << (unsigned int)c;
	else
		std::cout << c;
	std::cout << ' ';
}
