#include <stdio.h>
 
int main(void) {
    printf("[%+4d]", 32);//[  +32]
    printf("[%-1d]", -32);//[  +32]
    printf("[%+0.3f]", 1.414);//[  +1.414]
    return 0;
}
// so sau dau cong bieu thi so dau cach truoc so do
// so sau dau cham bieu thi so chu so can lay sau dau phay
// cung o 2 cho deu co dau tru thi moi in ra dau tru
//cung o 2 cho deu co dau cong thi moi in ra dau cong
// neu 2 dau doi nhau se khong in ra dau