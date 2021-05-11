cmd_drivers/md/dm-thin-pool.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-thin-pool.ko drivers/md/dm-thin-pool.o drivers/md/dm-thin-pool.mod.o
