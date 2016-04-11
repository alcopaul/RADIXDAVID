#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string bass(int str, int bac)
{
	string res = "";
	string lib = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ/-+*";
	if (str == 0)
	{
		return "0";
	}
	for (int i = str; 0 < i; i = (int)floor(i / bac))
	{
		res += lib.substr((i % bac), 1);
	}
	return res;
}

int main()
{
	string result = bass(153, 40);
	reverse(result.begin(), result.end());
	cout <<  result << '\n';
	char c = getchar();
	return 0;
}
/* RADIX DAVID by VP7O[NIHFEX] 04/11/2016 */
