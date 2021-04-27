#include<iostream>
#include<conio.h>
using namespace std;
/*int main()
{
	while(!kbhit())
		printf("Press a key\n");
	return 0;
}*/

int main()
{
	char ch;
	while(1) {
		if(kbhit()) {
			// Stores the pressed key in ch
			ch = getch();

			// Terminates the loop
			// when escape is pressed
			if(int(ch) == 27)
				break;

			cout<<"\nKey pressed=  "<<ch;
		}
	}
	return 0;
}
