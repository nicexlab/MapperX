cmd_drivers/md/dm-cache-cleaner.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-cache-cleaner.ko drivers/md/dm-cache-cleaner.o drivers/md/dm-cache-cleaner.mod.o
