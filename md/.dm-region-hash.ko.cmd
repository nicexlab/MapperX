cmd_drivers/md/dm-region-hash.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-region-hash.ko drivers/md/dm-region-hash.o drivers/md/dm-region-hash.mod.o
