/* $OpenBSD: opensslv.h,v 1.43.4.2 2018/06/13 14:55:24 bcook Exp $ */
#ifndef HEADER_OPENSSLV_H
#define HEADER_OPENSSLV_H

/* These will change with each release of LibreSSL-portable */
#define LIBRESSL_VERSION_NUMBER	0x2060500fL
#define LIBRESSL_VERSION_TEXT	"LibreSSL 2.6.5"

/* These will never change */
#define OPENSSL_VERSION_NUMBER	0x20000000L
#define OPENSSL_VERSION_TEXT	LIBRESSL_VERSION_TEXT
#define OPENSSL_VERSION_PTEXT	" part of " OPENSSL_VERSION_TEXT

#define SHLIB_VERSION_HISTORY ""
#define SHLIB_VERSION_NUMBER "1.0.0"

#endif /* HEADER_OPENSSLV_H */
