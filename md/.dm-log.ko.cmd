cmd_drivers/md/dm-log.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-log.ko drivers/md/dm-log.o drivers/md/dm-log.mod.o
