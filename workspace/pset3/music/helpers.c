// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "helpers.h"
#include <math.h>
#define UNUSED(x) (void)(x)

int a4=0;
int G4=-1;

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    //TODO
    printf("\nDuration: %c\n", fraction[0]);
    int num = fraction[0]-'0';
    int den = fraction[2]-'0';
    printf("\nDuration: %d / %d\n", num,den);
    float multiplier = 8 / den;
    num = multiplier * num;

    return num;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
    printf("\nLength: %ld",strlen(note));
    printf("\nFreqency: %s\n",note );




    char octave;
    char mynote;
    char accent;
    char note_accent[3];
    /* If we have an accent
    */
    if (strlen(note)== 3)
    {   mynote = note[0];
        accent = note[1];
        octave = atoi(&note[2]);
        printf("\nmynote: %c, accent:%c, octave:%d\n",mynote,accent,octave);
        note_accent[0]=mynote;
        note_accent[1]=accent;
        note_accent[2]='\0';

    }
    else
    {
      mynote=note[0];
      octave = atoi(&note[1]);
      accent = 52;
      printf("\nmynote: %c, accent:%c, octave:%d\n",mynote,accent,octave);
      //printf("G4: %d",G4);
      note_accent[0]=mynote;
      note_accent[1]='\0';
    }

    float  st=0;
    if ( mynote == 'A')  { st = 0.0; }
    if ( mynote == 'B')  { st = 2.0; };
    if ( mynote == 'C')  { st = -9.0; }
    if ( mynote == 'D')  { st = -7.0; };
    if ( mynote == 'E')  { st = -5.0; }
    if ( mynote == 'F')  { st = -4.0; };
    if ( mynote == 'G')  { st = -2.0; };

    if ( accent == '#')  { st = st + 1.0; };
    if ( accent == 'b')  { st = st - 1 ;};
    //double frequency = pow(2.0,(st/12));
    float myexp = st/12;
    double frequency = pow(2.0,myexp)*440;

    printf ("Debug: %lf",myexp);


    // char note_accent = strcat(&mynote,&accent);
    //Sstrcat(note_accent,&accent);
    //if (mynote == 'A')
    //{

    printf ("\nfull_note:%c semitone:%f freq:%f\n",mynote,st,frequency);
    //}
    return frequency;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    printf("String: %s\n",s );
    //if ( strcmp("\n",s) == 0 )  { return 1;};
    if ( s[0] == '\0') { printf("Nada String"); return 1;}
    return 0;
}
