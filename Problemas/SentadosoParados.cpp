/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SentadosoParados.cpp
 * Author: angelica
 *
 * Created on 9 de marzo de 2018, 12:47 PM
 */

#include <cstdlib>
#include<stdio.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int r,s ,b;
    scanf("%d %d",&r,&s);
    scanf("%d",&b);
    
    printf("%d %d",r*s,b-r*s);  
    
    return 0;
}

