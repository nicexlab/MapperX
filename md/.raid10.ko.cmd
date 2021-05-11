cmd_drivers/md/raid10.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/raid10.ko drivers/md/raid10.o drivers/md/raid10.mod.o
