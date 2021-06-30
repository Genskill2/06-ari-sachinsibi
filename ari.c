#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<math.h>
#include<string.h>
#include<assert.h>

string ari (string s) {
  int c = 0, w = 0, sn = 0;
  float ari;
  int aris;
  for(int i = 0; i < strlen(s);i++) {
    if(isalnum(s[i])){
      c++;
    }
    else if (s[i]==' ') {
      w++;
    }
    else if (s[i]=='!' || s[i]=='.' || s[i]=='?') {
      sn++;
    }
  }
  ari = 4.71*((float)c/w)+0.5*((float)w/sn)-21.43;
  aris = ceil(ari);
  switch(aris) {
    case 1:
    return "Kindergarten";
    break;
    case 2:
    return "First/Second Grade";
    break;
    case 3:
    return "Third Grade";
    break;
    case 4:
    return "Fourth Grade";
    break;
    case 5:
    return "Fifth Grade";
    break;
    case 6:
    return "Sixth Grade";
    break;
    case 7:
    return "Seventh Grade";
    break;
    case 8:
    return "Eighth Grade";
    break;
    case 9:
    return "Ninth Grade";
    break;
    case 10:
    return "Tenth Grade";
    break;
    case 11:
    return "Eleventh Grade";
    break;
    case 12:
    return "Twelfth Grade";
    break;
    case 13:
    return "College Student";
    break;
    case 14:
    return "Professor";
    break;
  }
}
