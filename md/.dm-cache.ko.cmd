cmd_drivers/md/dm-cache.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-cache.ko drivers/md/dm-cache.o drivers/md/dm-cache.mod.o
