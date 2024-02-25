#include"JList.h"
using namespace jeff;
int main()
{
	DoubleLinkList<int> test;
	int testarr[] = {2,1,3,5,4,7,6,5,4};
	test.append(testarr, sizeof(testarr)/4);
	cout<<test.get(3);
	cout << test.get(5);
	cout << test.get(4);
	cout << test.get(4);
	cout << test.get(1);
	test.sort(JeffSort::insertSort);
}