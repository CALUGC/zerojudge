#include <cstdio>
#define f(x,i) for (int i = 0; i < x; ++i)

int main(int argc, char const *argv[])
{
	int n,m,sqar[505][505];
	while(~scanf("%d %d",&n,&m)){

		int x1,y1,x2,y2;
		f(n,i)
			f(n,j)
				scanf("%d",&sqar[i][j]);

		while(m--){
			int sum=0;
			scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

			for (int i = y1-1; i <=y2-1 ; ++i)
				for (int j = x1-1; j <=x2-1 ; ++j)
					sum+=sqar[j][i];
			printf("%d\n",sum );

		}
	}
	return 0;
}
