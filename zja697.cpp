#include <cstdio>
#define f(x,i) for(int i=0;i<x;i++)

int main(int argc, char const *argv[])
{
	int n,m;
	while(~scanf("%d %d",&n,&m)){
		int sqar[n][n],x1,y1,x2,y2,sum=0;
		f(n,i)
			f(n,j)
				scanf("%d",&sqar[i][j]);
		//1<=n
		f(m,k){
			sum=0;
			scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
			for (int i = y1-1; i <= y2-1; ++i)
			{
				for (int j = x1-1; j <= x2-1; ++j)
				{
					sum+=sqar[i][j];
				}

			}
			printf("aa%daa\n",sum );
		}
		


	}
	return 0;
}
