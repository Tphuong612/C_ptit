#include <stdio.h>

//Khai báo cấu trúc với lệnh struct
struct people1{
    int old; // tuổi
    char *name; // tên
    int height; // chiều cao
    char *sex; // giới tính
};

//Khai báo cấu trúc với lệnh typedef struct
typedef struct{
    int old; // tuổi
    char *name; // tên
    int height; // chiều cao
    char *sex; // giới tính
}people2;

int main(void) {
    //Khởi tạo thực thể BaKien, gán và in giá trị từ struct people1
    struct people1 BaKien;
    BaKien.old = 40;
    BaKien.name = "BaKien";
    BaKien.height = 160;
    BaKien.sex = "male";  
    printf("BaKien ten la %s, nam nay %d tuoi\n", BaKien.name, BaKien.old );


    //Khởi tạo thực thể ThiNo bằng cách gán trực tiếp giá trị từ struct people1
    struct people1 ThiNo = {18, "ThiNo", 150, "female"};
    printf("ThiNo ten la %s, nam nay %d tuoi\n", ThiNo.name, ThiNo.old );
    
    //Khởi tạo thực thể ChiPheo bằng cách gán trực tiếp giá trị từ struct people2
    people2 ChiPheo = {20, "ChiPheo",180, "male" };
    printf("ChiPheo ten la %s, nam nay %d tuoi\n", ChiPheo.name, ChiPheo.old );

    return 0;
}
