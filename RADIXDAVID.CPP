#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

string bass(int str, int bac, string lib)
{
	string res = "";
	
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
int ssab(string h, int bac, string lib)
{
	int result = 0;
	for (int i = 0; i < h.length(); i++)
	{
		result += (int) lib.find(h.substr(i, 1)) * (int) pow(bac, ((h.length() - 1) - i));
	}
	return result;
}
int main()
{
	string lib = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ/-+*";
	string result = bass(1600, 40, lib);
	reverse(result.begin(), result.end());
	cout <<  result << '\n';
	printf("%d", ssab(result, 40, lib));
	char c = getchar();
	return 0;
}
/* RADIX DAVID by VP7O[NIHFEX] 04/14/2016 */
