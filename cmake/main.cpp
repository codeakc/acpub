#include <stdio.h>
#include <pthread.h>
#include <iostream>
#include <math.hpp>

using namespace std;

static void *ptcb(void *arg)
{
	int num1, num2;
	printf("%s: called\n", __func__);
	cout<<"Enter number 1: "<<endl;
	cin>>num1;
	cout<<"Enter number 2: "<<endl;
	cin>>num2;
	cout<<"Sum: "<<num1 + num2<<endl;
	return NULL;
}
int main(void)
{
	printf("Hello World!\n");
	cout<<"Hello World by cout"<<endl;
	pthread_t pt;
	if (pthread_create(&pt, NULL, ptcb, NULL))
	{
		printf("failed to create thread\n");
		return 1;
	}
	int *ret;
	if (pthread_join(pt, (void **)&ret))
	{
		printf("Failed to join thread\n");
		return 1;
	}
	printf("Add(3,5) = %d\n", add(3,5));
	return 0;
}
