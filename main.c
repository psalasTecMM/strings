#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
// Add your library file
// Example: #include "strings.h"

int main(int argc, char **argv)
{
  char c,a,b,d;
  char w[100];
  char v[100];
  int reps;
  while ((c = getopt(argc, argv, "alcpioe")) != -1){
    switch (c){
      case 'a':{
        scanf("%s",w);
        printf("%s", alphabet(w));
        break;
      }
      case 'l':{
        scanf("%s %s",w,v);
        printf("%s %s", len(w),len(v));
        break;
      }
      case 'c': {
        scanf("%d",&reps);
        for (size_t i = 0; i < reps; i++)
        {
          scanf("%s %s\n",w,v);
          printf("%s\n", concat(w,v));
        }
        printf("%d",len(concat("hola","mundo")));
        break;
      }
      case 'p':{
        scanf("%s",w);
        printf("%s\n",spow(w,3));
        printf("%s",spow(w,0));
        break;
      }
      case 'i':{
        scanf("%s",w);
        printf("%s",inverse(w));
        break;
      }
      case 'o':{
        scanf("%s %c %c %c",w,a,b,d);
        printf("%d %d %d",occurrences(a,w),occurrences(b,w),occurrences(d,w));
        break;
      }
      case 'e':{
        scanf("%d",&reps);
        for (size_t i = 0; i < reps; i++)
        {
          scanf("%s %s\n",w,v);
          printf("%d\n", equal(w,v));
        }
        break;
      }
      default:
        abort();
    }
  }
  for (; optind < argc; optind++){
    printf("Non-option argument %s\n", argv[optind]);
  }

  return 0;
}