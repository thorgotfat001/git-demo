/*
 * fileoopen.c
 *
 *  Created on: 2019年5月27日
 *      Author: dutch
 */
 

#include<string.h>#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include <ctype.h>
struct girl
{
    int data ;
    struct girl *right ;
    struct girl *left ;

} ;
typedef struct girl sexy ;
typedef sexy *special ;

void insertnode ( special *sptr , int val ) ;
void insertnode ( special *sptr , int val )
{

    if ( * sptr == NULL )
    {
        * sptr = malloc ( sizeof(sexy) ) ;
        if ( * sptr != NULL )
        {
            ( * sptr )->data = val ;
            ( * sptr )->left = NULL ;
            ( * sptr )->right = NULL ;

        }
        else
        {
            printf ( "%d not insert\n" , val ) ;

        }
    }
    else{
         if(val < (*sptr)->data)
{
    insertnode(&((*sptr)->left),val) ;

}

else if(val > (*sptr)->data)
{
    insertnode(&((*sptr)->right),val) ;

}
else
{
    printf("%s","dope") ;
    }
   }
}

void preorder(special sptr);
void preorder(special sptr){
    if(sptr!=NULL){
        printf("%3d",sptr->data);
        preorder(sptr->left);
        preorder(sptr->right);


    }

}

int main ( void )
{
int i ;
special rootptr = NULL ;

int item ;
srand ( time ( NULL ) ) ;

puts ( "the numbet to put in" ) ;

for ( i = 1 ; i < 10 ; i ++ )
{
item = rand ( ) % 15 ;
printf ( "%3d" , item ) ;
insertnode ( & rootptr , item ) ;
}

puts("\n\n the preoder:");
preorder(rootptr);



}


