Après modification du code en ajoutant les lignes suivantes:
 if (y > hauteurMax)
        {
            hauteurMax = y;
        }
        if( y < 0 )
        {
            y = 0;
            v *= -0.8;
            Rebond++;
            printf("%d Rebonds de  %fm!\n",Rebond ,hauteurMax);
             hauteurMax = 0;
        
        if( v < 0.1 )
        {
            break;
        }
        }
Nous avons droit qu'à un seul rebond. De ce fait on ne peut vérifier si elle décroit vu qu'on n'a qu'une seule valeur..
Ceci fut executer pour une hauteur de 400m: 
./game                              
t = 0.0000 s   y = 390.1900 m
t = 1.0000 s   y = 370.5700 m
t = 2.0000 s   y = 341.1400 m
t = 3.0000 s   y = 301.9000 m
t = 4.0000 s   y = 252.8500 m
t = 5.0000 s   y = 193.9900 m
t = 6.0000 s   y = 125.3200 m
t = 7.0000 s   y = 46.8400 m
t = 8.0000 s   y = -41.4500 m
1 Rebonds de  390.190002m!