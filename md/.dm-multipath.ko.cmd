cmd_drivers/md/dm-multipath.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-multipath.ko drivers/md/dm-multipath.o drivers/md/dm-multipath.mod.o
