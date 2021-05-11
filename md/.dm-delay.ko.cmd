cmd_drivers/md/dm-delay.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-delay.ko drivers/md/dm-delay.o drivers/md/dm-delay.mod.o
