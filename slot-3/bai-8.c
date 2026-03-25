#include <stdio.h>

int x = 100; // global

void test() {
  int x = 50;                                     // local
  printf("Gia tri cua x trong void() = %d\n", x); // shadowing
  return;
}

// có sự khác biệt về giá trị của x trong void() và x trong test() là vì:
// x trong test() đang nằm trong scope của test() là local x
// lệnh khai báo int x = 50; khởi tạo 1 biến mới trùng tên với global x là x
// khác với lệnh gán x = 50; nên không làm thay đổi giá trị của global x
// local x này chỉ tồn tại trong test() nên không làm ảnh hưởng đến global x

int main() {
  printf("Gia tri cua x trong main() = %d - truoc khi goi void()\n", x);
  test();
  printf("Gia tri cua x trong main() = %d - sau khi goi void()\n", x);

  return 0;
}
