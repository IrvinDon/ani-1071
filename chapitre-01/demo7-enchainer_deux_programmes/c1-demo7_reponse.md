Ici nous avons utilisé la commande $LASTEXITCODE -eq 0 car celle fournie dans l'exercice ne fonctionnait pas. Le Write host permet de specifier un message si la condition est validée (le retour est 0)

PS C:\Users\PC> ./77; if ($LASTEXITCODE -eq 0) {Write-Host "pair"}
Entrez un nombre
59
PS C:\Users\PC> ./77; if ($LASTEXITCODE -eq 0) {Write-Host "pair"}
Entrez un nombre
54
pair
