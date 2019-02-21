#include <cstdio>

int sqa[105][105],w,h;

void plus(int mode){
	switch(mode){
		case 0: w++;
		break;
		case 1: h++;
		break;
		case 2: w--;
		break;
		case 3: h--;
		break;
	}
}

void deplus (int mode){
	switch(mode){
		case 0: h++;
		break;
		case 1: w++;
		break;
		case 2: h--;
		break;
		case 3: w--;
		break;
	}
}

void sqar(int n, bool dir ){
	for (int i = 0; i < 105; ++i)
		for (int j = 0; j < 105; ++j)
			sqa[i][j]=0;
	w=0,h=0;
	int mode=0;
	if(dir){
		for (int i = 0; i < n*n; ++i)
		{
			if(sqa[h][w]!=0||w==-1||h==-1||w==n||h==n){
				//printf("mode to %d\n",(mode%4));

					switch(mode){
					case 0: w--; h++;
					break;
					case 1: w--; h--;
					break;
					case 2: w++; h--;
					break;
					case 3: w++; h++;
					break;
					}
					mode=(mode+1)%4;
			}

				sqa[h][w]=(i+1);
				//printf("i=%d h=%d W=%d,\n",i+1,h+1,w+1 );
				plus(mode);
			
		}
		
	}
	else
		for (int i = 0; i < n*n; ++i)
		{
			if(sqa[h][w]!=0||w==-1||h==-1||w==n||h==n){

				switch(mode){
					case 0: w++; h--;
					break;
					case 1: w--; h--;
					break;
					case 2: w--; h++;
					break;
					case 3: w++; h++;
					break;
					}
					mode=(mode+1)%4;
				}
					sqa[h][w]=(i+1);
					deplus(mode);
		}
}




int main(int argc, char const *argv[])
{
	int t,n,dir;
	while(~scanf("%d",&t)){
		for (int i = 0; i < t; ++i)
		{
			scanf("%d %d",&n,&dir);
			sqar(n,dir%2);
			for (int i = 0; i < n; ++i){
				for (int j = 0; j < n; ++j){
					printf("%5d",sqa[i][j]);
				}
				printf("\n");
			}

		}
	}
	return 0;
}
