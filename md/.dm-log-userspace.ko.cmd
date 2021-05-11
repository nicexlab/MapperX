cmd_drivers/md/dm-log-userspace.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-log-userspace.ko drivers/md/dm-log-userspace.o drivers/md/dm-log-userspace.mod.o
