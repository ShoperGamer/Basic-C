#include <stdio.h> //input/output

int main()
{
    int start,end;

    printf("input start = "); //รับแม่สูตรคูณเริ่มต้น
    scanf("%d",&start);

    printf("input End = "); //รับแม่สูตรคูณจบท้าย
    scanf("%d",&end);

    //แสดงชื่อแม่สูตรคูณ
    for(int i = start; i <= end; i++){
    printf("---Table %d ---\n",i);

    //แสดงผลคูณ
    for(int l =1; l<=12; l++){
            printf("%d X %d = %d\n",i,l,i*l);

    }
    }

    return 0;
}

