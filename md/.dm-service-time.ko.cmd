cmd_drivers/md/dm-service-time.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-service-time.ko drivers/md/dm-service-time.o drivers/md/dm-service-time.mod.o
