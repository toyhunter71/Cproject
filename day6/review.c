#include <stdio.h>

int main0() { 

    //리뷰
    int array[5] = { 1,2,3,4,5 };
    int arr1[3] = { 0, };

    int num = 10;
    int* pnum = &num; // 변수의 주소를 저장하는 공간 : 포인터 변수

    *pnum = 30;

    printf("%d \n", num);      //30

    for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
        printf("%d ", array[i]);
    }
    
    array[0] = 4;
    array[1] = 4;
    array[2] = 4;
    array[3] = 4;
    array[4] = 4;    //5개 만들었으면 4번까지 있다 (0~4)

    printf("\n %d \n", array[3]);

    // 0.0 ~ 9.0 까지 보관하고 있는 배열 (1.0씩 증가)
    // 전부 출력

    double dnum[10] = { 0, };

    for (int i = 0; i < 10; i++) {

        printf("%0.1f \n", dnum[i]);
        dnum[i] = dnum[i] + 1.0;
    }

    










    return 0;
}

