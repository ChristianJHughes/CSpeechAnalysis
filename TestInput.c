#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	//The line being read in.
		char line[500];
		//Returns 1 if we have reached the end of the line.
		int endOfLine;
		//A pointer that will refer to the beginging of each field.
		char *line_ptr = NULL;
		//A pointer that will refer to the '\0' character at the end of each field.
		char *line_ptr2 = NULL;
		
		//Insert a newline character at the beginning of the file for cosmetic affect. 
		putchar('\n');
		
		//While there are still lines to process in the file...
		while (fgets(line, 500, stdin))
		{
			//Create a pointer to the begining of the line.
			line_ptr = line;
			//Initally set to false.
			endOfLine = 0;
			
			//While we are still reading the current line...
			while (endOfLine == 0)
			{
				//Move the first pointer onwards to eliminate spaces (This will end up at the first letter of the first word).
				while (isspace(*line_ptr) || ispunct(*line_ptr))
				{
					line_ptr++;
				}
				
				line_ptr2 = line_ptr;
				
				//If this statement is true, that means that we are already at the end of the line.
				if (*line_ptr2 == '\0')
				{
					endOfLine = 1;
				}
				//Otherwise, we need to process the line.
				else
				{
						
					while (!isspace(*line_ptr2) && !ispunct(*line_ptr2) && *line_ptr2 != '\0') 
					{
						line_ptr2++;
					}
					
					*line_ptr2 = '\0';

					//int allInt = sscanf(argv[argumentCounterIndex], "%d", &fieldArgumentNumber);
					
							
							//Print out the given field.
							//if (fieldCounter == fieldArgumentNumber)
							//{
							//	printf("%s ", line_ptr);
							//	if (argumentCounterIndex + 1 != argc)
							//	{
							//		argumentCounterIndex++;
							//	}
							//}
							printf("%s",line_ptr);
							
							line_ptr = line_ptr2 + 1;
						}
					}
		}
		
		
	}
