#define MAX_INT_POS 2147483647
#define MAX_INT_NEG -2147483648

//check if char is an valid number or not
int numberOrNot(char s)
{
    return ((s>='0') && (s <= ('0'+9))) ? 1:0;
}

//this will be vaild input
int checkValidInput (char s)
{
    if (((s>='0') && (s <= ('0'+9))) || s == '+' || s =='-' || s== ' ') return 1;
    else return 0;
}

int numberCount(char *s)
{
    int count =0,i=0,flag=0,numberFlag=0,nonZeroFlag=0;
    while(s[i]!='\0')
    {
        if(numberOrNot(s[i]) || s[i]==' ' || s[i]=='+' || s[i] =='-')
        {
        flag=1;

        if (numberOrNot(s[i]))
        {
            /*this if statment to count the numbers from first number in string which 
            is non-zero number for examble:-
            "0000323"  --> 3
            "10000323" --> 8
            */ 
            if (s[i] != '0' && !nonZeroFlag  ) nonZeroFlag=1;
            if (nonZeroFlag) count++;
            numberFlag=1;
        }
        else if (s[i] == ' ' && numberFlag == 1) return count;
        }
        else if (flag==1) return count;
        i++;
    }
    return count;
}

int myAtoi(char * s)
{
    int i=0,number=0,mul=1,flag=0,count,numberFlag=0,numbersCount=0;
    count =numberCount(s);
    while(s[i] != '\0')
    {
        if(checkValidInput(s[i]))
        {
            flag=1;
            if(numberOrNot(s[i]))
            {
                numberFlag=1;
                number=number *10+mul*(s[i]-'0');
                numbersCount++;
                
            }
            else if (s[i] == '-')
            {
                mul = -1;
                if(numberFlag ) return number;
                numberFlag=1;
            }
            else if (s[i] == '+')
            {
                mul = 1;
                if(numberFlag ) return number;
                numberFlag=1;
            }
            else if (s[i]==' ' &&  numberFlag==1) return number;
            
        
            //for limits constraint
            if (count > 10 && number != 0)
            {
                if (number > 0) return MAX_INT_POS;
                if (number < 0) return MAX_INT_NEG;
            }
            else if (count == 10 && number != 0)
            {
                if (number > 0)
                {
                    if (number >MAX_INT_POS/(int)pow(10,10-numbersCount)  ) return MAX_INT_POS;
                    else if (number==MAX_INT_POS/(int)pow(10,10-numbersCount) && numbersCount==9 && s[i+1]-'0' > 7 ) return MAX_INT_POS;
                }
                else if (number < 0)
                {
                    if (number <MAX_INT_NEG/(int)pow(10,10-numbersCount)  ) return MAX_INT_NEG;
                    else if (number==MAX_INT_NEG/(int)pow(10,10-numbersCount) && numbersCount==9 && s[i+1]-'0' > 8 ) return MAX_INT_NEG;
                }
                
                
            }
        }
        else if (flag ==1) break;
        else if (flag ==0) break;
        i++;
    }
    return number;
}