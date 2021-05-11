cmd_drivers/md/dm-crypt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-crypt.ko drivers/md/dm-crypt.o drivers/md/dm-crypt.mod.o
