#include "test_annotation_arguments.h"
#include <stdio.h>

#pragma auto_inline(off)

DR_DEFINE_ANNOTATION(void, test_annotation_eight_args) (unsigned int a,
    unsigned int b, unsigned int c, unsigned int d, unsigned int e,
    unsigned int f, unsigned int g, unsigned int h)
{
    __asm__ volatile ("");
}

DR_DEFINE_ANNOTATION(void, test_annotation_nine_args) (unsigned int a,
    unsigned int b, unsigned int c, unsigned int d, unsigned int e,
    unsigned int f, unsigned int g, unsigned int h, unsigned int i)
{
    __asm__ volatile ("");
}

DR_DEFINE_ANNOTATION(void, test_annotation_ten_args) (unsigned int a,
    unsigned int b, unsigned int c, unsigned int d, unsigned int e,
    unsigned int f, unsigned int g, unsigned int h, unsigned int i,
    unsigned int j)
{
    __asm__ volatile ("");
}

#pragma auto_inline(on)
