cmd_drivers/md/dm-zero.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-zero.ko drivers/md/dm-zero.o drivers/md/dm-zero.mod.o
