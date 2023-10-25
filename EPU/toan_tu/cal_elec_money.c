#include <stdio.h>
#include <conio.h>

#define TDM 1000 /*Trong dinh muc*/
#define NDM 2000 /*Ngoai dinh muc*/
#define HGD 100 /*Ho gia dinh*/
#define HKD 250 /*Ho kinh doanh*/
#define HSX 420 /*Ho san xuat*/

int main() {
	int n, STT;
	int SoTien;
	printf("Input elec meter number = ");
	do {
		scanf("%d", &n);
	} while (n < 0);
	printf("Nhap loai ho:\n*Ho gia dinh: 1\n*Ho kinh doanh: 2\n*Ho san xuat: 3\n");
	do {
		scanf("%d", &STT);
	} while (STT<1 || STT>3);
	int DM;
	switch (STT) {
		case 1:
			DM = HGD;
			break;
		case 2:
			DM = HKD;
			break;
		case 3:
			DM = HSX;
			break;
	}
	if(n - DM > 0) {
		SoTien = DM * TDM + (n - DM) * NDM;
	} else {
		SoTien = n * TDM;
	}
	printf("So tien phai tra: %d", SoTien);
}
