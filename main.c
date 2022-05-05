#include<stdio.h>
#include<string.h>
#include<stdint.h>

**
 * @brief finds ascii value of array of characters and returns total sum of all ascii values
 * 
 * @param name 
 * @return int 
 */
int find_ascii_value(char *name)
{
    int num,sum=0;
    for( int i=0; name[i] != '\0' ; i++)
    {
    printf("ASCII value of %c is: %d\n",name[i],name[i]);
    num =(int)name[i];
    sum = sum + num;
    } 
    return sum;
}

**
 * @brief converts ascii total sum into hexadecimal 
 * 
 * @param sum 
 * @return int 
 */
int ascii_sum(int sum)
{
    char hex[15];
    int j=0,i=0;
    while(sum != 0)
    {
        int temp=0;
        temp = sum % 16;  //to find hexadecimal
        if( temp < 10)
        {
            hex[i] = 48 + temp;
            i++;
        }
        else
        {
            hex[i] = 55 + temp;
            i++;
        }
        sum=sum/16;
    }
    printf("HEX sum:");
    for(j=i-1 ; j >= 0; j--)
    printf("%c",hex[j]);
    return 0;

}
int main()
{
    char name[15];
    int sum;
    printf("Enter name: ");
    scanf("%[^\n]%*c",&name);
    sum = find_ascii_value(&name);
    printf("\nASCII Sum = %d\n", sum);
    ascii_sum(sum);

    return 0;
}
