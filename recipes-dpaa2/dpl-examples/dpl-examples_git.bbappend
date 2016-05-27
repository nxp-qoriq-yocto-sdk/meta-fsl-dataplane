FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_fsl-lsch3 = " \
    file://0001-Update-copyright-details.patch \
    file://0002-Setting-MAC-link-type-as-MAC_LINK_TYPE_FIXED-for-cop.patch \
    file://0003-Added-DPL-for-ODP-on-Virtual-Machine.patch \
    file://0004-Added-copyright-on-dpl-odp-virt.0x2A_0x41.dts.patch \
"
