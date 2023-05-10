#include "main.h"

/**
 * append_text_to_file - Adds text to the end of a file.
 * @filename: An identifier that references the name of the file.
 * @text_content: The string to add to the end of the file.
 * 
 * Return: Function failure or NULL filename results in -1.
 * No file + no write permission = -1.
 * Else -1.
 */

{

        int o, w, len = 0;


        if (filename == NULL)

                return (-1);


        if (text_content != NULL)

        {

                for (len = 0; text_content[len];)

                        len++;

        }


        o = open(filename, O_WRONLY | O_APPEND);

        w = write(o, text_content, len);


        if (o == -1 || w == -1)

                return (-1);


        close(o);


        return (1);

}
