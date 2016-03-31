SUMMARY = "Open Data Plane Interface Implementation"
DESCRIPTION = "OpenDataPlane (ODP) provides a data plane application programming \
        environment that is easy to use, high performance, and portable between networking SoCs."
HOMEPAGE = "http://www.opendataplane.org"
SECTION = "console/network"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4ccfa994aa96974cfcd39a59faee20a2"

SRC_URI = "git://sw-stash.freescale.net/scm/gitam/odp.git;branch=devel_1.4.1;protocol=http"
SRCREV = "cfd1185b7ea48097f2493ef7d3fd8612a1c41ea5"

S = "${WORKDIR}/git"
