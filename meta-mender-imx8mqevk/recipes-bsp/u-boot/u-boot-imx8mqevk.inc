FILESEXTRAPATHS_prepend_imx8mqevk := "${THISDIR}/patches:"

BOOTENV_SIZE_imx8mqevk ?= "0x1000"

# U-Boot auto-configuration doesn't work properly for Raspberry Pi, due to its
# use of boot.scr and cmdline.txt.

SRC_URI_append += " \
                        file://0001-imx8mq_evk-BOOTCOUNT.patch \
			file://0001-Erase-CONFIG_ENV_OFFSET-CONFIG_ENV_SIZE.patch \
			file://0001-Enable-load-command.patch \
			file://0002-use-correct-loadaddr-and-fdt_addr.patch \
"
