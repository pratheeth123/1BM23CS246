#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
int h[TABLE_SIZE]={NULL};
void insert()
{ 
    int key,index,i,flag=0,hkey; 
    printf("\nenter a value to insert into hash table\n"); 
    scanf("%d",&key); 
    hkey=key%TABLE_SIZE; 
    for(i=0;i<TABLE_SIZE;i++)   
    {      
     index=(hkey+i)%TABLE_SIZE;     
        if(h[index] == NULL)   
        {        
        h[index]=key;         
         break;     
        }    
     
    }    
    printf("No of probes for %d is %d", key,i+1);
    if(i == TABLE_SIZE)    
    printf("\nelement cannot be inserted\n");
    
}
void search()
{ 
int key,index,i,flag=0,hkey;
printf("\nenter search element\n"); 
scanf("%d",&key); 
hkey=key%TABLE_SIZE; 
    for(i=0;i<TABLE_SIZE; i++)
    {    
     index=(hkey+i)%TABLE_SIZE; 
        if(h[index]==key)   
        {      
            printf("value is found at index %d",index);    
            break;   
        }  
    }  
    if(i == TABLE_SIZE)   
    printf("\n value is not found\n");
}
void display()
{  
    int i;  
printf("\nelements in the hash table are \n"); 
 for(i=0;i< TABLE_SIZE; i++) 
 printf("\nat index %d \t value =  %d",i,h[i]);
}
main()
{    int opt,i; 
   while(1)   
 {        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4.Exit \n");  
      scanf("%d",&opt);    
    switch(opt)       
    {           
     case 1:insert();                
            break;           
     case 2:display();               
            break;           
    case 3:search();                
            break;            
    case 4:exit(0);        
    }    
 }
}


OUTPUT
Press 1. Insert  2. Display     3. Search       4.Exit
1

enter a value to insert into hash table
4
No of probes for 4 is 1
Press 1. Insert  2. Display     3. Search       4.Exit
1

enter a value to insert into hash table
5
No of probes for 5 is 1
Press 1. Insert  2. Display     3. Search       4.Exit
1

enter a value to insert into hash table
14
No of probes for 14 is 3
Press 1. Insert  2. Display     3. Search       4.Exit
1

enter a value to insert into hash table
12
No of probes for 12 is 1
Press 1. Insert  2. Display     3. Search       4.Exit
1

enter a value to insert into hash table
13
No of probes for 13 is 1
Press 1. Insert  2. Display     3. Search       4.Exit
2

elements in the hash table are

at index 0       value =  5
at index 1       value =  14
at index 2       value =  12
at index 3       value =  13
at index 4       value =  4
Press 1. Insert  2. Display     3. Search       4.Exit
3

enter search element
3

 value is not found

Press 1. Insert  2. Display     3. Search       4.Exit
3

enter search element
4
value is found at index 4
Press 1. Insert  2. Display     3. Search       4.Exit
4
