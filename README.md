# Arduino TP00 - Création d'un jeu Simon

Ce repository est un projet pour l'IDE Arduino, le fichier sur lequel développer votre code est `arduino-tp00-jeuSimon.ino`.

# Règle du jeu
Le joueur a à sa disposition 2 leds : Rouge et Verte, ainsi que 2 boutons poussoirs chacun associé à une led. Une séquence de 4 couleurs est tirée par le programme, les leds se mettent à clignoter suivant la séquence que doit mémoriser l'utilisateur.

Par exemple : `R-R-V-V` 
- Allumage led rouge 1 sec puis extinction
- Allumage led rouge 1 sec puis extinction
- Allumage led verte 1 sec puis extinction
- Allumage led verte 1 sec puis extinction

Ensuite, le joueur doit reproduire la séquence à l'aide des 2 boutons poussoirs, chaque appui sur le bouton doit allumer la led correspondante. Si la séquence est juste, un message de réussite est envoyé sur le serial et une nouvelle séquence est tirée.

# Programme à réaliser
Vous devez développer le code Arduino du jeu Simon, nous vous conseillons d'utiliser 2 interruptions pour gérer l'appui sur les 2 boutons poussoirs. 

La séquence tirée sera enregistrée dans un tableau ou un vecteur en variable globale. **Nous vous conseillons fortement de créer des fonctions**, par exemple une fonction `tirageSequence()` qui remplit le tableau `sequenceTiree`, une fonction `affichage()` qui affiche la séquence du tableau...

