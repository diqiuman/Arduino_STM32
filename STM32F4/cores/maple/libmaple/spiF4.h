/******************************************************************************
 * The MIT License
 *
 * Copyright (c) 2011, 2012 LeafLabs, LLC.
 * Copyright (c) 2010 Perry Hung.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *****************************************************************************/

/**
 * @file libmaple/stm32f1/include/series/spi.h
 * @author Marti Bolivar <mbolivar@leaflabs.com>
 * @brief STM32F1 SPI/I2S series header.
 */

#ifndef _LIBMAPLE_SPI_F4_H_
#define _LIBMAPLE_SPI_F4_H_

#include <libmaple/libmaple_types.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Register map base pointers
 */

struct spi_reg_map;

#define SPI1_BASE                       ((struct spi_reg_map*)0x40013000)
#define SPI2_BASE                       ((struct spi_reg_map*)0x40003800)
#define SPI3_BASE                       ((struct spi_reg_map*)0x40003C00)

#define SPI4_BASE                       ((struct spi_reg_map*)0x40013400)
#define SPI5_BASE                       ((struct spi_reg_map*)0x40015000)

/*
 * Device pointers
 */

struct spi_dev;

extern struct spi_dev spi1;
extern struct spi_dev spi2;
extern struct spi_dev spi3;
#define SPI1  (&spi1)
#define SPI2  (&spi2)
#define SPI3  (&spi3)

#if BOARD_NR_SPI>3
extern struct spi_dev spi4;
#define SPI4  (&spi4)
#endif
#if BOARD_NR_SPI>4
extern struct spi_dev spi5;
#define SPI5  (&spi5)
#endif


#ifdef __cplusplus
}
#endif

#endif
