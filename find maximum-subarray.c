#include <stdio.h>

int main(void) {
// your code goes here
int A[16]={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
int left = 0,right = 0,sum = A[0],temp_sum = 0,temp_left = 0;
int i,j;
for (i=0;i<16;i++){
    temp_sum = (A[i]>(temp_sum + A[i]))?A[i]:(temp_sum + A[i]);
    printf("temp:%d Ai:%d\n",temp_sum,A[i]);
    if (temp_sum > sum){
        sum = temp_sum;
        right = i;
        left = temp_left;
    }
    if (temp_sum == A[i])
        temp_left = i;
    printf("t:%d s:%d\n",temp_sum,sum);
    for(j=left;j<=right;j++)printf("%d ",A[j]);
    printf("\n");
    printf("left = %d,right = %d,temp_left = %d\n",left ,right,temp_left);
}
    
return 0;
}
