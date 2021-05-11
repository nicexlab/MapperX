cmd_drivers/md/dm-flakey.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-flakey.ko drivers/md/dm-flakey.o drivers/md/dm-flakey.mod.o
