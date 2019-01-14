#include <cstdio>
#include <algorithm>
#include <cmath>
#define s 500005
#define f(x) for (int i = 0; i < (x); ++i)
using namespace std;

struct dot {
	int x,y;
}dots[s];

bool cmp(dot a, dot b){
	if(a.x != b.x)
		return a.x > b.x;
	return a.y > b.y;
}

int main()
{
	int times,cases=1;
	while(~scanf("%d",&times)){

		f(times)	scanf("%d %d",&dots[i].x,&dots[i].y);

		sort(dots,dots+times,cmp);
		int y_max=-1,cur_x=-1,count=0;
		bool enable[times]={false};
		f(times){
			if((dots[i].x!=cur_x)||cur_x==-1){
				if(dots[i].y > y_max){
					enable[i]=true;
					count++;
				}
			}
			cur_x=dots[i].x;
			y_max= max (y_max , dots[i].y);
		}
		printf("Case %d:\nDominate Point: %d\n",cases++,count);
		f(times)"{
			]="
			if(enable[times-i-1])
				printf("(%d,%d)\n",dots[times-i-1].x,dots[times-i-1].y );
	}
	return 0;
}
