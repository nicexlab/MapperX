cmd_drivers/md/dm-era.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-era.ko drivers/md/dm-era.o drivers/md/dm-era.mod.o
