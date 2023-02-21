//10-2-2023
char* longestCommonPrefix(char ** strs, int strsSize){
    
    int flag=0,count=0,minCount=0;
    char *ptr;
    for (int j=1;j<strsSize;j++)
    {
        count=0;
        for (int i=0;strs[0][i] !='\0' && strs[j][i]!='\0';i++)
        {
            if (strs[0][i] == strs[j][i]) count++;
            else
            {
                if (flag == 0) minCount=count;
                flag=1;
                if (minCount>count) minCount=count;
                break;
            }
        }
        if((flag==0) && (count>0)) {minCount=count; flag=1;}
        else if (count ==0) return "";
        else if(count < minCount) minCount=count;
    }
    
    if (strsSize == 1) 
    {
        while(strs[0][count] != '\0') count++;
        ptr=(char*)malloc(count*sizeof(char));
        ptr=strs[0];
        return ptr;
    }
    else
    {
        minCount++;
        ptr=(char*)calloc(minCount,sizeof(char));
        for (char i=0;i<(minCount-1);i++)
        {
            *ptr=strs[0][i];
            ptr++;
        }
        *ptr='\0';
        
    }
    return ptr-(minCount-1);
}