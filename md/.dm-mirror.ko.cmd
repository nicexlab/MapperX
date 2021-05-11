cmd_drivers/md/dm-mirror.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-mirror.ko drivers/md/dm-mirror.o drivers/md/dm-mirror.mod.o
