// Not completed
void matrixSize(char*digits,int*rows,int*cols)
{
    int i=0;
    *rows=1;
    while(digits[i] !='\0')
    {   
        *rows= (digits[i]=='9' || digits[i]=='7') ? (*rows)*4:(*rows)*3;
        i++;
    }

    if(i==0) *cols=0;
    else *cols=i+1;

    if(*rows==1)
    *rows=0;

}

char ** letterCombinations(char * digits, int* returnSize){
    int r;
    int c;
    matrixSize(digits,&r,&c);

    int** arr=(int**)malloc(r*sizeof(int*));                 // allocation for rows
    for(int i=0;i<r;i++) arr[i]=(int*)malloc(sizeof(int)); // allocation for cols

    *returnSize=r;
}