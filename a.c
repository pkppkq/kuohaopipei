#include <stdio.h>
int start(void);
int small(void);
int middle(void);

int start(void)
{
    char a;
    a=getchar();
    switch (a)
    {
    case '(':
        if(small())
        start();
        else
        return 0;
        break;
    case ')':
        while((a=getchar())!='\n');
        return 0;
        break;
    case '[':
        if(middle())
        start();
        else
        return 0;
        break;
    case ']':
    while((a=getchar())!='\n');
        return 0;
        break;

    default:
    return 1;
        break;
    }
}

int  small(void)
{
    char a;
    a=(getchar());
    switch (a)
    {
    case '(':
        if(small())
        {
            if(small())
            return 1;
            else
            
            return 0;
        }
        else
        return 0;
        break;
    case ')':
        return 1;
        
    case '[':
        if(middle())
        {
            if(small())
            return 1;
            else
            
            return 0;
        }
        else
        
        return 0;
        break;
    case ']':
    while((a=getchar())!='\n');
        return 0;
        break;

    
    default:
    
    return 0;
    break;
    }
}
int middle(void)
{
    char a;
    a = getchar();
    switch (a)
    {
    case '(':
        if (small())
        {
            if (middle())
                return 1;
            else
            
                return 0;
        }
        else
            return 0;
    case ')':
    while((a=getchar())!='\n');
        return 0;
    case '[':
        if (middle())
        {
            if (middle())
                return 1;
            else
            
                return 0;
        }
        else
        while((a=getchar())!='\n');
            return 0;
    case ']':
        return 1;
    default:
    
        return 0;
    }
}


int main() {
    int n,i;
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        
        if (start()) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}
