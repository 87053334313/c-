 
#include <iostream>

int main()
{
	system("chcp 1251");
	int i, k, m,s;
	std::cout << "Eneter k ="; std::cin >> k;
	std::cout << "Enter m = "; std::cin >> m;

	s = 0;
	for (int i = 1; i <= 100; i++) {
		if ((i > k) && (i < m))
			continue;
		s += i;
	}
	std::cout << "s = " << s;
}
 