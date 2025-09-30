#include <stdio.h>

void converte_seg(int seg);


int main(){
    int temp;

    printf("Ensira os Segundos: ");
    scanf("%d ",temp);
    converte_seg(temp);
}

void converte_seg(int seg){
    int hr,min;

    hr = seg / 3600;

    min = (seg%3600)/60;

    seg = hr%60;

    printf("A hora: %d minuto: %d segundos: %d",hr,min,seg);
}