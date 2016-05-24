FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_append_qoriq-arm64 = " \
    file://0001-vfio-fsl-mc-Initial-Patch-to-add-support-vfio-fsl-mc.patch \
    file://0002-vfio-fsl-mc-Calculate-device-offset-from-fd-offset.patch \
    file://0003-vfio-fsl-mc-Quick-fix-for-guest-reboot.patch \
    file://0004-vfio-fsl-mc-Workaround-to-map-GITS-TRANSLATOR-region.patch \
    file://0005-vfio-fsl-mc-Add-framework-for-interrupt-support.patch \
    file://0006-vfio-fsl-mc-Add-hack-to-use-irqfd-for-mc-device-inte.patch \
    file://0007-vfio-fsl-mc-Disable-device-reset-and-Misc-changes.patch \
    file://0008-headers-sync.patch \
    file://0009-hw-core-platform-bus-initialization-notifier.patch \
    file://0010-hw-core-platform-bus-add-base_address-field.patch \
    file://0011-hw-vfio-vsmmu-device.patch \
    file://0012-hw-arm-sysbus-fdt-enable-vsmmu-dynamic-instantiation.patch \
    file://0013-vsmmu-Add-platform-device-masters.patch \
    file://0014-vfio-fsl-mc-Synchronize-Linux-header-for-irq-num-in-.patch \
    file://0015-vfio-fsl-mc-Map-QBman-portals-one-o-one-in-Guest.patch \
    file://0016-vfio-fsl-mc-Scan-and-populate-child-devices-of-mc-co.patch \
    file://0017-vfio-fsl-mc-vsmmu-Add-fsl-mc-as-vSMMU-master.patch \
    file://0018-Use-proper-offset-to-get-the-root-MC-portal-address.patch \
" 

QEMU_TARGETS_fsl-lsch3 = "aarch64"
