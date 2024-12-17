
DS-3E-SEP2024
Upcoming
Woohoo, no work due soon!

Announce something to your class

Announcement: "pfa"
Lakshmi Neelima Dept of Computer Science
Created 12:09 PM12:09 PM
pfa

Hashing using linear probing -alghorithm.txt
Text

Linear Probing (1).txt
Text

Add class comment…


Announcement: "pfa"
Lakshmi Neelima Dept of Computer Science
Created 11:39 AM11:39 AM
pfa

DS-UNIT-4&5.pptx
PowerPoint

Add class comment…


Announcement: "Dear students, pfa the DST lab report…"
Lakshmi Neelima Dept of Computer Science
Created YesterdayYesterday
Dear students,
pfa the DST lab report template.

DST report template-16-12-2024.docx
Word

Add class comment…


Announcement: "Dear students, Dynamic memory…"
Lakshmi Neelima Dept of Computer Science
Created Dec 11Dec 11
Dear students,
Dynamic memory Allocation notes is present in module1 ppt..

Add class comment…


Announcement: "Dear students, Ds quiz is in 18th…"
Lakshmi Neelima Dept of Computer Science
Created Dec 10Dec 10
Dear students,
Ds quiz is in 18th december 3.50pm

Add class comment…


Announcement: "leet code program"
Lakshmi Neelima Dept of Computer Science
Created Dec 4Dec 4
leet code program

Just a moment...
https://leetcode.com/problems/path-sum/description/?envType=problem-list-v2&envId=binary-tree

Add class comment…


Announcement: "module 3 ppt for your reference"
Lakshmi Neelima Dept of Computer Science
Created Dec 3Dec 3
module 3 ppt for your reference

MODULE 3.pptx
PowerPoint

Add class comment…


Announcement: "Tomorrow lab program 1.Write a program…"
Lakshmi Neelima Dept of Computer Science
Created Dec 3Dec 3
Tomorrow lab program
1.Write a program
To construct a binary Search tree.
To traverse the tree using all the methods i.e., in-order, preorder and post order
To display the elements in the tree.
2. Write a program to traverse a graph using BFS method.3.leet code will be posted during lab hour

DS-UNIT-4 (1).pptx
PowerPoint

Graphs.pptx
PowerPoint

Add class comment…


Announcement: "Today's class ppt for your reference"
Lakshmi Neelima Dept of Computer Science
Created Dec 2Dec 2
Today's class ppt for your reference

DS-UNIT-4.pptx
PowerPoint

Add class comment…


Announcement: "Todays Leetcode program"
Lakshmi Neelima Dept of Computer Science
Created Nov 27Nov 27
Todays Leetcode program

Just a moment...
https://leetcode.com/problems/palindrome-linked-list/description/

Add class comment…

Stream
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
