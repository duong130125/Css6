#include<stdio.h>
int main(){
	int n,i,e,sum,en,max;
	do{
	printf("nhap so nguyen duong: ");
	scanf("%d",&n);
	}while(n<0);
	do{
		printf("********PRACTISE********\n");
		printf("1. in day so chia het cho 2 va giam dan (n>=so>=2)\n");
		printf("2. in cac so nho hon n va tinh tong\n");
		printf("3. in ra cac uoc so chan cua n\n");
		printf("4. in ra cac uoc so le va so luong cac uoc le cua n\n");
		printf("5. in ra uoc so le lon nhat cua n\n");
		printf("6. thoat\n");
		printf("lua chon cua ban la: ");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				i=n;
			    do{
			    	i--;
			    	if(i%2==0){
			    		printf("%d\n",i);
					}
			    }while(i>=2);
			    break;
			case 2:
				sum=0;
				i=n;
				do{
					--i;
					printf("%d ",i);
					sum=sum+i;
				}while(i>=2);
				printf("\ntong cua cac so nho hon n la: %d\n",sum);
				break;
			case 3:
				i=n;
				do{
					i--;
					if(i%2==0&&n%i==0){
						printf("%d\n",i);
					}
				}while(i>=2);
				break;
			case 4:
				i=n;
				do{
					i--;
					if(i%2!=0&&n%i==0){
						printf("%d\n",i);
						en++;
					}
				}while(i>=2);
				printf("so luong uoc le la: %d\n",en);
				break;
			case 5:
				i=n;
				max=0;
				do{
					i--;
					if(i%2!=0&&n%i==0){
						printf("%d\n",i);
						if(max<i){
							max=i;
						}
					}
				}while(i>=2);
				printf("uoc le lon nhat cua n la: %d\n",max);
				break;
			case 6:
				exit(e);
		default:
			printf("vui long chon so tu 1-6");
		}
	}while("vui long chon so tu 1-6");
}
