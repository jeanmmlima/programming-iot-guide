#include<stdio.h>
#include<stdlib.h>

int main(){

int tw=0,t=0,tl=0,tm=0,to=0, nm=1;
float w[100],v[100],l[100],m[100],o[100];
float pw,pl,po,pm,ppw,ppl,ppo,ppm;

while(nm != 0){

    scanf("%i", &nm);
    v[t]=nm;

    if (v[t] == 1){

        w[tw] = v[t];
        tw++;
        t++;
    }else if (v[t] == 2)
    {
        l[tl] = v[t];
        tl++;
        t++;
    }else if (v[t] == 3)
    {
        m[tm] = v[t];
        tm++;
        t++;
    }else if (v[t] == 4)
    {
        o[to] = v[t];
        to++;
        t++;
    }else if (v[t] != 1 && v[t] != 2 && v[t] != 3 && v[t] != 4 && v[t] != 0 ) 
    {
        printf("Digite um numero valido:\n");
    }else{

    }


}
printf("Windows Server \n");
printf("  -  total de windows: %i\n",tw);
pw=((float)tw/(float)t);
ppw=pw*100;
printf("  -  percentual: %f\n",ppw);

printf("Linux\n");
printf("  -  total de linux: %i\n",tl);
pl=((float)tl/(float)t);
ppl=pl*100;
printf("  - percentual: %f\n",ppl);

printf("Mac OSX\n");
printf("  -  total de mac os: %i\n",tm);
pm=((float)tm/(float)t);
ppm=pm*100;
printf("  -  percentual: %f\n",ppm);

printf("Outros\n");
printf("  -  total de mac os: %i\n",to);
po=((float)to/(float)t);
ppo=po*100;
printf("  -  percentual: %f %%\n",ppo);

printf("Total de votos: %i\n", t);
return 0;
}