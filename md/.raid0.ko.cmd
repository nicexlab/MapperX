cmd_drivers/md/raid0.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/raid0.ko drivers/md/raid0.o drivers/md/raid0.mod.o
