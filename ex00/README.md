___ EX00 ___

### 1 - Le polymorphisme dynamique

Dans DiamondTrap, on faisait face au Diamond Problem, qui consiste en une instance qui hérite de deux autres instances, et de n'avoir qu'une seul copie de ClapTrap (La classe mère) au lieu de deux. On a réglé ce problème et déclarant que Scav et Frag heŕitaient virtuellement d'une copie de Clap.

Ici, nous sommes dans un cas différent. On est dans un héritage linéraire. (Une classe enfant héritée d'une classe mère).
On a besoin que nos deux classes enfants héritent des fonctions de la mère, tout en la redéfinissant. Et faire en sorte qu'à l'utilisation, la bonne version de cette fonction soit appelée.

À savoir, Cat n'appelle pas la version makeSound d'Animal, mais sa propre version.

Pour ça, on va de nous faire appel au keyword Virtual.

### 2 - Virtual

Virtual est utilisé dans le cadre du polymorphisme.

Si une méthode n'est pas déclarée virtual dans la classe de base, même si les classes dérivées redéfinissent la méthode, c'est toujours la méthode de la classe de base qui sera appelée lorsqu'on utilise un pointeur ou une référence sur l'objet.

C'est ce qu'on appelle l'early binding (Liaison statique), le choix de la fonction est fait à la compilation.

La solution : Définir la fonction de la classe de base en virtual. De cette façon, lorsque l'on va appeler la fonction de la classe dérivée, on appellera la bonne version, celle de cette dernière.

### 3 - Vtable

* Si une classe a au moins une méthode virtuelle, une vtable est créee par le compilateur.
* Chaque classe qui hérite et redéfinit une méthode virtuelle met à jour cette table avec la bonne implémentation
* Chaque objet contenant des méthodes virtuelles a un pointeur caché (vptr) qui pointe vers sa vtable.
* Quand une méthode virtuelle est appelée sur un objet via un pointeur de la classe de base, C++ consulte la Vtable pour savoir quelle fonction exécuter.

### 4 - Virtual Destructor

Si le destructor de la classe de base n'est pas virtuel, alors lorsqu'on détruit un objet via un pointeur de la classe de base, seul le destructeur de la classe de base est appelé.

On peut donc avoir des leaks si on ne pense pas à mettre le destructeur en virtual.
