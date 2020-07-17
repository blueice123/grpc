/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/auth/secret.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/api/v2/auth/secret.upbdefs.h"

extern upb_def_init envoy_api_v2_auth_common_proto_upbdefinit;
extern upb_def_init envoy_api_v2_core_base_proto_upbdefinit;
extern upb_def_init envoy_api_v2_core_config_source_proto_upbdefinit;
extern upb_def_init udpa_annotations_migrate_proto_upbdefinit;
extern upb_def_init udpa_annotations_sensitive_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern const upb_msglayout envoy_api_v2_auth_GenericSecret_msginit;
extern const upb_msglayout envoy_api_v2_auth_SdsSecretConfig_msginit;
extern const upb_msglayout envoy_api_v2_auth_Secret_msginit;

static const upb_msglayout *layouts[3] = {
  &envoy_api_v2_auth_GenericSecret_msginit,
  &envoy_api_v2_auth_SdsSecretConfig_msginit,
  &envoy_api_v2_auth_Secret_msginit,
};

static const char descriptor[928] = {'\n', '\036', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 'v', '2', '/', 'a', 'u', 't', 'h', '/', 's', 'e', 'c', 'r', 'e', 
't', '.', 'p', 'r', 'o', 't', 'o', '\022', '\021', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 'u', 't', 
'h', '\032', '\036', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 'v', '2', '/', 'a', 'u', 't', 'h', '/', 'c', 'o', 'm', 'm', 
'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\034', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 'v', '2', '/', 'c', 'o', 
'r', 'e', '/', 'b', 'a', 's', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '%', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 
'v', '2', '/', 'c', 'o', 'r', 'e', '/', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'o', 'u', 'r', 'c', 'e', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\036', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'm', 'i', 'g', 'r', 
'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', ' ', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 
'n', 's', '/', 's', 'e', 'n', 's', 'i', 't', 'i', 'v', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 
'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\"', 
'N', '\n', '\r', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'e', 'c', 'r', 'e', 't', '\022', '=', '\n', '\006', 's', 'e', 'c', 'r', 'e', 
't', '\030', '\001', ' ', '\001', '(', '\013', '2', '\035', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'c', 'o', 
'r', 'e', '.', 'D', 'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\006', '\270', '\267', '\213', '\244', '\002', '\001', 'R', '\006', 's', 'e', 
'c', 'r', 'e', 't', '\"', 'e', '\n', '\017', 'S', 'd', 's', 'S', 'e', 'c', 'r', 'e', 't', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '\022', 
'\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\004', 'n', 'a', 'm', 'e', '\022', '>', '\n', '\n', 's', 'd', 's', 
'_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\002', ' ', '\001', '(', '\013', '2', '\037', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', 
'.', 'v', '2', '.', 'c', 'o', 'r', 'e', '.', 'C', 'o', 'n', 'f', 'i', 'g', 'S', 'o', 'u', 'r', 'c', 'e', 'R', '\t', 's', 'd', 
's', 'C', 'o', 'n', 'f', 'i', 'g', '\"', '\372', '\002', '\n', '\006', 'S', 'e', 'c', 'r', 'e', 't', '\022', '\022', '\n', '\004', 'n', 'a', 'm', 
'e', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\004', 'n', 'a', 'm', 'e', '\022', 'L', '\n', '\017', 't', 'l', 's', '_', 'c', 'e', 'r', 't', 
'i', 'f', 'i', 'c', 'a', 't', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '!', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', 
'.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 'T', 'l', 's', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'H', '\000', 
'R', '\016', 't', 'l', 's', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '\022', 'Y', '\n', '\023', 's', 'e', 's', 's', 'i', 
'o', 'n', '_', 't', 'i', 'c', 'k', 'e', 't', '_', 'k', 'e', 'y', 's', '\030', '\003', ' ', '\001', '(', '\013', '2', '\'', '.', 'e', 'n', 
'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 'T', 'l', 's', 'S', 'e', 's', 's', 'i', 'o', 
'n', 'T', 'i', 'c', 'k', 'e', 't', 'K', 'e', 'y', 's', 'H', '\000', 'R', '\021', 's', 'e', 's', 's', 'i', 'o', 'n', 'T', 'i', 'c', 
'k', 'e', 't', 'K', 'e', 'y', 's', '\022', '`', '\n', '\022', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', '_', 'c', 'o', 'n', 
't', 'e', 'x', 't', '\030', '\004', ' ', '\001', '(', '\013', '2', '/', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', 
'.', 'a', 'u', 't', 'h', '.', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'i', 
'o', 'n', 'C', 'o', 'n', 't', 'e', 'x', 't', 'H', '\000', 'R', '\021', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', 'C', 'o', 
'n', 't', 'e', 'x', 't', '\022', 'I', '\n', '\016', 'g', 'e', 'n', 'e', 'r', 'i', 'c', '_', 's', 'e', 'c', 'r', 'e', 't', '\030', '\005', 
' ', '\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 
'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'e', 'c', 'r', 'e', 't', 'H', '\000', 'R', '\r', 'g', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 
'e', 'c', 'r', 'e', 't', 'B', '\006', '\n', '\004', 't', 'y', 'p', 'e', 'B', 'i', '\n', '\037', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 
'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 'u', 't', 'h', 'B', '\013', 
'S', 'e', 'c', 'r', 'e', 't', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\362', '\230', '\376', '\217', '\005', '+', '\022', ')', 'e', 'n', 'v', 'o', 
'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 
'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 
't', 'o', '3', 
};

static upb_def_init *deps[7] = {
  &envoy_api_v2_auth_common_proto_upbdefinit,
  &envoy_api_v2_core_base_proto_upbdefinit,
  &envoy_api_v2_core_config_source_proto_upbdefinit,
  &udpa_annotations_migrate_proto_upbdefinit,
  &udpa_annotations_sensitive_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  NULL
};

upb_def_init envoy_api_v2_auth_secret_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/api/v2/auth/secret.proto",
  UPB_STRVIEW_INIT(descriptor, 928)
};
