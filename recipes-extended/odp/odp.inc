SUMMARY = "Open Data Plane Interface Implementation"
DESCRIPTION = "OpenDataPlane (ODP) provides a data plane application programming \
        environment that is easy to use, high performance, and portable between networking SoCs."
HOMEPAGE = "http://www.opendataplane.org"
SECTION = "console/network"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4ccfa994aa96974cfcd39a59faee20a2"

SRC_URI = " \
git://sw-stash.freescale.net/scm/gitam/odp.git;branch=devel_1.4.1;protocol=http \
git://sw-stash.freescale.net/scm/dpaa2/qbman_userspace.git;protocol=http;name=qbman;destsuffix=git/platform/linux-dpaa2/flib/qbman \
git://sw-stash.freescale.net/scm/sdk/flib.git;branch=sdk-v2.0.x;protocol=http;name=rta;destsuffix=git/platform/linux-dpaa2/flib/rta \
"
SRCREV = "f3dc45d179a41b7cd7f918a2ce9d45f5b1f9a5d1"
SRCREV_qbman = "929b89a68905a94a4629f3226f9799d0c97b6c8a"
SRCREV_rta = "bbab28b03ae21c52ce913f8b052acf53bd24ff5d"

S = "${WORKDIR}/git"
