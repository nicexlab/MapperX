cmd_drivers/md/dm-verity.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-verity.ko drivers/md/dm-verity.o drivers/md/dm-verity.mod.o
