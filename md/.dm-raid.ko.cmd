cmd_drivers/md/dm-raid.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-raid.ko drivers/md/dm-raid.o drivers/md/dm-raid.mod.o
