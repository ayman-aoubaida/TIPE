





(*type rame = N | R of (rame * rame);;*)

type etat_rame = Arret | Mouvement ;;

type rame = { id : int ; x : float ; y : float ; etat : etat_rame };;

type station = { x : float ; y : float  ; nom : string };;

type reseau = station list * rame list ;;


let rame_suivante r =
 let t = r in 

(*let exemple_rame = R(  ;;
 oooo----oooo----####----oooo 


let affiche_rame = function
 | N -> ()
 | R (r1,r2) -> affiche_rame r1; print_string "---####---"; affiche_rame r2;;

type station = ;; *)
