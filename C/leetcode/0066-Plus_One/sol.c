//accepted in leet
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i;
    switch(digitsSize)
    {
        case 0:
        *returnSize=digitsSize;
        return digits;
        break;

        default:
        switch(digits[digitsSize-1])
        {
            case 0 ... 8:
            digits[digitsSize-1]+=1;
            *returnSize=digitsSize;
            break;
            
            case 9:
            i=digitsSize-1;
            while(i && digits[i]==9) i--;
            if(i || digits[i]<9)
            {
                *returnSize=digitsSize;
                i=digitsSize-1;
                while(digits[i]==9)
                {
                    digits[i]=0;
                    i--;
                }
                digits[i]=digits[i]+1;
            }
            else
            {
                *returnSize=digitsSize+1;
                digits=(int*)realloc(digits,(digitsSize+1)*sizeof(int));
                i=digitsSize;//last index
                digits[i]=0;
                i--;
                while(i>0)
                {
                    digits[i]=0;
                    i--;
                }
                digits[i]=1;

            }
            break;
        }

    }
    return digits;

}