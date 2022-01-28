/****
Copyright @ 2021-2022 Aatmaj.
Please refrain from copying this material.

#########
This is for reference only. Please do not copy this material.
This repository is ment only for promoting students and helping needy students, and not for encouraging any kind of malpratises or mass copying.
Hence it is requested not to copy from this repository and use it only for reference when in doubt.
######
In case of any doubts please feel free to reach me via 
- Gmail- aatmaj.mhatre@gmail.com
- Github https://github.com/Aatmaj-Zephyr
- Linkedin https://www.linkedin.com/in/aatmajmhatre/

****/

#include<stdio.h>


struct players
{
    char name[20];
    int matches_played;
    int wickets;
    int runs;
};



void display(struct players arr[],int n)
{
    printf("\nName\t Matches Played\t Bowling Figure");
    printf("\n----------------------------------------------------");
    struct players temp;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
            {
                if (arr[i].wickets<arr[j].wickets)
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                if (arr[i].wickets==arr[j].wickets)
                    {
                        if (arr[i].runs>arr[j].runs)
                        {
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
            }
    }
        for (int i=0;i<n;i++)
        {
            printf("\n%s\t\t %d\t\t %d/%d",arr[i].name,arr[i].matches_played,arr[i].wickets,arr[i].runs);
        }
        printf("\n-----------------------------------------------------");
        return arr;

}
int add_player(struct players arr[],int n)
{
    int x;
    printf("Number of players you want to add: ");
    scanf("%d",&x);
    for (int i=n;i<n+x;i++)
    {
        printf("Enter name of player: ");
        scanf("%s",&arr[i].name);
        printf("Enter matches played: ");
        scanf("%d",&arr[i].matches_played);
        printf("Enter wickets and runs conceded: ");
        scanf("%d%d",&arr[i].wickets,&arr[i].runs);
        printf("\n");
    }
    n=n+x;
    display(arr,n);
    return (n);
}

int del(struct players arr[],int n)
{
    char name1[20];
    printf("\nEnter the name you want to Delete for: ");
    scanf("%s",name1);
    for (int i=0;i<n;i++)
    {

        if (strcmp(arr[i].name,name1)==0)
            {
                for (int j=i;j<n;j++)
                {
                    arr[j]=arr[j+1];
                }
                n=n-1;
            }
    }
    display(arr,n);
    return n;
}

void search_player(struct players arr[],int n)
{
    char name1[20];
    printf("\nEnter the name you want to search for: ");
    scanf("%s",name1);
    printf("\nName\t Matches Played\t Bowling Figure");
    printf("\n----------------------------------------------------");
    for (int i=0;i<n;i++)
    {

        if (strcmp(arr[i].name,name1)==0)
        {

            printf("\n%s\t\t %d\t\t %d",name1,arr[i].matches_played,arr[i].wickets);
        }
    }
    printf("\n-----------------------------------------------------");
}


int main()
{
    int n;
    printf("Enter number of players(n>=5): ");
    scanf("%d",&n);
    struct players arr[200];
    printf("Enter data: \n");
    for (int i=0;i<n;i++)
    {
        printf("Enter name of player: ");
        scanf("%s",&arr[i].name);
        printf("Enter matches played: ");
        scanf("%d",&arr[i].matches_played);
        printf("Enter wickets and runs conceded: ");
        scanf("%d%d",&arr[i].wickets,&arr[i].runs);
        printf("\n");
    }

    int choice;
    do
    {
        int choice;
        //asking user which function they want to activate
        printf("\n1. Sort and display player data");
        printf("\n2  Delete data for any one player");
        printf("\n3. Search for a player using name");
        printf("\n4. Insert players");
        printf("\n5. Exit the program");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case (1):
            {

                display(arr,n);
                break;
            }
        case (2):
            {
                n=del(arr,n);
                break;
            }
        case (3):
            {
                search_player(arr,n);
                break;
            }
        case (4):
            {
                n=add_player(arr,n);
                break;
            }

        case (5):
            return 0;
        }

    }while(choice!=5);

}
