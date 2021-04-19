#include <stdio.h>
#include <string.h>
int mon(char str1[24][10], char str2[10]) 
{
  int return_value = 0,j;
  for( j = 0; j < 24; ++j) {
    if(!strcmp(str2, str1[j])) {
      return_value = j;
      break;
    }
  }
  return return_value;
}
int main() 
{
  char date[25], date_copy[25];
  char months[24][10]= {"January",   "February", "March",    "April",
                         "May",       "June",     "July",     "August",
                         "September", "October",  "November", "December", "Jan", "Feb", "Mar", "Apr",
                          "May", "Jun", "Jul", "Aug",
                          "Sep", "Oct", "Nov", "Dec"};
  char delim[2] = "-/";
  scanf("%s",date);
  strcpy(date_copy,date);


  char *day = strtok(date, delim); 
  char *temp = strtok(NULL, delim); 
  int month = mon(months,temp) + 1; 
  char *year = strtok(NULL, delim); 
  if(month>12)
  {
    month=month-12;
  }
  if(month==1)
  {
  	if(atoi(temp)>12)
  	printf("%s is converted to: %s/%s/%s\n", date_copy, temp, day, year);
  	else
  	printf("%s is converted to: %s/%s/%s\n", date_copy, day, temp, year);
  }
  
  else
  {
   printf("%s is converted to: %s/%d/%s\n", date_copy, day, month, year);
  }
  return 0;
  }
 
  


