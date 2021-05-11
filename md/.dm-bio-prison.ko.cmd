cmd_drivers/md/dm-bio-prison.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-bio-prison.ko drivers/md/dm-bio-prison.o drivers/md/dm-bio-prison.mod.o
