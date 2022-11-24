#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int id ;            
    struct objet* prec ;    
    struct objet* suiv ;    
} node ;


typedef node* listecirculaire ; 



node* creer(int ido){
  node* l = (node*) malloc(sizeof(node)) ;
  fst -> id = ido ;
  fst -> prec = fst ;
  fst -> suiv = fst ;
  return l ;
}

void ajouter(node* l, int x){
  while(x =< l->id){
    l = l -> suiv ;
  }
  node* new = creer(x);
  node* p = l -> prec;
  l -> prec =  new ;
  p -> suiv = new ;
  new -> prec = p ;
  new -> suiv = l ;
}

void affiche(node* l){
  while(l -> id =< l -> suiv -> id){
    printf("%d",l->id) ;
    l = l -> suiv ;
  }
}






/* liste circulaire doublement chainée pour les rames // pour les stations, 

Remplacer plus tard id par un type correspondant contenant une id, un état/statut 



*/


