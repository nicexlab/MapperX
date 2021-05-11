cmd_drivers/md/raid456.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/raid456.ko drivers/md/raid456.o drivers/md/raid456.mod.o
