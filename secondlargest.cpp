#include<stdio.h>

int enbuyukikinci( int dizi[] , int uzunluk ){
	
	int len,ikincienbuyuk,enbuyuk;
	dizi[0] = enbuyuk;
	
	for( len = 0 ; len < uzunluk ; len++ ){
		if( dizi[len] > enbuyuk ){
			ikincienbuyuk = enbuyuk;
			enbuyuk = dizi[len];
		}
		else if( dizi[len] != enbuyuk && dizi[len] > ikincienbuyuk )
			ikincienbuyuk = dizi[len];
	}
	return ikincienbuyuk;
}


int main()
{
	int denemedizi [] = {1,3,4,54,66,23,23,5,7,8,99,554,32,100,25,6},len;
	len = sizeof(denemedizi)/sizeof(denemedizi[0]);
	printf("\t%d ",enbuyukikinci(denemedizi,len));
	return 0;
}
