// Write a C program to calculate and prints the squares and cubes of the numbers from 0 to 20 and uses tabs to display them in a table of values.
#include<stdio.h>
#include<math.h>

int main()
{
    int sqr, cube, i;
    for(i=0; i<=20; i++)
    {
        sqr = pow(i, 2);
        cube = pow(i, 3);
        printf("%d\t%d\t%d\n", i, sqr, cube);
    }
    return 0;
}

// Expected Output :
// 0	0	0
// 1	1	1
// 2	4	8
// 3	9	27
// 4	16	64
// 5	25	125
// 6	36	216
// 7	49	343
// 8	64	512
// 9	81	729
// 10	100	1000
// 11	121	1331
// 12	144	1728
// 13	169	2197
// 14	196	2744
// 15	225	3375
// 16	256	4096
// 17	289	4913
// 18	324	5832
// 19	361	6859
// 20	400	8000
