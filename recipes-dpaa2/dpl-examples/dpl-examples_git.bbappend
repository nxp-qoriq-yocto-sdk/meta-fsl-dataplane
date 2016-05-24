FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_fsl-lsch3 = " \
    file://0001-Setting-MAC-link-type-as-MAC_LINK_TYPE_FIXED-for-cop.patch \
"
