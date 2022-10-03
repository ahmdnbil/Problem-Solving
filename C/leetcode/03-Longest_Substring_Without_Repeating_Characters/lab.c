typedef unsigned int u32;  
typedef unsigned char u8;  

u32 lengthOfLongestSubstring(u8 * s){
u32 local_u32Count=0;
u32 local_u32MaxCount=0;
u32 local_u32Index=0,local_u32Flag=0,local_u32StopPoint=0;
    while(s[local_u32Index] != '\0')
    {
        for(int i=local_u32StopPoint;i<local_u32Index;i++)
        {
            if(s[i]==s[local_u32Index])
            {
                local_u32Flag=1;
                local_u32Index=i+1;
            }
        }

        if(local_u32Flag)
        {
            local_u32Flag=0;
            local_u32StopPoint=local_u32Index;
            local_u32Count=1;
        }
        else
        {
            local_u32Count++;
            if(local_u32MaxCount<local_u32Count)
                local_u32MaxCount=local_u32Count;
        }

        local_u32Index++;

    }


    return local_u32MaxCount;
}