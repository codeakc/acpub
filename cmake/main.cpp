#include <stdio.h>
#include <pthread.h>
#include <iostream>

using namespace std;

static void *ptcb(void *arg)
{
	printf("%s: called\n", __func__);
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
	return 0;
}
