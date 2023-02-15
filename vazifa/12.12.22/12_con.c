#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char isP(char belgi)
{
  char shift[7] = "zxcvbnm";
  char caps[9] = "asdfghjkl";
  char tab[10] = "qwertyuiop";
  
  if(strchr(shift, belgi)[0] == belgi)
    return 's';
  else if(strchr(tab, belgi)[0] == belgi)
    return 't';
  else if(strchr(caps, belgi)[0] == belgi)
    return 'c';
  
  return '0';
}

int main()
{
  char str[1000] = "";
  char result[10000] = "";
  
  scanf(" %[^\n]s", str);
  int i;
  for(i = 0; i < strlen(str); i ++)
  {
    char res = isP(str[i]);
    if(res == 's')
      strcat(result, "Shift");
    if(res == 't')
      strcat(result, "Tab");
    if(res == 'c')
      strcat(result, "CapsLock");
  }

  
  return 0;
}
