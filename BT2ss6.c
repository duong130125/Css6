#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,i,e,ucln,bcnn;
	printf("nhap so nguyen n,m lan luot: ");
	scanf("%d %d",&n,&m);
    do {
    	printf("********CACULATOR********\n");
    	printf("1. Tong hai so nguyen\n");
        printf("2. Hieu hai so nguyen\n");
        printf("3. Tich hai so nguyen\n");
        printf("4. Thuong hai so nguyen\n");
        printf("5. So du trong phep chia 2 so\n");
        printf("6. Uoc chung lon nhat\n"); 
        printf("7. Boi chung nho nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban:");
        int choice; 
	    scanf("%d",&choice);
        switch(choice){
        	case 1:
                printf("Tong hai so %d va %d la:\n",n,m,n+m);
                break;
            case 2: 
                printf("Hieu hai so %d va %d la:\n",n,m,n-m);
                break;
            case 3:
                printf("Tich hai so %d va %d la:\n",n,m,n*m); 
                break;
            case 4:
                printf("Thuong  hai so %d va %d la:\n",n,m,n/m); 
                break;
            case 5:
                printf("So du trong phep chia hai so nguyen la:\n",n,m,n%m); 
                break;
            case 6: 
                for(i = 1; i <= n || i <= m; i++) {
                    if( n%i == 0 && m%i == 0 )
                        ucln = i;
                }
		    	printf("UCLN cua 2 so %d va %d la: %d\n",n,m,ucln);
		    	break;
            case 7:
                for(i = 1; i <= n || i <= m; i++) {
                    if( n%i == 0 && m%i == 0 )
                        bcnn = i;
                }
                bcnn=n*m/ucln;
                printf("BCNN cua 2 so %d va %d la: %d\n",n,m,bcnn);
                break;
            case 8:
                exit(e);
            default:
                printf("Vui long chon tu 1-8\n");
        }
    } while("Vui long chon tu 1-8\n");
}
