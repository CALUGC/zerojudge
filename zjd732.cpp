#include <stdio.h>
#define size 100005
int arr[size];
int bi(int n,int l,int r){
	while(l<=r){
		int mid=(l+r)/2;
		if(n>arr[mid]) l=mid+1;
		else if (n<arr[mid]) r=mid-1;
		else return mid;
	}
	return 0;
	
}
int main(int argc, char const *argv[])
{
	int arr_len,q_num,q;
	scanf("%d",&arr_len);
	scanf("%d",&q_num);
	for (int i = 1; i <= arr_len; ++i) scanf("%d",&arr[i]);
	while(q_num--){
		scanf("%d",&q);

		printf("%d\n",bi(q,1,arr_len));
	}
	return 0;
}
