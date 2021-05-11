cmd_drivers/md/dm-queue-length.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-queue-length.ko drivers/md/dm-queue-length.o drivers/md/dm-queue-length.mod.o
