global   main

          extern    printf

main:

          ; Set up the format string
          mov   edi, format

          ; Set the return value to zero
          xor   eax, eax

          ; Call printf with the format string
          call  printf

          ; Return from main
          ret

format: db `Hello, Holberton\n`,0
