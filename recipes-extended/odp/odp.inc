SUMMARY = "Open Data Plane Interface Implementation"
DESCRIPTION = "OpenDataPlane (ODP) provides a data plane application programming \
        environment that is easy to use, high performance, and portable between networking SoCs."
HOMEPAGE = "http://www.opendataplane.org"
SECTION = "console/network"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4ccfa994aa96974cfcd39a59faee20a2"

SRC_URI = " \
git://git.freescale.com/ppc/sdk/odp.git;branch=rel_v1.4.1 \
git://git.freescale.com/ppc/sdk/qbman_userspace.git;name=qbman;destsuffix=git/platform/linux-dpaa2/flib/qbman \
git://git.freescale.com/ppc/sdk/flib.git;branch=sdk-v2.0.x;name=rta;destsuffix=git/platform/linux-dpaa2/flib/rta \
"
SRCREV = "d915bd57f05d4247c13f165367e461592fa3a872"
SRCREV_qbman = "929b89a68905a94a4629f3226f9799d0c97b6c8a"
SRCREV_rta = "bbab28b03ae21c52ce913f8b052acf53bd24ff5d"

S = "${WORKDIR}/git"
