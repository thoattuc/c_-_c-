#include <stdbool.h>

// Ham kiem tra 1 so co phai la so nguyen to hay khong
bool isPrime(int num) {
    if (num <= 1) {
        return false;  // So 1 va cac so am khong phai la so nguyen to
    }
    if (num <= 3) {
        return true;   // So 2 va 3 la cac so nguyen to
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;  // Cac so chia het cho 2 va 3 khong phai la so nguyen to
    }
    int i;
    for (i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;  // Cac so chia het cho i va (i+2) khong phai la so nguyen to
        }
    }
    return true;
}

// Kiem tra so nhap vao n:
int main () {
	int n;
	printf("Input n = ");
	scanf("%d", &n);
	isPrime(n); // Chay ham kiem tra so nguyen to
}
