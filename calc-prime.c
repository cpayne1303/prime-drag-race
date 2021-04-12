# include<stdbool.h>
# include <stdio.h>
# include<stdlib.h>
# include<math.h>
# include<time.h>
int* calcprime(int limit)
{
int mx=0;
	if(limit%2==0)
	{		
	mx=(limit/2)-1;
	}
	else
	{
		mx=limit/2;
	}
		bool* boollist = calloc((mx), sizeof(bool));
	for(int i=1; i<(sqrt((limit)/2)-1); i++)
{
if(!boollist[(i)])
{
int t=(i*2)+1;
	int j=((t*t)-1)/2;
while(j<=mx)
{
boollist[j]=true;
j+=t;
	}
}
}
	int* primes = malloc((mx+2)*sizeof(int));
int k=2;
for(int i=1; i<=mx; i++)
	{
primes[k]=(i*2)+1;
k+=!boollist[i];
}
primes[0]=k;
primes[1]=2;
free(boollist);
return primes;
}
int main()
{
	int st = time(NULL);
	int en=0;
	int passes=0;
	while(en<10)
	{
		int* tt = calcprime(1000000);
		passes++;
		en=time(NULL)-st;
	}
int* tt = calcprime(100);
	for(int kk=1; kk<tt[0]; kk++)
	{
		printf("%d\n", tt[kk]);
	}
	free(tt);
	printf("%d\n", passes);
	return 0;
}
