void remplirMemoire(void *ptr, char valeur, int taille) {
    char *p = (char *)ptr;
    for (int i = 0; i < taille; i++) {
        p[i] = valeur;
    }
}