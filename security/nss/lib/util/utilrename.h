/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License") you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is the Network Security Services libraries.
 *
 * The Initial Developer of the Original Code is
 * Sun Microsystems, Inc.
 * Portions created by the Initial Developer are Copyright (C) 2007
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

/*
 * utilrename.h - rename symbols moved from libnss3 to libnssutil3
 *
 */

#ifndef _LIBUTIL_H_
#define _LIBUTIL_H_ _LIBUTIL_H__Util

#ifdef USE_UTIL_DIRECTLY

/* functions moved from libnss3 */
#define nss_InitLock __nss_InitLock_Util
#define __nss_InitLock __nss_InitLock_Util
#define ATOB_AsciiToData ATOB_AsciiToData_Util
#define ATOB_ConvertAsciiToItem ATOB_ConvertAsciiToItem_Util
#define BTOA_ConvertItemToAscii BTOA_ConvertItemToAscii_Util
#define BTOA_DataToAscii BTOA_DataToAscii_Util
#define CERT_GenTime2FormattedAscii CERT_GenTime2FormattedAscii_Util
#define DER_AsciiToTime DER_AsciiToTime_Util
#define DER_DecodeTimeChoice DER_DecodeTimeChoice_Util
#define DER_Encode DER_Encode_Util
#define DER_EncodeTimeChoice DER_EncodeTimeChoice_Util
#define DER_GeneralizedDayToAscii DER_GeneralizedDayToAscii_Util
#define DER_GeneralizedTimeToTime DER_GeneralizedTimeToTime_Util
#define DER_GetInteger DER_GetInteger_Util
#define DER_Lengths DER_Lengths_Util
#define DER_TimeChoiceDayToAscii DER_TimeChoiceDayToAscii_Util
#define DER_TimeToGeneralizedTime DER_TimeToGeneralizedTime_Util
#define DER_TimeToGeneralizedTimeArena DER_TimeToGeneralizedTimeArena_Util
#define DER_TimeToUTCTime DER_TimeToUTCTime_Util
#define DER_UTCDayToAscii DER_UTCDayToAscii_Util
#define DER_UTCTimeToAscii DER_UTCTimeToAscii_Util
#define DER_UTCTimeToTime DER_UTCTimeToTime_Util
#define NSS_PutEnv NSS_PutEnv_Util
#define NSSBase64_DecodeBuffer NSSBase64_DecodeBuffer_Util
#define NSSBase64_EncodeItem NSSBase64_EncodeItem_Util
#define NSSBase64Decoder_Create NSSBase64Decoder_Create_Util
#define NSSBase64Decoder_Destroy NSSBase64Decoder_Destroy_Util
#define NSSBase64Decoder_Update NSSBase64Decoder_Update_Util
#define NSSBase64Encoder_Create NSSBase64Encoder_Create_Util
#define NSSBase64Encoder_Destroy NSSBase64Encoder_Destroy_Util
#define NSSBase64Encoder_Update NSSBase64Encoder_Update_Util
#define NSSRWLock_Destroy NSSRWLock_Destroy_Util
#define NSSRWLock_HaveWriteLock NSSRWLock_HaveWriteLock_Util
#define NSSRWLock_LockRead NSSRWLock_LockRead_Util
#define NSSRWLock_LockWrite NSSRWLock_LockWrite_Util
#define NSSRWLock_New NSSRWLock_New_Util
#define NSSRWLock_UnlockRead NSSRWLock_UnlockRead_Util
#define NSSRWLock_UnlockWrite NSSRWLock_UnlockWrite_Util
#define PORT_Alloc PORT_Alloc_Util
#define PORT_ArenaAlloc PORT_ArenaAlloc_Util
#define PORT_ArenaGrow PORT_ArenaGrow_Util
#define PORT_ArenaMark PORT_ArenaMark_Util
#define PORT_ArenaRelease PORT_ArenaRelease_Util
#define PORT_ArenaStrdup PORT_ArenaStrdup_Util
#define PORT_ArenaUnmark PORT_ArenaUnmark_Util
#define PORT_ArenaZAlloc PORT_ArenaZAlloc_Util
#define PORT_Free PORT_Free_Util
#define PORT_FreeArena PORT_FreeArena_Util
#define PORT_GetError PORT_GetError_Util
#define PORT_NewArena PORT_NewArena_Util
#define PORT_Realloc PORT_Realloc_Util
#define PORT_SetError PORT_SetError_Util
#define PORT_SetUCS2_ASCIIConversionFunction PORT_SetUCS2_ASCIIConversionFunction_Util
#define PORT_SetUCS2_UTF8ConversionFunction PORT_SetUCS2_UTF8ConversionFunction_Util
#define PORT_SetUCS4_UTF8ConversionFunction PORT_SetUCS4_UTF8ConversionFunction_Util
#define PORT_Strdup PORT_Strdup_Util
#define PORT_UCS2_ASCIIConversion PORT_UCS2_ASCIIConversion_Util
#define PORT_UCS2_UTF8Conversion PORT_UCS2_UTF8Conversion_Util
#define PORT_ZAlloc PORT_ZAlloc_Util
#define PORT_ZFree PORT_ZFree_Util
#define SEC_ASN1Decode SEC_ASN1Decode_Util
#define SEC_ASN1DecodeInteger SEC_ASN1DecodeInteger_Util
#define SEC_ASN1DecodeItem SEC_ASN1DecodeItem_Util
#define SEC_ASN1DecoderAbort SEC_ASN1DecoderAbort_Util
#define SEC_ASN1DecoderClearFilterProc SEC_ASN1DecoderClearFilterProc_Util
#define SEC_ASN1DecoderClearNotifyProc SEC_ASN1DecoderClearNotifyProc_Util
#define SEC_ASN1DecoderFinish SEC_ASN1DecoderFinish_Util
#define SEC_ASN1DecoderSetFilterProc SEC_ASN1DecoderSetFilterProc_Util
#define SEC_ASN1DecoderSetNotifyProc SEC_ASN1DecoderSetNotifyProc_Util
#define SEC_ASN1DecoderStart SEC_ASN1DecoderStart_Util
#define SEC_ASN1DecoderUpdate SEC_ASN1DecoderUpdate_Util
#define SEC_ASN1Encode SEC_ASN1Encode_Util
#define SEC_ASN1EncodeInteger SEC_ASN1EncodeInteger_Util
#define SEC_ASN1EncodeItem SEC_ASN1EncodeItem_Util
#define SEC_ASN1EncoderAbort SEC_ASN1EncoderAbort_Util
#define SEC_ASN1EncoderClearNotifyProc SEC_ASN1EncoderClearNotifyProc_Util
#define SEC_ASN1EncoderClearStreaming SEC_ASN1EncoderClearStreaming_Util
#define SEC_ASN1EncoderClearTakeFromBuf SEC_ASN1EncoderClearTakeFromBuf_Util
#define SEC_ASN1EncoderFinish SEC_ASN1EncoderFinish_Util
#define SEC_ASN1EncoderSetNotifyProc SEC_ASN1EncoderSetNotifyProc_Util
#define SEC_ASN1EncoderSetStreaming SEC_ASN1EncoderSetStreaming_Util
#define SEC_ASN1EncoderSetTakeFromBuf SEC_ASN1EncoderSetTakeFromBuf_Util
#define SEC_ASN1EncoderStart SEC_ASN1EncoderStart_Util
#define SEC_ASN1EncoderUpdate SEC_ASN1EncoderUpdate_Util
#define SEC_ASN1EncodeUnsignedInteger SEC_ASN1EncodeUnsignedInteger_Util
#define SEC_ASN1LengthLength SEC_ASN1LengthLength_Util
#define SEC_QuickDERDecodeItem SEC_QuickDERDecodeItem_Util
#define SECITEM_AllocItem SECITEM_AllocItem_Util
#define SECITEM_ArenaDupItem SECITEM_ArenaDupItem_Util
#define SECITEM_CompareItem SECITEM_CompareItem_Util
#define SECITEM_CopyItem SECITEM_CopyItem_Util
#define SECITEM_DupItem SECITEM_DupItem_Util
#define SECITEM_FreeItem SECITEM_FreeItem_Util
#define SECITEM_ItemsAreEqual SECITEM_ItemsAreEqual_Util
#define SECITEM_ZfreeItem SECITEM_ZfreeItem_Util
#define SECOID_AddEntry SECOID_AddEntry_Util
#define SECOID_CompareAlgorithmID SECOID_CompareAlgorithmID_Util
#define SECOID_CopyAlgorithmID SECOID_CopyAlgorithmID_Util
#define SECOID_DestroyAlgorithmID SECOID_DestroyAlgorithmID_Util
#define SECOID_FindOID SECOID_FindOID_Util
#define SECOID_FindOIDByTag SECOID_FindOIDByTag_Util
#define SECOID_FindOIDTag SECOID_FindOIDTag_Util
#define SECOID_FindOIDTagDescription SECOID_FindOIDTagDescription_Util
#define SECOID_GetAlgorithmTag SECOID_GetAlgorithmTag_Util
#define SECOID_SetAlgorithmID SECOID_SetAlgorithmID_Util
#define SGN_CompareDigestInfo SGN_CompareDigestInfo_Util
#define SGN_CopyDigestInfo SGN_CopyDigestInfo_Util
#define SGN_CreateDigestInfo SGN_CreateDigestInfo_Util
#define SGN_DestroyDigestInfo SGN_DestroyDigestInfo_Util

/* templates moved from libnss3 */
#define NSS_Get_SEC_AnyTemplate NSS_Get_SEC_AnyTemplate_Util
#define NSS_Get_SEC_BitStringTemplate NSS_Get_SEC_BitStringTemplate_Util
#define NSS_Get_SEC_BMPStringTemplate NSS_Get_SEC_BMPStringTemplate_Util
#define NSS_Get_SEC_BooleanTemplate NSS_Get_SEC_BooleanTemplate_Util
#define NSS_Get_SEC_GeneralizedTimeTemplate NSS_Get_SEC_GeneralizedTimeTemplate_Util
#define NSS_Get_SEC_IA5StringTemplate NSS_Get_SEC_IA5StringTemplate_Util
#define NSS_Get_SEC_IntegerTemplate NSS_Get_SEC_IntegerTemplate_Util
#define NSS_Get_SEC_NullTemplate NSS_Get_SEC_NullTemplate_Util
#define NSS_Get_SEC_ObjectIDTemplate NSS_Get_SEC_ObjectIDTemplate_Util
#define NSS_Get_SEC_OctetStringTemplate NSS_Get_SEC_OctetStringTemplate_Util
#define NSS_Get_SEC_PointerToAnyTemplate NSS_Get_SEC_PointerToAnyTemplate_Util
#define NSS_Get_SEC_PointerToOctetStringTemplate NSS_Get_SEC_PointerToOctetStringTemplate_Util
#define NSS_Get_SEC_SetOfAnyTemplate NSS_Get_SEC_SetOfAnyTemplate_Util
#define NSS_Get_SEC_UTCTimeTemplate NSS_Get_SEC_UTCTimeTemplate_Util
#define NSS_Get_SEC_UTF8StringTemplate NSS_Get_SEC_UTF8StringTemplate_Util
#define NSS_Get_SECOID_AlgorithmIDTemplate NSS_Get_SECOID_AlgorithmIDTemplate_Util
#define NSS_Get_sgn_DigestInfoTemplate NSS_Get_sgn_DigestInfoTemplate_Util
#define SEC_AnyTemplate SEC_AnyTemplate_Util
#define SEC_BitStringTemplate SEC_BitStringTemplate_Util
#define SEC_BMPStringTemplate SEC_BMPStringTemplate_Util
#define SEC_BooleanTemplate SEC_BooleanTemplate_Util
#define SEC_GeneralizedTimeTemplate SEC_GeneralizedTimeTemplate_Util
#define SEC_IA5StringTemplate SEC_IA5StringTemplate_Util
#define SEC_IntegerTemplate SEC_IntegerTemplate_Util
#define SEC_NullTemplate SEC_NullTemplate_Util
#define SEC_ObjectIDTemplate SEC_ObjectIDTemplate_Util
#define SEC_OctetStringTemplate SEC_OctetStringTemplate_Util
#define SEC_PointerToAnyTemplate SEC_PointerToAnyTemplate_Util
#define SEC_PointerToOctetStringTemplate SEC_PointerToOctetStringTemplate_Util
#define SEC_SetOfAnyTemplate SEC_SetOfAnyTemplate_Util
#define SEC_UTCTimeTemplate SEC_UTCTimeTemplate_Util
#define SEC_UTF8StringTemplate SEC_UTF8StringTemplate_Util
#define SECOID_AlgorithmIDTemplate SECOID_AlgorithmIDTemplate_Util
#define sgn_DigestInfoTemplate sgn_DigestInfoTemplate_Util

#endif /* USE_UTIL_DIRECTLY */

#endif /* _LIBUTIL_H_ */
