int main()
{   int num;
    scanf("%d",&num);
    int ans=1;
    for(int i=1;i<=num;i++){
        ans*=i;
    }
    printf("%d",ans);
    return 0;
}
