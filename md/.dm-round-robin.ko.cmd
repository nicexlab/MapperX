cmd_drivers/md/dm-round-robin.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-round-robin.ko drivers/md/dm-round-robin.o drivers/md/dm-round-robin.mod.o
