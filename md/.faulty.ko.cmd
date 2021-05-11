cmd_drivers/md/faulty.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/faulty.ko drivers/md/faulty.o drivers/md/faulty.mod.o
