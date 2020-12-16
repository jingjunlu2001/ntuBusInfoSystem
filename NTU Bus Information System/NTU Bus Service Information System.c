#include<stdio.h>
#include<stdlib.h>

int main_exit;
void menu(void)
{
    int choice;
    system("cls");
    choise_selection:
        printf("Which bus do you want to take(key in the number of the bus)?\n");
        printf("\t\t1. Campus Loop-Red\n\t\t2. Campus Loop-Blue\n\t\t3. Campus Rider\n\t\t4. Campus Weekend Rider\n\t\t5. 179\n\t\t6. 179A\n\t\t7. 199\n");
        scanf("%d", &choice);
        system("cls");
        switch(choice)
        {
            case 1:clr();
            break;
            case 2:clb();
            break;
            case 3:cr();
            break;
            case 4:cwr();
            break;
            case 5:sbs();
            break;
            case 6:sbs();
            break;
            case 7:sbs();
            break;
            default:{
            printf("\n\t\tInvalid!\a");
            goto choise_selection;
            break;}
        }
}

void sbs(void)
{
    system("cls");
    printf("Please go to SBS Transit official website(https://www.sbstransit.com.sg/Service/BusService) for more information.");
    printf("\nEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    if (main_exit == 1)
    {
        system("cls");
        menu();
    }
    else
    {
        system("cls");
        close();
    }
}

int time_calculation(int t, int a)
{
    int result, h, min;
    min = t % 100;
    h = (t - min) / 100;
    if(min + a >= 60)
        {
            h++;
            min = min + a - 60;
        }
    else
        min = min + a;
    result = h * 100 + min;
    return result;
}

void close(void)
{
    system("cls");
    printf("\t\tThank you for using the system. Hope to see you again!");
}

void clr(void)
{
    int dep_t, a, arr_t, start, end;
    system("cls");
    system("color 4");
    printf("\t\tCAMPUS LOOP-RED");
    departing_time:
        printf("\n\t\tEnter your departing time(e.g. 830, 2000):");
        scanf("%d", &dep_t);
        system("cls");
        if(dep_t >= 730 && dep_t <= 2300)
            {
                printf("\t\tChoose your starting station and destination\n");
                printf("\t\t1. Hall 11\n\t\t2. Crescent Hall\n\t\t3. Hall 12\n\t\t4. LWN\n\t\t5. SBS\n\t\t6. EEE\n\t\t7. Hall 7\n\t\t8. Yunnan Garden\n\t\t9. Hall 4\n\t\t10. Hall 1\n\t\t11. Hall 2\n\t\t12. Hall 9\n\t\t13. Hall 11\n");
                scanf("%d %d", &start, &end);
                if(start < end)
                    a = end - start;
                else
                    a = end - start + 14;
                arr_t = time_calculation(dep_t, a);
                printf("\t\tThe estimated arrival time is %d", arr_t);
            }
        else
            {
                printf("\t\tSorry, the bus service starts at 7:30 am.\n\a");
                goto departing_time;
            }
    printf("\nEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    if (main_exit == 1)
    {
        system("cls");
        menu();
    }
    else
    {
        system("cls");
        close();
    }
}

void clb(void)
{
    int dep_t, a, arr_t, start, end;
    system("cls");
    system("color 1");
    printf("\t\tCAMPUS LOOP-BLUE");
    departing_time:
        printf("\n\t\tEnter your departing time(e.g. 830, 2000):");
        scanf("%d", &dep_t);
        system("cls");
        if(dep_t >= 730 && dep_t <= 2300)
            {
                printf("\t\tChoose your starting station and destination\n");
                printf("\t\t1. Hall 11\n\t\t2. Hall 9\n\t\t3. Hall 6\n\t\t4. Hall 4\n\t\t5. Yunnan Garden\n\t\t6. SPMS\n\t\t7. EEE\n\t\t8. CEE\n\t\t9. NIE\n\t\t10. Hall 16\n\t\t11. Hall 14\n\t\t12. Crescent Hall\n");
                scanf("%d %d", &start, &end);
                if(start < end)
                    a = end - start;
                else
                    a = end - start + 12;
                arr_t = time_calculation(dep_t, a);
                printf("\t\tThe estimated arrival time is %d", arr_t);
            }
        else
            {
                printf("\t\tSorry, the bus service starts at 7:30 am.\n\a");
                goto departing_time;
            }
    printf("\nEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    if (main_exit == 1)
    {
        system("cls");
        menu();
    }
    else
    {
        system("cls");
        close();
    }
}

void cr(void)
{
    int dep_t, a, arr_t, start, end, wk;
    system("cls");
    system("color 2");
    printf("\t\tCAMPUS RIDER\n");
    printf("\t\tNote: Campus Rider service is only available on weekdays.\n\t\tFor weekends, please take Campus Weekend Rider.");
    printf("\n\t\tEnter 1 to continue and 0 to proceed to Campus Weekend Rider Page.");
    scanf("%d", &wk);
    if(wk == 1)
    {
        departing_time:
            printf("\t\tEnter your departing time(e.g. 830, 2000):");
            scanf("%d", &dep_t);
            system("cls");
            if(dep_t >= 730 && dep_t <= 2300)
                {
                    printf("\t\tChoose your starting station and destination\n");
                    printf("\t\t1. Admin Building\n\t\t2. Opp Hall 2\n\t\t3. Pioneer\n\t\t4. Hall 1\n\t\t5. Hall 2\n\t\t6. SSC\n");
                    scanf("%d %d", &start, &end);
                    if(start < end)
                        a = 3 * (end - start);
                    else
                        a = 3 * (end - start + 6);
                    arr_t = time_calculation(dep_t, a);
                    printf("\t\tThe estimated arrival time is %d", arr_t);
                }
            else
                {
                    printf("\t\tSorry, the bus service starts at 7:30 am.\n\a");
                    goto departing_time;
                }
        printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        if (main_exit == 1)
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            close();
        }
    }
    else
        cwr();
}

void cwr(void)
{
    int dep_t, a, arr_t, start, end, wk;
    system("cls");
    system("color 5");
    printf("\t\tCAMPUS WEEKEND RIDER\n");
    printf("\t\tNote: Campus Weekend Rider service is only available on weekends.\n\t\tFor weekdays, please take Campus Rider.");
    printf("\n\t\tEnter 1 to continue and 0 to proceed to Campus Rider.");
    scanf("%d", &wk);
    if(wk == 1)
    {
        departing_time:
            printf("\t\tEnter your departing time(e.g. 830, 2000):");
            scanf("%d", &dep_t);
            system("cls");
            if(dep_t >= 730 && dep_t <= 2300)
                {
                    printf("\t\tChoose your starting station and destination\n");
                    printf("\t\t1. Admin Building\n\t\t2. ADM\n\t\t3. LWN\n\t\t4. SBS\n\t\t5. EEE\n\t\t6. Hall 7\n\t\t7. Yunnan Garden\n\t\t8. Hall 4\n\t\t9. Pioneer\n\t\t10. Hall 1\n\t\t11. Hall 2\n\t\t12. SSC\n");
                    scanf("%d %d", &start, &end);
                    if(start < end)
                        a = 2 * (end - start);
                    else
                        a = 2 * (end - start + 12);
                    arr_t = time_calculation(dep_t, a);
                    printf("\t\tThe estimated arrival time is %d", arr_t);
                }
            else
                {
                    printf("\t\tSorry, the bus service starts at 7:30 am.\n\a");
                    goto departing_time;
                }
        printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        if (main_exit == 1)
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            close();
        }
    }
    else
        cr();
}

int main()
{
    printf("\t\tWelcome to NTU Bus Service information System.\n");
    printf("\t\tEnter 1 to continue and 0 to exit.");
    scanf("%d",&main_exit);
    if (main_exit == 1)
    {
        system("cls");
        menu();
    }
    else
    {
        system("cls");
        close();
    }
    return 0;
}
