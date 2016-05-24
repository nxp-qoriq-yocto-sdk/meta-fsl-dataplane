FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_fsl-lsch2 = " \
    file://0001-fman-Add-fman-helper-functions.patch \
"
