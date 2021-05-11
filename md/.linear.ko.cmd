cmd_drivers/md/linear.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/linear.ko drivers/md/linear.o drivers/md/linear.mod.o
