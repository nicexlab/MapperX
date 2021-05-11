cmd_drivers/md/dm-snapshot.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-snapshot.ko drivers/md/dm-snapshot.o drivers/md/dm-snapshot.mod.o
