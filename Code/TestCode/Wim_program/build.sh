clang -c -emit-llvm -O2 main-annotated_noDouble.c
# opt temp.bc -S -o temp.ll
opt   -load ../../LLVM_PASS/build/optimi/libOptimiPass.so -passname main-annotated_noDouble.bc -S -o main-annotated_noDouble.ll
#opt main-unannotated_noDouble.bc -S -o main-unannotated_noDouble.ll