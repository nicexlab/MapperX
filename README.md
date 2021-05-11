# MapperX
MapperX is a novel extension to DM-cache that uses an on-disk adaptive bit-tree (ABT) to synchronously maintain the metadata of dirty bits in a hierarchical manner. Leveraging spatial locality of block writes, MapperX achieves controlled metadata persistence overhead with fast crash recovery by adaptively adding/deleting leaves in the ABT where different levels represent the status of cached blocks with different granularity.

# Enviroment
OS: Centos7
Kernel version: 3.10.0-514
