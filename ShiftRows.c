#include <stdio.h>
#include <stdlib.h>
void shiftRows(unsigned char* state) {
// Dịch trái hàng thứ 2 (hàng thứ nhất không thay đổi)
unsigned char temp = state[1];
state[1] = state[5];
state[5] = state[9];
state[9] = state[13];
state[13] = temp;
// Dịch trái hàng thứ 3 và 2
temp = state[2];
state[2] = state[10];
state[10] = temp;
temp = state[6];
state[6] = state[14];
state[14] = temp;
// Dịch trái hàng thứ 4, 3 và 2
temp = state[3];
state[3] = state[15];
state[15] = state[11];
state[11] = state[7];
state[7] = temp;
}
int main() {
// Một mảng 16 byte làm đầu vào cho hàm shiftRows
unsigned char state[16] = {
0x32, 0x88, 0x31, 0xE0,
0x43, 0x5A, 0x31, 0x37,
0xF6, 0x30, 0x98, 0x07,
0xA8, 0x8D, 0xA2, 0x34
};
printf("Trạng thái trước khi dịch hàng:\n");
for (int i = 0; i < 16; ++i) {
printf("%02X ", state[i]);
}
printf("\n");
// Gọi hàm shiftRows để thực hiện dịch hàng
shiftRows(state);
printf("Trạng thái sau khi dịch hàng:\n");
for (int i = 0; i < 16; ++i) {printf("%02X ", state[i]);
}
printf("\n");
return 0;
}
