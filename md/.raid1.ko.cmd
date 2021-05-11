cmd_drivers/md/raid1.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/raid1.ko drivers/md/raid1.o drivers/md/raid1.mod.o
