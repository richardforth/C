/* mysql_mem_calc.c
 * *
 * *  Author: Richard A. Forth
 * *  Does:   Prompts for values and calculates approximate mysql memory usage
 * *  Date:   21-10-2021
 * *  Comments:
 * *     Based on inspiration taken from https://www.mysqlcalculator.com/
 * *
 * */
#include <stdio.h>
#include <string.h>
#include <math.h> // not strictly needed for simple addition but useful for future math problems

int main()
{

        // main variables for totals
        long int subtotal1 = 0;
        long int subtotal2 = 0;
        long double totalbytes = 0;
        long double totalkbytes = 0;
        long double totalMbytes = 0;
        long double totalGbytes = 0;

        // mysql variables - subtotals1
        int keybuffersize;
        int querycachesize;
        int tmptablesize;
        long int innodbbufferpoolsize;
        int innodbadditionalmempoolsize;
        int innodblogbuffersize;
        int maxconnections;

        // mysql variables - subtotals2
        int sortbuffersize;
        int readbuffersize;
        int readrndbuffersize;
        int joinbuffersize;
        int threadstack;
        int binlogcachesize;


        // subtotal1 section
        printf("key_buffer_size: ");
        scanf("%d", &keybuffersize);
        subtotal1 += keybuffersize;


        printf("query_cache_size: ");
        scanf("%d", &querycachesize);
        subtotal1 += querycachesize;

        printf("tmp_table_size: ");
        scanf("%d", &tmptablesize);
        subtotal1 += tmptablesize;

        printf("innodb_buffer_pool_size: ");
        scanf("%ld", &innodbbufferpoolsize);
        subtotal1 += innodbbufferpoolsize;

        printf("innodb_additional_mem_pool_size: ");
        scanf("%d", &innodbadditionalmempoolsize);
        subtotal1 += innodbadditionalmempoolsize;

        printf("innodb_log_buffer_size: ");
        scanf("%d", &innodblogbuffersize);
        subtotal1 += innodblogbuffersize;



        printf("\n\nSubtotal1 (bytes): %ld\n\n", subtotal1);


        // subtotal2 section
        
        printf("max_connections: ");
        scanf("%d", &maxconnections);
      
        printf("sort_buffer_size: ");
        scanf("%d", &sortbuffersize);
        subtotal2 += sortbuffersize;

        printf("read_buffer_size: ");
        scanf("%d", &readbuffersize);
        subtotal2 += readbuffersize;

        printf("read_rnd_buffer_size: ");
        scanf("%d", &readrndbuffersize);
        subtotal2 += readrndbuffersize;

        printf("join_buffer_size: ");
        scanf("%d", &joinbuffersize);
        subtotal2 += joinbuffersize;

        printf("thread_stack: ");
        scanf("%d", &threadstack);
        subtotal2 += threadstack;

        printf("binlog_cache_size: ");
        scanf("%d", &binlogcachesize);
        subtotal2 += binlogcachesize;

        subtotal2 *= maxconnections;
        printf("\n\nSubtotal2 (bytes): %ld\n\n", subtotal2);

        totalbytes = subtotal1 + subtotal2;
        
        // Do some floating point calculations
        totalkbytes = totalbytes / 1024;
        totalMbytes = totalkbytes / 1024;
        totalGbytes = totalMbytes / 1024;

        // Print results
        printf("\nTotal (kbytes): %.2Lf", totalkbytes);
        printf("\nTotal (Mbytes): %.2Lf", totalMbytes);
        printf("\nTotal (Gbytes): %.2Lf", totalGbytes);
        printf("\n\nDone!\n");

        // End Program
        return 0;
}
