#include<stdio.h>
int main(){
	int n1,n2,n3,e,sum,average,max,min;
	printf("nhap lan luot 3 so nguyen:");
	scanf("%d %d %d",&n1,&n2,&n3);
	do{
		printf("********CACULATOR********\n");
		printf("1. tong 3 so\n");
		printf("2. trung binh cong 3 so\n");
		printf("3. so lon nhat, nho nhat trong 3 so\n");
		printf("4. thoat\n");
		printf("lua chon cua ban la:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				sum=n1+n2+n3;
				printf("tong cua 3 so la: %d\n",sum);
				break;
			case 2:
				average=(n1+n2+n3)/3;
				printf("trung binh cong cua 3 so la: %d\n",average);
				break;
			case 3:
				max=n1;
				min=n1;
				if(max<n2){
					max=n2;
					if(max<n3){
						max=n3;
					}
				}else if(max<n3){
					max=n3;
				}
				if(min>n2){
					min=n2;
					if(min>n3){
						min=n3;
					}
				}else if(min>n3){
					min=n3;
				    }
				printf("so lon nhat va nho nhat trong 3 so lan luot la: %d %d\n",max,min);
				break;
			case 4:
				exit(e);
		    default:
			printf("vui long chon so tu 1-4\n");
		}
	}while("vui long chon so tu 1-4\n");
}
