#include <stdio.h>

typedef struct booklib 
 {
     char bookname[20];
     char author[20];
     char isbn[13];
     
 } bk;

 int main()  
 {
     int n,j,m;
     bk s[100];
     char temp[10];
     printf("Number of books you want to add:  ");     fgets(temp,sizeof(temp),stdin);
     n = atoi(temp);
     
          /* Taking Inputs for books */
     for(int i = 1; i <= n; i++)
    {    printf("\n---------Index number: %d ----------\n",i);
         printf("Enter Book Name: ");
   fgets(s[i].bookname, sizeof(s[i]).bookname,stdin);
         printf("\nEnter Author Name: ");
         fgets(s[i].author, sizeof(s[i]).author,stdin);
         printf("\nEnter isbn: ");
        fgets(s[i].isbn, sizeof(s[i]).isbn,stdin);
         
         printf("\n-----------------------------------------------------") ;
     }
     /* Outputs */
    printf("\nHow many outputs you want to see (enter 0 to exit and save): ") ;
    scanf("%d",&j);
     for (int k = 1; k <= j; k++)    {
         printf("\nEnter Index Number ('0' to exit):") ;
         scanf("%d",&m);
         if(m != 0) {
             printf("\nBook Name: %s",s[m].bookname);
             printf("\nAuthor Name: %s",s[m].author);
             printf("\nisbn: %s",s[m].isbn);
             printf("\n---------------------------------------------------");
         }
        else {
             break;
         }
     }


FILE *fp = fopen("/sdcard/book_collection.txt", "w");
for (int i = 1; i <= n; i++) {
    fprintf(fp, "Book Name: %s\n", s[i].bookname);
    fprintf(fp, "Author Name: %s\n", s[i].author);
    fprintf(fp, "Isbn: %s\n\n", s[i].isbn); // Added extra newline for better readability
}
fclose(fp);

return 0;
  }
   
                 
     
 
     