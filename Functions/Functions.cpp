// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
/*void printsomthing();
int main()
{
	printsomthing();
    return 0;
}void printsomthing() {//This is a basic function(Reuseable code that can be used over and over again)
	printf_s("I'm a function\n");
	return;
}*/
void printSomething();
int tuna = 4;//this is a global variable
int main()
{//the tuna in here would be a local variable
	printf_s("I have %d tunas\n", tuna);
	printSomething();

	return 0;
}void printSomething() {
	printf_s("I have %d tunas\n", tuna);
	return;
}

