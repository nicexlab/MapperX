cmd_drivers/md/dm-bufio.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-bufio.ko drivers/md/dm-bufio.o drivers/md/dm-bufio.mod.o
