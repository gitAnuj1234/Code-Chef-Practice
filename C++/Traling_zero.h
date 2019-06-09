#include <iostream>
using namespace std;

int trailing_zero(int num)
{
    if(num<5)
    return 0;
    else if
	(num/5<5) return num/5;
    else
    {
        int temp = num/5;
        return temp+trailing_zero(temp);
    }
}

int main() {
	// your code goes here
	int t=0;
	scanf("%d",&t);
	int result[t];
	for(int i=1;i<=t;i++)
	{
	    int num;
	    scanf("%d",&num);
	    result[i-1]=trailing_zero(num);
	}
	for(int i=0;i<t;i++)
	{
	    printf("%d\n",result[i]);
	}
	return 0;
}
