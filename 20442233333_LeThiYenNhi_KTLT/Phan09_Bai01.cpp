#include <stdio.h>
#include<math.h>
// Hàm đệ quy giải bài toán tháp Hà Nội
void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
	if (n == 1) {
		printf("Chuyen dia 1 tu cot %c sang cot %c\n", from_rod, to_rod);
		return;
	}
	TowerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	printf("Chuyen dia %d tu cot %c sang cot %c\n", n, from_rod, to_rod);
	TowerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main() {
	int n; // Số lượng đĩa
	printf("Nhap so luong dia: ");
	scanf_s("%d", &n);
	// Gọi hàm TowerOfHanoi với số lượng đĩa và tên các cột		n	0	int

	TowerOfHanoi(n, 'A', 'C', 'B');
	return 0;
}