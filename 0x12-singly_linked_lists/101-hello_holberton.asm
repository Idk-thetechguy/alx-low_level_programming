global   main

          extern    printf

main:

          mov   edi, format

          xor   eax, eax

          call  printf

          mov   eax, 0

          ret

format: db `Hello, alx_africa\n`,0
