# C Speech Analysis
<b>Identify common words in text files, designed for maximum efficiency. Written in C.</b>

This program identifies the most common words occurring in a given text file. Input and output is all completed via the command line. Meticulous memory management and tree sorting ensures fast performance, even in very large files.

<b>RULES:</b>

1) Words are separated by text or punctuation.

2) The program should not be case-sensitive.

3) Words of 2 letters or less will be ignored, unless both letters are in uppercase.

4) If two words only differ by a final “s” or a final “d”, they will be recognized as the same word and stored in the shortest form if a shortest form is found. If you really want to, you can try to handle a few irregular plurals (man, woman) and irregular verbs, but this isn’t required.

<b>INPUT:</b> 
Command line argument in the form ./SpeechStatsAssignment3 [wordsToIgnore .txt file] < [input .txt file]

<b>EXAMPLE INPUT:</b>
./SpeechStatsAssignment3 wordsToIgnore.txt < Kennedy.txt
