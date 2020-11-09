#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,P;
    cin >> S >> P;
    int ns = S.length();
    int np = P.length();
    char S2[ns];
    char CharS[ns+1],CharP[np+1];
    strcpy(CharS, S.c_str());
    strcpy(CharP, P.c_str());
    for(int i =0;i<np;i++){
        for(int j=0;j<ns;j++){
            if(S[j]!=P[i]){
                    S2[]=S[j];
                    break;
            }
        }

    }
    for(int i=0;i<ns-np;i++){
        cout<<S2[i]<<endl;
    }


}
