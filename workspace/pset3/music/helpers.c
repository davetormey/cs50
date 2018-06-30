// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "helpers.h"
#define UNUSED(x) (void)(x)


// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    printf("%s\n", fraction);
    return 0;
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

    // If we have an accent
    if (strlen(note)== 3)
    {   mynote = note[0];
        accent = note[1];
        octave = atoi(&note[2]);
        printf("\nmynote: %c, accent:%c, octave:%d\n",mynote,accent,octave);

    }
    else
    {
      mynote=note[0];
      octave = atoi(&note[1]);
      accent = 52;
      printf("\nmynote: %c, accent:%c, octave:%d\n",mynote,accent,octave);

    }
    if (mynote == 'A')
    {
      printf ("\nI found letter:%c",mynote);
    }
    return 0;
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    printf("%s\n",s );
    return 0;
}
