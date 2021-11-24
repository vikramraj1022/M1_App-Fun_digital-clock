#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

int main()
{

    int c,h,m;
    int s=0,i=1;
    char a[3];
    char aa[3]="AM";
    printf("Enter time (HH:MM)");
    scanf("%d%d",&h,&m);
    printf("\nAM OR PM ");
    scanf("%s",a);

    if(strcmp(a,aa)==0)
    {
        c=2;
    }
     else
    {
        c=1;
    }
    start:
        for(i=1;i<=43200;i++)

        {


            s++;
            if(s>59)
            {
                m++;
                s=0;


            }
            if(m>59)
            {
                h++;
                m=0;

            }
            if(h>11)
            {
            c++;

            h=0;
            m=0;

        goto start;
}

Sleep(1000);
system("cls");
printf("%d:%d:%d",h,m,s);
if(c%2==0)
{

printf(" AM ");
}
else
{
    printf(" PM ");
}

return 0;
}

}
