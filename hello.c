extern void putss(char *c);
int main(){
    char c[]="\ec\e[43;37mhello world tiny ccompiler\n";
    putss(c);
    return 0;
}
