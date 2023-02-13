/*
this solution is not valid in leet because it only considers the parentheses
will be closed immediately like "{}()" or "()" it will work in this case
but "({})" for this case will not work
*/
int isValid(char * s)
{
    int res=1;
    int flag=0,i=0;

    if (s[i] == '\0') return 0;

    while(s[i] != '\0')
    {
        switch(s[i])
        {
            case 40:
                if(s[i+1] != 41) res=0;
                else i=i+2;
                break;
            case 91:
                if(s[i+1] != 93) res=0;
                else i=i+2;
                break;
            case 123:
                if(s[i+1] != 125) res=0;
                else i=i+2;
                break;
            default: res=0;
        }
        if(!res) break;
    }
    return res;
}